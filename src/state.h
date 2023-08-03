#include <stdint.h>

typedef struct ConditionBits {
    uint8_t carry:1;
    uint8_t aux_carry:1;
    uint8_t sign:1;
    uint8_t zero:1;
    uint8_t parity:1;
    uint8_t pad:3;
} ConditionBits;

typedef struct State8080 {
    uint8_t acc;        //Accumulator
    uint8_t b;          //General-purpose registers (b-l)
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;
    uint16_t sp;        //Stack pointer
    uint16_t pc;        //Program counter
    ConditionBits cc;   //Condition code
    uint8_t int_en;     //Interrupt enable
    uint8_t *memory;    //Might be somewhere else
} State8080;