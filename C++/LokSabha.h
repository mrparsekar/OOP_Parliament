#ifndef LOKSABHA_H
#define LOKSABHA_H

#include <vector>
#include "MemberOfParliament.h"

class LokSabha {
public:
    std::vector<MemberOfParliament> members;

    void addMember(MemberOfParliament member);

    std::string toString();
};

#endif
