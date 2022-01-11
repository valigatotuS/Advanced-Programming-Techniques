# our final program name (.exe) 
TARGET_EXEC ?= main
# directory for our build, storing intermediary files (like .o & .d)
BUILD_DIR ?= ./build
# directory of our source code 
SRC_DIRS ?= ./src

# defining our source files (selecting them in the directory and looking after the files with .c extension)
SRCS := $(shell find $(SRC_DIRS) -name *.c)
# defining our object files
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
# defining our dependencies
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP

# (LDFLAGS: linker flags)
$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

# assembly  (ASFLAGS: assembler flags)
$(BUILD_DIR)/%.s.o: %.s
	$(MKDIR_P) $(dir $@)
	$(AS) $(ASFLAGS) -c $< -o $@

# c source (CPPFLAGS: C preprocessor flags & CFLAGS: C compiler flags)
$(BUILD_DIR)/%.c.o: %.c
	$(MKDIR_P) $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@  


# target that is not a name of a file
.PHONY: clean

clean:
	$(RM) -r $(BUILD_DIR)

-include $(DEPS)

MKDIR_P ?= mkdir -p