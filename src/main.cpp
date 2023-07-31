#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    std::fstream rfile;
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
    return 0;
}