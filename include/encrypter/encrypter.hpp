/* Header file for the encrypter class which will do the encrypting part of the
 * Crypto-Texter app */

#ifndef ENCRYPTER_HPP

#include <iostream>

class Encrypter {
private:
public:
  std::string algoReader(std::string filename);
  void algoSetter();
  std::string encrypt(std::string textToEncrypt);
};

#endif // ENCRYPTER_HPP