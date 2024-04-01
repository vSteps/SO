#include <iostream>
#include <time.h>

int date() {

  time_t t = time(NULL);

  tm* timeinfo = localtime(&t);

  std::cout << "Data: " << timeinfo->tm_mday << "/" << timeinfo->tm_mon + 1 << "/" << timeinfo->tm_year + 1900 << std::endl;
  std::cout << "Hora: " << timeinfo->tm_hour << ":" << timeinfo->tm_min << ":" << timeinfo->tm_sec << std::endl;

  return 0;
}
