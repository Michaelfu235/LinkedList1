#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student{
 public:
  Student(char* newname);
  char* name;
  char* getName();
};
#endif
