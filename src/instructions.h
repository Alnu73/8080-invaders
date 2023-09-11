#include <stdint.h>

typedef void (*InstructionFunction)();  //Function pointer for the instruction, for now only with 0 arguments

typedef struct Instruction {
    InstructionFunction function;
    uint8_t size;
    uint8_t operands;
};