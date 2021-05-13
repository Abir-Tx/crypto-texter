/* Source file for Encrypter class. All the methods and implemention should live
 * here */

#include "encrypter.hpp"
#include "errorcodes.hpp"

std::string Encrypter::algoReader(std::string filename) {
  try {
    std::ifstream reader(filename);
    if (!reader.is_open())
      throw(FILENOTFOUND);
  } catch (int errorCode) {
    std::cerr << "ERROR: File named " << filename
              << " not found or does not exists" << '\n';
  }
}