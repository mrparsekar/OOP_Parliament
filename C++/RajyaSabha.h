#ifndef RAJYASABHA_H
#define RAJYASABHA_H

#include <vector>
#include "MemberOfParliament.h"

class RajyaSabha {
public:
    std::vector<MemberOfParliament> members;

    void addMember(MemberOfParliament member);

    std::string toString();
};

#endif
