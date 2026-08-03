#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
using namespace std;

class Student {
public:
  string name, email, mobile_number;
  int id;
  
  Student();
  void show();
};

#endif