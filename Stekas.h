//
// Created by Marius on 2/26/2021.
//

#ifndef PAIESKOSBUDAI_STEKAS_H
#define PAIESKOSBUDAI_STEKAS_H


class Stekas {
private:
  int top = -1;
  int stekas[10];
public:
  void push(int elementas);
  void pop();
  int GetTop() const;
  void display();


};


#endif //PAIESKOSBUDAI_STEKAS_H
