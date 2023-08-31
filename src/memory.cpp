#include <fstream>
#include <iostream>
#include "memory.h"

Memory::Memory() {
    for (int i=0; i<MEM_SIZE; i++) {
        memory[i] = 0;
    }
}

Memory::~Memory() {

}

void Memory::load_rom(std::string name) {
    std::fstream rfile;
    std::cout<<"Opening file called "<<name<<std::endl;
    rfile.open("./invaders/invaders", std::fstream::in | std::fstream::out | std::fstream::app);
    if (!rfile) {
        std::cout<<"Error opening file. Aborting.\n";
    }
    else {
        std::cout<<"File successfully opened.\n";
        std::streampos fsize = 0;
        fsize = rfile.tellg();
        rfile.seekg(0, std::ios::end);
        fsize = rfile.tellg() - fsize;
        std::cout<<"File size is "<<fsize<<std::endl;;
        char *buffer = new char [fsize];
        rfile.seekg(0);
        if (rfile.read(buffer, fsize)) {
            std::cout<<"works\n";
            std::cout.write (buffer, fsize);
        }
        rfile.close();
    }
}

uint8_t Memory::read(uint16_t addr) {
    return memory[addr];
}

void Memory::write(uint16_t addr, uint8_t data) {
    memory[addr] = data;
}