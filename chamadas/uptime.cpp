#include <iostream>
#include <sys/sysinfo.h>

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