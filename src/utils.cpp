/* Source file for utils.cpp */

#include "utils.hpp"

std::string takeInput(const char *textToShow, const char *saperator) {
  std::string inputtedText;
  std::cout << textToShow << " " << saperator;
  std::getline(std::cin, inputtedText);
  return inputtedText;
}

void output(const char *textToShow, const char *saperator, const char *result) {
  std::cout << textToShow << " " << saperator << result << std::endl;
}