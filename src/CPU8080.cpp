#include "CPU8080.h"

CPU8080::CPU8080() {
    state->acc = 0;
    state->c = 0;
    state->d = 0;
    state->e = 0;
    state->h = 0;
    state->l = 0;
    state->sp = 0;
    state->pc = 0;
    state->cc = {0, 0, 0, 0, 0, 0};
    state->int_en = 0;
}

CPU8080::~CPU8080() {

}

void CPU8080::handle_instruction(uint8_t opcode) {
    
}

void CPU8080::emulate() {
    uint8_t opcode = memory->read(state->pc);
    handle_instruction(opcode);
}