/* The main entry point of the Crypto-Texter app holding the main function */

#include "encrypter.hpp"
#include "string"
#include "utils.hpp"

int main() {
  title("Crypto Texter");
  std::cout << std::endl;

  Encrypter *encrypter = new Encrypter();
  std::string input = takeInput("Enter text to encrypt", "->");

  return 0;
}
