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
    std::cout << "Enter a name: "
    std::getline(std::cin, name);

    std::cout << "Enter an adjective: "
    std::getline(std::cin, adjective);

    std::cout << "Enter a noun: "
    std::getline(std::cin, noun);

    std::cout << "Please excuse " << name <<". \n"
              << "who is far too " << adjective << std::endl
              << "to attend " << noun << "class. \n";

  } else if(number == 2) {
    std::string name, noun, type_of_fluid, substance;

    std::cin.ignore();
    
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
