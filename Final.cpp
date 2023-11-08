#include <iostream>
#include "Database.h"

int main()
{
    Database database;
    bool quit = false;

    while (!quit)
    {
        std::cout << "1 - Create\n";
        std::cout << "2 - Display All\n";
        std::cout << "3 - Display by Name\n";
        std::cout << "4 - Display by Type\n";
        std::cout << "5 - Quit\n";

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            {
                std::cout << "1 - Mammal\n";
                std::cout << "2 - Reptile\n";
                std::cout << "Enter the type: ";

                int type;
                std::cin >> type;

                database.Create(static_cast<AnimalType>(type-1));
                break;
            }
        case 2:
            database.DisplayAll();
            break;
        case 3:
            {
                std::string name;
                std::cout << "Enter the name: ";
                std::cin >> name;
                database.Display(name);
                break;
            }
        case 4:
            {
                std::cout << "1 - Mammal\n";
                std::cout << "2 - Reptile\n";
                std::cout << "Enter the type: ";

                int type;
                std::cin >> type;

                database.Display(static_cast<AnimalType>(type));
                break;
            }
        case 5:
            quit = true;
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }

        std::cout << std::endl;
    }

    return 0;
}
