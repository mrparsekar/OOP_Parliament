#include "ParliamentOfIndia.h"

ParliamentOfIndia::ParliamentOfIndia(PresidentOfIndia president, RajyaSabha rajyaSabha, LokSabha lokSabha)
    : president(president), rajyaSabha(rajyaSabha), lokSabha(lokSabha) {}

std::string ParliamentOfIndia::toString() {
    return president.toString() + "\n" + rajyaSabha.toString() + "\n" + lokSabha.toString();
}
