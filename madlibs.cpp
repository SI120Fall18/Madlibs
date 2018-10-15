// This is madlibs using if/else if/else statements

#include <iostream>
#include <iomanip>

int main()
{
  int number;
  std::cout << "Welcome to madlibs! \n"
            << "Choose a number between 1-4: ";
  std::cin >> number;

  if(number == 1) {
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
              << "to attend " << noun << "class. \n";

  } else if(number == 2) {
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

    std::cout << name << " is sick \n with the " << noun << " flu. "
    << "\n Drink more " << type_of_fluid << " and \n take " << substance
    << " as needed." << std::endl;


  } else if(number == 3) {
    std::string name, place, noun;

    std::cin.ignore();
    std::cout << "Enter a name: ";
    std::getline(std::cin,name);

    std::cout << "Enter an place: ";
    std::getline(std::cin, place);

    std::cout << "Enter an noun: ";
    std::getline(std::cin, noun);

    std::cout << noun << " is authorized \n to be at "
    << place << std::endl << " instead of " << noun <<" class."
    << std::endl;


  } else if(number == 4) {
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


  } else {
    std::cout << "YOU ENTERED THE WRONG VALUE! I SAID 1-4!!   ＼(｀0´)／" << std::endl;
  }

  return 0;
}
