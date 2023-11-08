#include "Reptile.h"

void Reptile::Read(std::ostream& ostream, std::istream& istream)
{
    Animal::Read(ostream, istream);
    ostream << "Is venomous? (1 for yes, 0 for no): ";
    istream >> m_isVenomous;
}

void Reptile::Write(std::ostream& ostream)
{
    Animal::Write(ostream);
    ostream << "Is venomous: " << (m_isVenomous ? "Yes" : "No") << std::endl;
}

AnimalType Reptile::GetType() const
{
    return AnimalType::REPTILE;
}
