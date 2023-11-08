#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

enum class AnimalType
{
    MAMMAL,
    REPTILE
};

class Animal
{
public:
    virtual void Read(std::ostream& ostream, std::istream& istream);
    virtual void Write(std::ostream& ostream);
    virtual std::string GetName() const;
    virtual AnimalType GetType() const = 0;

protected:
    std::string m_name;
};

#endif  // ANIMAL_H
