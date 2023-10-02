#include <iostream>
#include "Laptop.h"
#include "Touchpad.h"

using namespace std;

int main() {
    system("chcp 1251");
    setlocale(0, "");

    Laptop laptop("Intel", "i5-11", "ACH15", 8, 15000, 
        "Nvidia", "RTX 4060", "PCIex6", 16, 50000, 
        "Corsar", "MX5578", "DDR5", 16, 4777, 5000, true, 
        "Kingston", "AX58T", "2230", "M.2", 256, 400, 500, 6000,
        "Lenovo", "L45094-001", "Black", 11, 8, 5000,
        "Samsung", "SamLap-98", "QLED", 16, 90, 5000, 
        "Lenovo", "KeyLen-01", 0.7, 1000, true,
        "Logo", "Halpa", "Type-C", 32, 400, 500, 1000,
        "Logitech", "G102", "USB-3.0", 3, 0.5, 1000, true,
        "Lenovo", "IdeaPad", "Black");

    cout << "\OLD LAPTOP: " << endl;
    laptop.FullPrint();

    Laptop laptop1 = laptop;
    cout << "\nNEW LAPTOP: " << endl;
    laptop1.FullPrint();

    return 0;
}
