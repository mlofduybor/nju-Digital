TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=
TOP_SDC = $(shell find $(abspath ./TimingConstr) -name "*.sdc")


VERILATOR = verilator
GTKWAVE = gtkwave
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert
VERILATOR_SIM += --cc --exe --build -j 0 -Wall --trace-fst  

SYNC_RESULT := $(abspath ./result)
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
SIM = $(OBJ_DIR)/V$(TOPNAME)
WAVEFST = build/simx.fst

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

CSRCS_SIM := $(CSRCS)

CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
#include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		-y $(abspath ./vsrc) \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))


$(SIM): $(VSRCS) $(CSRCS_SIM)
	@rm -rf $(OBJ_DIR) 
	$(VERILATOR) $(VERILATOR_SIM) \
	--top-module $(TOPNAME) \
	-I./vsrc/ \
	--timing \
	--Mdir $(OBJ_DIR) \
	$^


all: default 

run: $(BIN) 
	@$^

sim: $(SIM)
	@$^

wave: $(SIM) $(WAVEFST)
	$(GTKWAVE) $(WAVEFST)

clean: 
	rm -rf $(BUILD_DIR) ./result 

sta: $(VSRCS) $(TOP_SDC)
	mkdir -p result
	cd /home/juniezhang/Downloads/yosys-sta && \
	$(MAKE) clean && \
	$(MAKE) sta DESIGN=$(TOPNAME) SDC_FILE=$(TOP_SDC) RTL_FILES="$(VSRCS)" RESULT_DIR=$(SYNC_RESULT)
	yosys -p "read_verilog $(SYNC_RESULT)/$(TOPNAME).netlist.syn.v; show -format dot -prefix $(SYNC_RESULT)/sync"
	dot -Tpng $(SYNC_RESULT)/sync.dot -o $(SYNC_RESULT)/sync.png 

.PHONY: default all clean run sim sync
