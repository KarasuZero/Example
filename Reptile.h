#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile : public Animal
{
public:
    void Read(std::ostream& ostream, std::istream& istream) override;
    void Write(std::ostream& ostream) override;
    AnimalType GetType() const override;
    
private:
    bool m_isVenomous;
};

#endif  // REPTILE_H
