#ifndef PARLIAMENTOFINDIA_H
#define PARLIAMENTOFINDIA_H

#include "PresidentOfIndia.h"
#include "RajyaSabha.h"
#include "LokSabha.h"

class ParliamentOfIndia {
public:
    PresidentOfIndia president;
    RajyaSabha rajyaSabha;
    LokSabha lokSabha;

    ParliamentOfIndia(PresidentOfIndia president, RajyaSabha rajyaSabha, LokSabha lokSabha);

    std::string toString();
};

#endif
