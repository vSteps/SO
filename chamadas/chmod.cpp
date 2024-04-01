#include <iostream>
#include <sys/stat.h>

int chmod() {
  int status = chmod("meu_arquivo.txt", 0644);

  if (status == -1) {
    std::cerr << "Erro ao alterar as permissões do arquivo." << std::endl;
    return 1;
  }

  std::cout << "Permissões do arquivo alteradas com sucesso." << std::endl;

  return 0;
}
