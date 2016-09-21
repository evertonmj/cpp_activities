//gears_of_war.cpp
//https://www.hackerrank.com/contests/w23/challenges/gears-of-war

#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;

  for(int i = 0; i < n; i++) {
      int q;
      cin >> q;

      if(q % 2 != 0) {
          cout << "No";
      } else {
          cout << "Yes";
      }

      cout << endl;
  }

  return 0;
}
