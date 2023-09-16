#include <iostream>
#include "Laptop.h"
#include "CPU.h"

using namespace std;

int main() {
    system("chcp 1251");
    setlocale(0, "");

    cout << "Hello World!\n";

    Laptop laptop("Intel", "i5-11", "ACH15", 8, 15000, 
        "Nvidia", "RTX 4060", "PCIex6", 16, 50000, 
        "Corsar", "MX5578", "DDR5", 16, 4777, 5000, true, 
        "Kingston", "AX58T", "2230", "M.2", 256, 400, 500, 6000,
        "Lenovo", "IdeaPad", "Black");

    cout << "\OLD LAPTOP: " << endl;
    laptop.FullPrint();

    Laptop laptop1 = laptop;
    cout << "\nNEW LAPTOP: " << endl;
    laptop1.FullPrint();

    return 0;
}
