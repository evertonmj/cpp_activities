//envelope.cpp
//http://br.spoj.com/problems/ENVEL09/

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n_candy, n_types, candy;
  vector<int> candies;

  cin >> n_candy >> n_types;

  for(int i = 0; i < n_candy; i++) {
      cin >> candy;
      candies.push_back(candy);
  }
}
