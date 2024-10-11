#include "LokSabha.h"

void LokSabha::addMember(MemberOfParliament member) {
    members.push_back(member);
}

std::string LokSabha::toString() {
    std::string result = "Lok Sabha Members:\n";
    for (const auto& member : members) {
        result += member.toString() + "\n";
    }
    return result;
}
