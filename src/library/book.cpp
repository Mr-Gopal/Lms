#include "../include/book.h"

Book::Book() {
  cout<<"Book Data: "<<endl;
	cout<<"Enter ISBN: "; getline(cin, ISBN);
	cout<<"Enter title: "; getline(cin, title);
	cout<<"Enter author: "; getline(cin, author);
	cout<<"Enter category: "; getline(cin, category);
	cout<<"Enter publisher: "; getline(cin, publisher);
}

void Book::show() {
  cout<<endl<<"Book Data: "<<endl;
  cout<<"ISBN: "<<ISBN<<endl;
  cout<<"title: "<<title<<endl;
  cout<<"author: "<<author<<endl;
  cout<<"category: "<<category<<endl;
  cout<<"publisher: "<<publisher<<endl;
}