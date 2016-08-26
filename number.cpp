//http://br.spoj.com/problems/PROIBIDO/

#include <iostream>
#include <set>

using namespace std;

int main() {
    long n, z, x;
    set<long> numbers;

    cin >> n;

    for(int i = 0; i < n; i++) {
      cin >> z;
      numbers.insert(z);
    }

    while(cin >> x && !cin.eof()) {
      if(numbers.find(x) != numbers.end()) {
        cout << "sim" << endl;
      } else {
        cout << "nao" << endl;
      }
    }

    return 0;
}
