#include <iostream>
#include <fstream>

int rm() {

  int status = remove("meu_arquivo.txt");


  if (status == -1) {
    std::cerr << "Erro ao remover o arquivo." << std::endl;
    return 1;
  }

  std::cout << "Arquivo removido com sucesso." << std::endl;

  return 0;
}