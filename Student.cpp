#include "Student.h"
#include <iostream>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int id, char n[20]) {
  int i;
  studentId = id;
  for(i=0; i<20; i++)
  {
    name[i] = n[i];
  }
}

// Display StudentId and Name
void Student::display() {
  int i;
  cout << studentId << endl;
  for(i=0; i<20; i++)
    {
      cout << name[i];
    }
  cout << endl;
}
