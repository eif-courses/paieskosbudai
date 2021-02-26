//
// Created by Marius on 2/26/2021.
//

#include <iostream>
#include "Stekas.h"

void Stekas::push(int elementas) {
  if (top != 10) { // jeigu pilnas
    top++; // -1 pasikeisti i 0
    stekas[top] = elementas;
  }
}

void Stekas::pop() {
  if (top != -1) { // jeigu tuscias
    stekas[top] = 0;
    top--; // 0 - 1 = -1
  }
}



int Stekas::GetTop() const {
  return stekas[top];
}

void Stekas::display() {
  std::cout << "masyve isdestytas stekas"<< std::endl;
  for (int i = 0; i <= top; ++i) {
    std::cout << stekas[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "STEKAS ir jo duomenys: "<< std::endl;
  while(top != -1){
    std::cout << stekas[top] << " ";
    pop();
  }
  std::cout << std::endl;

}


