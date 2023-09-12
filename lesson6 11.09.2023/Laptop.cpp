#include "Laptop.h"

Laptop::Laptop() {

}

Laptop::Laptop(const char*, const char*, const char*, int) {
}

// cpu
Laptop::Laptop(const char* cp, const char* md, const char* ct, int noc, int pr):cpu(cp, md, ct, noc, pr) {

}

Laptop::~Laptop() {
}
