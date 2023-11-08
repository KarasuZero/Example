#include "Animal.h"

void Animal::Read(std::ostream& ostream, std::istream& istream)
{
    ostream << "Enter name: ";
    istream >> m_name;
}

void Animal::Write(std::ostream& ostream)
{
    ostream << "Name: " << m_name << std::endl;
}

std::string Animal::GetName() const
{
    return m_name;
}
