//school_call.cpp
//http://br.spoj.com/problems/CHAMADA1/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n_students, k_sort;
  string name;
  vector<string> students;

  cin >> n_students >> k_sort;

  for(int i = 0; i < n_students; i++) {
    cin >> name;
    students.push_back(name);
  }

  sort(students.begin(), students.end());

  cout << students.at(k_sort - 1);

  return 0;
}
