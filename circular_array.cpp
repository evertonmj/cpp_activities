//circular_array.cpp
//https://www.hackerrank.com/challenges/circular-array-rotation

#include <iostream>
#include <vector>

using namespace std;

int main () {
  int array_size, n_operations, n_tests, number;
  vector<int> numbers;

  //read inputs
  cin >> array_size >> n_operations >> n_tests;

  for(int i = 0; i < array_size; i++) {
    cin >> number;
    numbers.push_back(number);
  }

  //perform rotations
  for(int i = 0; i < n_operations; i++) {
    int first_el, last_el;
    last_el = numbers.at(array_size - 1);
    numbers.pop_back();
    numbers.insert(numbers.begin(), last_el);
  }

  //perform searches
  for(int i = 0; i < n_tests;i++) {
    int current;
    cin >> current;

    cout << numbers[current] << endl;
  }

  return 0;
}
