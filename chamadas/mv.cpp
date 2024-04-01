#include <iostream>
#include <fstream>

int mv() {
  
  int status = rename("meu_arquivo.txt", "novo_nome.txt");

  if (status == -1) {
    std::cerr << "Erro ao mover o arquivo." << std::endl;
    return 1;
  }

  std::cout << "Arquivo movido com sucesso." << std::endl;

  return 0;
}
