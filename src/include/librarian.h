#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include<iostream>
#include<string>
using namespace std;

class Librarian {
public:
	int staffId;
  string name, email, shift, password;
  
	Librarian();
	void show();
};

#endif