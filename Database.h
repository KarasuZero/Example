#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "Animal.h"

class Database
{
public:
    ~Database();
    void Create(AnimalType type);
    void DisplayAll();
    void Display(const std::string& name);
    void Display(AnimalType type);

private:
    std::vector<Animal*> m_objects;
};

#endif // DATABASE_H