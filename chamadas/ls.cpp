#include <iostream>
#include <dirent.h>

int ls() {

  DIR *dir = opendir(".");

  if (dir == NULL) {
    std::cerr << "Erro ao abrir o diretório." << std::endl;
    return 1;
  }

  struct dirent *entry;
  while ((entry = readdir(dir)) != NULL) {

    std::cout << entry->d_name << std::endl;
  }

  closedir(dir);

  return 0;
}
