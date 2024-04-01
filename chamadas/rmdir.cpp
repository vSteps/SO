#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>

int rmdir(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Erro: uso: " << argv[0] << " <diretorio>" << std::endl;
    return 1;
  }

  std::wstring dir_name(argv[1]);

  int status = _rmdir(dir_name.c_str());

  if (status == 0) {
    std::cout << "Diretório \"" << dir_name << "\" removido com sucesso." << std::endl;
  } else {
    std::cerr << "Erro ao remover o diretório \"" << dir_name << "\":" << std::endl;
    std::cerr << strerror(errno) << std::endl;
  }

  return status;
}