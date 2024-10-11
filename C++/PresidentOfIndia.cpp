#include "PresidentOfIndia.h"

PresidentOfIndia::PresidentOfIndia(std::string name) {
    this->name = name;
}

std::string PresidentOfIndia::toString() {
    return "President of India: " + name;
}
