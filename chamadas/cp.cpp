#include <iostream>
#include <fstream>

int cp() {
  std::ifstream infile("meu_arquivo.txt");
  std::ofstream outfile("copia.txt");

  if (!infile.is_open() || !outfile.is_open()) {
    std::cerr << "Erro ao abrir os arquivos." << std::endl;
    return 1;
  }

  char c;
  while (infile.get(c)) {
    outfile.put(c);
  }

  infile.close();
  outfile.close();

  std::cout << "Arquivo copiado com sucesso." << std::endl;

  return 0;
}
