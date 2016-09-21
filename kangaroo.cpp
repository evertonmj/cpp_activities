//kangaroo.cpp
//https://www.hackerrank.com/challenges/kangaroo

#include <iostream>

using namespace std;

int main() {
  int x1, v1, x2, v2, curstep1, curstep2, total_jumps1 = 1, total_jumps2 = 1;

  cin >> x1 >> v1 >> x2 >> v2;

  if(v2 > v1 && x2 > x1) {
    cout << "NO";
  } else if(v2 == v1 && x2 > x1) {
    cout << "NO";
  } else {
    if( (x2-x1) % (v2-v1) == 0) {
      cout << "YES";
    } else {
      cout << "NO";
    }
  }

  return 0;
}
