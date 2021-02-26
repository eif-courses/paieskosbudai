#include <iostream>
#include "Algoritmas.h"
#include "Stekas.h"

using namespace std;
#include <stack>
#include <queue>
#include <vector>

int main() {

  vector<string> salys{"Lietuva", "Prancuzija", "Vokietija"};

  for (int i = 0; i < salys.size(); ++i) {
    cout << salys[i]<< " ";
  }
  cout << endl;

  for(auto it: salys){
    cout << it << " ";
  }
  cout << endl;

  for(string s: salys){
    cout << s << " ";
  }
  cout << endl;






  // FIFO => first in first out
  queue<string> eile;

  eile.push("Petras");
  eile.push("Onute");
  eile.push("Jonas");
  eile.push("Kazimieras");

  cout << "==============EILES (QUEUE) OPERACIJOS============" << endl;

  cout << "Pirmas asmuo laukiantis eile: " << eile.front() << endl;


  cout << "Paskutinis asmuo laukiantis eile: " << eile.back()<< endl;

  eile.pop();
  cout << "Pirmas asmuo laukiantis eile: " << eile.front() << endl;

  cout << "============================================================" << endl;


  Stekas st;
  st.push(55);
  st.push(99);
  st.push(33);
  st.display();
  cout <<"virsune arba top: " <<st.GetTop() << endl;
  st.pop();
  st.pop();
  st.display();
  cout <<"virsune arba top: " <<st.GetTop() << endl;


  // STL -> standard templates library
  stack<int> stekas; // LIFO => last in first out

  stekas.push(2); // ideti i steka
  stekas.push(5);
  stekas.push(523);
  stekas.push(2); // ideti i steka
  stekas.push(5);
  stekas.push(523);
  cout << "----------------STEKAS NAUDOJANT STL--------------------------" << endl;
  while (!stekas.empty()){
    cout << stekas.top() <<" ";
    stekas.pop();
  }
  cout << "\n------------------------------------------" << endl;



  stekas.pop(); // isimti is steko virsutini elementa
  stekas.empty(); // artuscias?
  stekas.size(); // dydis arba kiekYraelementu?
  stekas.top(); // virsutinisElementas









  int raktinisZodis = 22;

  // {22, 22, 22, 22 .................................}
  vector<int> sarasas{22, 44, 66, 111, 22, 545, 55, 22, 125, 2151, 21512, 241, 22};
  Algoritmas algoritmas;

  vector<int> rastuRezultatuSarasas = algoritmas.TiesinePaieska(sarasas, raktinisZodis);

  if (!rastuRezultatuSarasas.empty()) {
    for (int rastasZodzioIndeksas: rastuRezultatuSarasas) {
    //  cout << "indeksas: " << rastasZodzioIndeksas << ", " << "rasta reiksme: " << sarasas.at(rastasZodzioIndeksas)<< endl;
    }
  } else {
    cout << "nepavyko rasti ieskomo zodzio: " << raktinisZodis << endl;
  }


  vector<int> rasta = algoritmas.DvejetainePaieska(sarasas, 0, (int) sarasas.size() - 1, raktinisZodis);

  if (!rasta.empty()) {
    for(int it: rasta) {
    //  cout << "RASTAS INDEKSAS: " << it << ", ieskomas elementas:" << sarasas[it] << endl;
    }
  }

  int input = 1;
  while (input != 0){
    cout << "vertimas: " << algoritmas.Versti() <<endl;

    cout << "1. ieskoti kito zodzio." <<endl;
    cout << "0. kad iseiti iveskite." <<endl;

    cout << "pasirinkite: ";
    cin >> input;

  }


  return 0;
}
