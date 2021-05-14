/* Utility functions header file for Crypto-Texter. All the most & commonly used
 * & shared func are declared here */

#ifndef UTILS_HPP

#include <iomanip>
#include <iostream>

// Function for taking inputs from user
std::string takeInput(const char *textToShow, const char *saperator);

// Function for outputting given text/string in a nice way
void output(const char *textToShow, const char *saperator, const char *result);

// To print title/headings in a formatted way
void title(const char *titleText);

#endif // UTILS_HPP