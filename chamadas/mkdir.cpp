#include <iostream>
#include <sys/stat.h>

int mkdir() {

  int status = mkdir("meu_diretorio", 0777);

  if (status == -1) {
    std::cerr << "Erro ao criar o diretório." << std::endl;
    return 1;
  }

  std::cout << "Diretório criado com sucesso." << std::endl;

  return 0;
}
