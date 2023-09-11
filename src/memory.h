#include <stdint.h>
#include <string>

#define MEM_SIZE 0x4000

class Memory {
    public:
        Memory();
        ~Memory();
        void load_rom(std::string);
        uint8_t read(uint16_t);
        void write(uint16_t, uint8_t);
    private:
        uint8_t memory[MEM_SIZE];
};