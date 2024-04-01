#include <iostream>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sysinfo.h>
#include <dirent.h>
#include <fstream>


int date() {

  time_t t = time(NULL);

  tm* timeinfo = localtime(&t);

  std::cout << "Data: " << timeinfo->tm_mday << "/" << timeinfo->tm_mon + 1 << "/" << timeinfo->tm_year + 1900 << std::endl;
  std::cout << "Hora: " << timeinfo->tm_hour << ":" << timeinfo->tm_min << ":" << timeinfo->tm_sec << std::endl;

  return 0;
}



int uptime() {

  struct sysinfo info;

  sysinfo(&info);

  int days = info.uptime / (24 * 60 * 60);
  int hours = (info.uptime % (24 * 60 * 60)) / (60 * 60);
  int minutes = (info.uptime % (60 * 60)) / 60;
  int seconds = info.uptime % 60;

  std::cout << "Tempo de atividade: " << days << " dias, " << hours << " horas, " << minutes << " minutos, " << seconds << " segundos" << std::endl;

  return 0;
}

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

int rm() {

  int status = remove("meu_arquivo.txt");


  if (status == -1) {
    std::cerr << "Erro ao remover o arquivo." << std::endl;
    return 1;
  }

  std::cout << "Arquivo removido com sucesso." << std::endl;

  return 0;
}

int mv() {
  
  int status = rename("meu_arquivo.txt", "novo_nome.txt");

  if (status == -1) {
    std::cerr << "Erro ao mover o arquivo." << std::endl;
    return 1;
  }

  std::cout << "Arquivo movido com sucesso." << std::endl;

  return 0;
}

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


int mkdir() {

  int status = mkdir("meu_diretorio", 0777);

  if (status == -1) {
    std::cerr << "Erro ao criar o diretório." << std::endl;
    return 1;
  }

  std::cout << "Diretório criado com sucesso." << std::endl;

  return 0;
}

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

int chmod() {
  int status = chmod("meu_arquivo.txt", 0644);

  if (status == -1) {
    std::cerr << "Erro ao alterar as permissões do arquivo." << std::endl;
    return 1;
  }

  std::cout << "Permissões do arquivo alteradas com sucesso." << std::endl;

  return 0;
}

int chown() {
  int status = chown("meu_arquivo.txt", "novo_usuario");
  if (status == -1) {
    std::cerr << "Erro ao alterar o proprietário do arquivo." << std::endl;
    return 1;
  }

  std::cout << "Proprietário do arquivo alterado com sucesso." << std::endl;

  return 0;
}