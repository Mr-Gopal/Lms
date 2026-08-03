#include "../include/student.h"


Student::Student() {
  cout<<"Student Data: "<<endl;
  cout<<"Enter name: "; getline(cin, name);
  cout<<"Enter Id: "; cin>>id;
  cin.ignore();
  cout<<"Enter email: ", getline(cin, email);
  cout<<"Enter mobile number: "; getline(cin, mobile_number);
}

void Student::show() {
  cout<<endl<<"Student Data: "<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Id: "<<id<<endl;
  cout<<"Email: "<<email<<endl;
  cout<<"Mobile no. "<<mobile_number<<endl;
}