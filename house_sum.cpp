//house_sum.cpp
//http://br.spoj.com/problems/SOMA12/

#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long n_house, total, house, a, b, house_a = 0, house_b = 0;
    set<long> houses;

    cin >> n_house;

    for(int i = 0; i < n_house; i++) {
        cin >> house;
        houses.insert(house);
    }

    cin >> total;

    for(set<long>::iterator house_it = houses.begin(); house_it != houses.end(); house_it++) {
      a = *house_it;

      for(set<long>::iterator house_it2 = house_it; house_it2 != houses.end(); house_it2++) {
          b = *house_it2;
          int temp_total = a + b;
          if(temp_total == total) {
            house_a = a;
            house_b = b;
          }
      }
    }

    cout << house_a << " " << house_b;

    return 0;
}
