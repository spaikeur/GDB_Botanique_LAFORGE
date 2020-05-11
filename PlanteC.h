#ifndef PLANTEC_H
#define PLANTEC_H

#include <string>

class PlanteC : public Plante{
    protected:
    int satisfed;

    public:
    PlanteC();
    int getValue();
    void need() {};
};

#endif