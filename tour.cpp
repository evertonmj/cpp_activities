//tour.cpp
//https://moj.naquadah.com.br/contests/mata57-ufba-20161-l3/turne.pdf

#include <ctype.h>
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<string> last_cities;
    string city, prev_city = "-1";

    while(cin >> city && !cin.eof()) {
      int size = prev_city.size();
      if(toupper(city.at(0)) != toupper(prev_city.at(size-1))) {
        cout << city << endl;
        prev_city = city;
      } else {
        last_cities.push(city);
        prev_city = "-1";
      }
    }

    prev_city = "-1";

    while(!last_cities.empty()) {
      int size = prev_city.size();
      city = last_cities.front();

      if(toupper(city.at(0)) != toupper(prev_city.at(size-1))) {
        cout << city << endl;
        prev_city = city;
      } else {
        last_cities.push(city);
        prev_city = "-1";
      }

      last_cities.pop();
    }

    return 0;
}
