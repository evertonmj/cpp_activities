//grades.cpp
/*
* Problem description:
  Professor Archimedes needs your help to find out which is the most common note among the notes that his students took in the last race.
  The class has N students and your program must print the note that appears more often in N notes list.
  If more than more frequent note, you must print the most of them!
  For example, if the class has N = 10 students and the notes are [20, 25, 85, 40, 25, 90, 25, 40, 55, 40],
  the most common grades are 25 and 40, taking place three times each .
  Your program then should print 40.
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_STUDENTS 200
#define MAX_GRADE 100

using namespace std;

int main() {
  int n_students, grade, total_grade, greatest_grade = 0;

  cin >> n_students;

  if(n_students > 0 && n_students <= MAX_STUDENTS) {
      vector<int> grades;

      for(int i = 0; i < n_students; i++) {
        cin >> grade;
        if(grade <= MAX_GRADE) {
          grades.push_back(grade);
        }
      }

      grade = 0;

      for(vector<int>::iterator it = grades.begin(); it != grades.end(); it++) {
        total_grade = count(grades.begin(), grades.end(), *it);

        if(total_grade > greatest_grade ) {
          greatest_grade = total_grade;
          grade = *it;
        } else if (total_grade == greatest_grade && *it > grade) {
          grade = *it;
        }
      }

      cout << grade;
  }

  return 0;
}
