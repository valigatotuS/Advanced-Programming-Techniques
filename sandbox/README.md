# C programming: an Introduction
Short summary about what I learned about the C language

## The basics

### Programming languages hierarchy
- machine code (binary/hex/octaal) [functiecode + operand]
- assembly                         [mnemo_fc + name]
- C & higher-level languages       [mnemo_f + symb_vars]

### Code execution

- Preprocessor outputs expanded source code (replaces #...)
    - Header files: containing the function declarations & macro definitions 
    [C standard lib <...>]
- Compiler translates the expanded source code into assembly. (.asm)
- Assembler translates assembly into machine code (.o : object file)
- Linker links the object files together into executable (.exe)
- Loader loads the program into the memory.

#### Makefiles

For conducting the orchestra we use a __Makefile__.
The Makefile defines these set of instructions (not loader) as shell commands.

More about:
- [jargon](https://berrendorf.inf.h-brs.de/sonstiges/make.html)
- [flags](https://earthly.dev/blog/make-flags/)
- [GNU manual](https://www.gnu.org/software/make/manual/make.html)

#### using the make utility

Makefiles are called with the make utility.
    make
We can also give some extra instructions.
    make CFLAGS="-Wall" #passing some options to the C-preprocessor


