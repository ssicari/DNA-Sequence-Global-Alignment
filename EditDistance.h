#ifndef EDITDISTANCE_H
#define EDITDISTANCE_H
#include<iostream>
#include<string>
#include<memory>
#include<iomanip>
#include<algorithm>
#include<SFML/System.hpp>

class ED {
 public:
  ED(std::string N, std::string M);//constructor
 ~ED();//deconstructor
  //static int penalty(char a, char b);//returns penalty 0 or 1
  static int min(int a, int b, int c);//returns minimum of the three
  int OptDistance();//returns optimal distance after populating matrix
  std::string Alignment();//returns a string to print, format with \n
  
 private:
  std::string DNAStringOne;
  std::string DNAStringTwo;
  int j;
  int i;
  int row;
  int column;
  int** arr;


};


#endif
