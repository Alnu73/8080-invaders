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
    state->cc
}

CPU8080::~CPU8080() {

}

void CPU8080::load_rom() {

}

void CPU8080::execute_instruction() {

}

void CPU8080::emulate() {

}