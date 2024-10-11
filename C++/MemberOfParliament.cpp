#include "MemberOfParliament.h"

MemberOfParliament::MemberOfParliament(std::string name, std::string position, std::string party) {
    this->name = name;
    this->position = position;
    this->party = party;
}

std::string MemberOfParliament::toString() {
    return "Name: " + name + " Position: " + position + " Party: " + party;
}
