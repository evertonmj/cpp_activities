//house_sum.cpp
//http://br.spoj.com/problems/SOMA12/

#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long n_house, total, house, a, b, current_total;
    set<long> houses;

    cin >> n_house;

    for(int i = 0; i < n_house; i++) {
        cin >> house;
        houses.insert(house);
    }

    cin >> total;

    for(set<long>::iterator house_it = houses.begin(); house_it != houses.end(); house_it++) {
      a = *house_it;

      current_total = total - a;
      set<long>::iterator it2 = houses.find(current_total);

      if(it2 != houses.end()) {
        b = *it2;
        break;
      }
    }

    cout << a << " " << b;

    return 0;
}
