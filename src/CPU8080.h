#include "state.h"
#include "Memory.h"

class CPU8080 {
    public:
        CPU8080();
        ~CPU8080();

        void emulate(); //Uses the state
        void execute_instruction();

    private:
        State8080* state;
        unsigned char* opcode;
        Memory* memory;
        //Video and devices?
};