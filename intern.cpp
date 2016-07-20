//intern.cpp
/*
* Problem description:
You got an internship to work as a programmer in the office of your school.
As a first task, Ms Vilma, the coordinator, asked you to enhance a program that was developed by the former trainee.
This program has as input a list of names and final average of students in a class, and provides the student
with the highest average in the class.
Ms Vilma want to use the program to reward the best student from each school class. 
*/
#include <iostream>
#include <vector>
#include <algorithm>
#define MAX_STUDENTS 1000
#define MAX_CODE 20000
#define MAX_GRADE 100

using namespace std;

struct Student{
  int code, grade;
};

int main() {
  int n_students, greatest_grade = 0, n_class = 1;
  vector<Student> students;

  while(cin >> n_students && n_students > 0 && n_students <= MAX_STUDENTS) {
    for(int i = 0; i < n_students; i++) {
      Student student;
      cin >> student.code >> student.grade;

      if(student.code <= MAX_CODE && student.grade <= MAX_GRADE) {
        students.push_back(student);
        if(student.grade > greatest_grade) {
          greatest_grade = student.grade;
        }
      }
    }

    cout << "Turma " << n_class << endl;

    for(vector<Student>::iterator it = students.begin(); it != students.end(); it++) {
      if(it->grade == greatest_grade) {
        cout << it->code << " ";
      }
    }

    students.clear();
    greatest_grade = 0;
    n_class++;
  }

  return 0;
}
