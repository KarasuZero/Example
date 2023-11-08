#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal
{
public:
    void Read(std::ostream& ostream, std::istream& istream) override;
    void Write(std::ostream& ostream) override;
    AnimalType GetType() const override;
    
private:
    int m_numberOfLegs;
};

#endif  // MAMMAL_H
