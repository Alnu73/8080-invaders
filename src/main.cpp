#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    std::fstream rfile;
    rfile.open("./invaders/invaders", std::ios::out);
    if (!rfile) {
        std::cout<<"Error opening file. Aborting.\n";
    }
    else {
        std::cout<<"File successfully opened.\n";
        rfile.close();
    }
    return 0;
}