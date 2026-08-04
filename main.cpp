#include <iostream>
#include <vector>
#include "./src/include/student.h"
#include "./src/include/book.h"

using namespace std;

int main() {
  vector<Student> student_data;
  vector<Book> book_data;

  Student s;
  student_data.push_back(s);

  Book b;
  book_data.push_back(b);

  for (Student &s: student_data) {
    s.show();
  }
  
  for (Book &b: book_data) {
    b.show();
  }
  return 0;
}
