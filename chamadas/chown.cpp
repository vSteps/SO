#include <iostream>
#include <sys/stat.h>

int chown() {
  int status = chown("meu_arquivo.txt", "novo_usuario");
  if (status == -1) {
    std::cerr << "Erro ao alterar o proprietário do arquivo." << std::endl;
    return 1;
  }

  std::cout << "Proprietário do arquivo alterado com sucesso." << std::endl;

  return 0;
}