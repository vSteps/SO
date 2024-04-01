#include <iostream>
#include <fstream>

int cat() {

  std::ifstream infile("meu_arquivo.txt");

  if (!infile.is_open()) {
    std::cerr << "Erro ao abrir o arquivo." << std::endl;
    return 1;
  }

  std::string line;
  while (getline(infile, line)) {
    std::cout << line << std::endl;
  }

  infile.close();

  return 0;
}