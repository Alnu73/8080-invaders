#include <stdint.h>

class Memory {
    public:
        void load_rom();
        //Read and write?
    private:
        uint8_t memory[0x4000];
};