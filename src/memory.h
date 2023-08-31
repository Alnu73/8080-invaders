#include <stdint.h>

class Memory {
    public:
        Memory();
        ~Memory();
        void load_rom();
        uint8_t read(uint16_t);
        void write(uint16_t, uint8_t);
    private:
        uint8_t memory[0x4000];
};