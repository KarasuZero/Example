#include "Database.h"
#include "Mammal.h"
#include "Reptile.h"

Database::~Database()
{
    for (Animal* animal : m_objects)
    {
        delete animal;
    }
}

void Database::Create(AnimalType type)
{
    Animal* animal = nullptr;
    
    switch (type)
    {
    case AnimalType::MAMMAL:
        {
            animal = new Mammal;
            break;
        }
    case AnimalType::REPTILE:
        {
            animal = new Reptile;
            break;
        }
    default:
        {
            std::cout << "Invalid animal type.\n";
            return; // Exit the function if the animal type is invalid
        }
    }
    
    animal->Read(std::cout, std::cin);
    m_objects.push_back(animal);
}


void Database::DisplayAll()
{
    for (Animal* animal : m_objects)
    {
        animal->Write(std::cout);
    }
}

void Database::Display(const std::string& name)
{
    for (Animal* animal : m_objects)
    {
        if (animal->GetName() == name)
        {
            animal->Write(std::cout);
        }
    }
}

void Database::Display(AnimalType type)
{
    for (Animal* animal : m_objects)
    {
        if (animal->GetType() == type)
        {
            animal->Write(std::cout);
        }
    }
}
