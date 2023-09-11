#include "state.h"
#include "memory.h"

class CPU8080 {
    public:
        CPU8080();
        ~CPU8080();

        void emulate(); //Uses the state
        void handle_instruction(uint8_t);
        void handle_interrupt(uint8_t);
        uint8_t fetch_instruction();
        void decode_instruction();

    private:
        State8080* state;
        Memory* memory;
        //Video and devices?
};