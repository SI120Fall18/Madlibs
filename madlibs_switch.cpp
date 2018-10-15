#include <iostream>
#include <iomanip>

int main()
{
  int number;
  std::cout << "Welcome to madlibs! \n"
            << "Choose a number between 1-4: ";
  std::cin >> number;

  switch(number){
    case 1:

      std::string name,
      adjective,
      noun;

      std::cin.ignore();
      std::cout << "Enter a name: ";
      std::getline(std::cin, name);

      std::cout << "Enter an adjective: ";
      std::getline(std::cin, adjective);

      std::cout << "Enter a noun: ";
      std::getline(std::cin, noun);

      std::cout << "Please excuse " << name <<". \n"
              << "who is far too " << adjective << std::endl
              << "to attend " << noun << " class. \n";

          break;

    case 2:

      std::string name, noun, type_of_fluid, substance;

      std::cin.ignore();
      std::cout << "Enter a name: ";
      std::getline(std::cin,name);

      std::cout << "Enter an noun: ";
      std::getline(std::cin, noun);

      std::cout << "Enter an type of fluid: ";
      std::getline(std::cin, type_of_fluid);

      std::cout << "Enter an substance: ";
      std::getline(std::cin, substance);

      std::cout << name << " is sick \nwith the " << noun << " flu. "
      << "\nDrink more " << type_of_fluid << " and \ntake " << substance
      << " as needed." << std::endl;

      break;

    case 3:

      std::string name, place, noun;

      std::cin.ignore();
      std::cout << "Enter a name: ";
      std::getline(std::cin,name);

      std::cout << "Enter an place: ";
      std::getline(std::cin, place);

      std::cout << "Enter an noun: ";
      std::getline(std::cin, noun);

      std::cout << noun << " is authorized \nto be at "
      << place << std::endl << "instead of " << noun <<" class."
      << std::endl;

      break;

    case 4:

    std::string name,
                noun,
                event;
    std::cin.ignore();
    std::cout << "Enter a name: ";
    std::getline(std::cin, name);

    std::cout << "Enter a noun: ";
    std::getline(std::cin, noun);

    std::cout << "Enter an event: ";
    std::getline(std::cin, event);

    std::cout  << name << " is too cool\n"
               << "for " << noun << " class.\n"
               << "instead, she/he will be\n"
               << "attending the " << event << ".\n";

        break;

    default:
        std::cout << "YOU ENTERED THE WRONG VALUE! I SAID 1-4!!   ＼(｀0´)／" << std::endl;


  }

  return 0;
}
