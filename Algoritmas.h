//
// Created by Marius on 2/26/2021.
//

#ifndef PAIESKOSBUDAI_ALGORITMAS_H
#define PAIESKOSBUDAI_ALGORITMAS_H
#include <vector>
#include <string>
#include <map>
using namespace std;

class Algoritmas {
public:
  vector<int> TiesinePaieska(vector<int> &sarasas, int raktinisZodis);
  vector<int> DvejetainePaieska(vector<int> &sarasas, int kaire, int desine, int raktinisZodis);
  std::string Versti();
  void SkaitytiIsCSV();

  Algoritmas();

private:
  map<std::string, std::string> zodynas;

};


#endif //PAIESKOSBUDAI_ALGORITMAS_H
