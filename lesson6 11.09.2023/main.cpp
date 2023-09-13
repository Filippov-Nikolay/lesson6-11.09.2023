#include <iostream>
#include "Laptop.h"

#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"

using namespace std;

int main() {
    system("chcp 1251");
    setlocale(0, "");

    cout << "Hello World!\n";


    Laptop laptop;
    Laptop laptop1;
    Laptop laptop2;
    CPU cpu;
    GPU gpu;
    RAM ram;
    SSD ssd;
    

    return 0;
}
