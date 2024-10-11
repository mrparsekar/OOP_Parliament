#ifndef MEMBEROF_PARLIAMENT_H
#define MEMBEROF_PARLIAMENT_H

#include <string>

class MemberOfParliament {
public:
    std::string name;
    std::string position;
    std::string party;

    MemberOfParliament(std::string name, std::string position, std::string party);

    std::string toString();
};

#endif
