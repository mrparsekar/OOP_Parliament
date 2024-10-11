#include "RajyaSabha.h"

void RajyaSabha::addMember(MemberOfParliament member) {
    members.push_back(member);
}

std::string RajyaSabha::toString() {
    std::string result = "Rajya Sabha Members:\n";
    for (const auto& member : members) {
        result += member.toString() + "\n";
    }
    return result;
}
