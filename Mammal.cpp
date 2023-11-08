#include "Mammal.h"

void Mammal::Read(std::ostream& ostream, std::istream& istream)
{
    Animal::Read(ostream, istream);
    ostream << "Enter number of legs: ";
    istream >> m_numberOfLegs;
}

void Mammal::Write(std::ostream& ostream)
{
    Animal::Write(ostream);
    ostream << "Number of legs: " << m_numberOfLegs << std::endl;
}

AnimalType Mammal::GetType() const
{
    return AnimalType::MAMMAL;
}
