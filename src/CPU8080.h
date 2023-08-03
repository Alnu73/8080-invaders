#include "state.h"

class CPU8080 {
    public:
        CPU8080();
        ~CPU8080();

        void emulate(); //Uses the state
        void execute_instruction();
        void load_rom();

    private:
        State8080* state;
        unsigned char* opcode;
        //Video?
};