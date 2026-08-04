#include "../include/librarian.h"

Librarian::Librarian() {
  cout<<"Enter ID: "; cin>>staffId;
  cin.ignore();
  cout<<"Enter name: "; getline(cin, name);
  cout<<"Enter email: ", getline(cin, email);
  cout<<"Enter shift: "; getline(cin, shift);
  cout<<"Enter password: "; getline(cin, password);
}

void Librarian::show() {
  cout<<"ID: "<<staffId<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Email: "<<email<<endl;
  cout<<"Shift: "<<shift<<endl;
  cout<<"Password: "<<password<<endl;
}