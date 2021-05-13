/* Header file for the encrypter class which will do the encrypting part of the
 * Crypto-Texter app */

#ifndef ENCRYPTER_HPP

#include <fstream>
#include <iostream>


class Encrypter {
private:
public:
  // A function for reading the file which will hold user specific algorithm and
  // then return the algorithm
  std::string algoReader(std::string filename);

  // takes user specific algorithm & saves it in a file
  void algoSetter();

  // Main method for doing encryption to given texts
  std::string encrypt(std::string textToEncrypt);
};

#endif // ENCRYPTER_HPP