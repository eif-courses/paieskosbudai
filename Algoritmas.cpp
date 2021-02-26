//
// Created by Marius on 2/26/2021.
//

#include "Algoritmas.h"
#include <algorithm>
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

vector<int> Algoritmas::TiesinePaieska(vector<int> &sarasas, int raktinisZodis) {

  // vector<int> sarasas{ 22, 44, 66, 111, 22, 545, 55, 22, 125, 2151, 21512, 241, 22 };
  vector<int> laikinasSarasas;

  for (int i = 0; i < sarasas.size(); ++i) {
    if (raktinisZodis == sarasas.at(i)) {
      laikinasSarasas.emplace_back(i);
    }
  }
  return laikinasSarasas;
}

vector<int> Algoritmas::DvejetainePaieska(vector<int> &sarasas, int kaire, int desine, int raktinisZodis) {

  std::sort(sarasas.begin(), sarasas.end()); // surikitiuoti elementai

  vector<int> laikinasisSarasas;

  // sarasas = [2, 4, 5, 6, 7, 8, 9, 22 ]
  // kaire = 0
  // desine = 8
  // vidurio = 0 + (8-0) / 2 = 4

  // antra iteracija

  // kaire = 5
  // desine = 8
  // vidurio = 5 + (8-5) / 2 = 6


  while (kaire <= desine) {

    int vidurioElementas = kaire + (desine - kaire) / 2;

    // vidurio = 7
    // raktinisZodis = 22
    if (sarasas[vidurioElementas] == raktinisZodis) {
      laikinasisSarasas.emplace_back(vidurioElementas);
      //return vidurioElementas; // rezultatas rasto zodzio indeksas
    }
    if (sarasas[vidurioElementas] < raktinisZodis) {  // 7 < 22
      kaire = vidurioElementas + 1;// desinysis (poaibis) sarasas
    } else {
      desine = vidurioElementas - 1; // kairysis (poaibis) sarasas
    }
  }
  return laikinasisSarasas;
}

std::string Algoritmas::Versti() {

  std::string fraze;
  std::cout << "Iveskite zodi: " << std::endl;
  std::cin >> fraze;

  if (zodynas.count(fraze)) {
    return zodynas[fraze];
  } else {
    return "nera tokio zodzio";
  }
}

Algoritmas::Algoritmas() {
//  zodynas.insert(pair<std::string, std::string>("labas", "hello"));
//  zodynas.insert(pair<std::string, std::string>("vilkas", "wolf"));
//  zodynas.insert(pair<std::string, std::string>("suo", "dog"));
//  zodynas.insert(pair<std::string, std::string>("kate", "cat"));
  SkaitytiIsCSV();
}

void Algoritmas::SkaitytiIsCSV() {

  ifstream input_from_file("zodynas.csv");
  string line; // labas,hello
  while (getline(input_from_file, line)) {
    line += ",";
    stringstream ss(line);
    string word;
    vector<string> words;
    while (getline(ss, word, ','))
      words.push_back(word);

    zodynas.insert(pair<std::string, std::string>(words[0], words[1]));
  }

}