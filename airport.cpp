//airport.cpp
#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_AIRPORTS 100
#define MAX_FLIGHTS 10000

using namespace std;

struct Airport {
  int id, flights;
};

bool comparator(Airport airport1, Airport airport2) {
  return airport1.id <= airport2.id;
}

int main() {
  int n_airport, n_flights, test = 1, greatest_n_flights = 0, total_flights = 0;
  vector<int> airports;
  vector<Airport> airports_final;

  while(cin >> n_airport >> n_flights && n_airport > 0 && n_flights > 0 && n_airport <= MAX_AIRPORTS && n_flights <= MAX_FLIGHTS) {
    vector<int> flights(n_flights);

    int origin, destiny;

    for(int i = 1; i < n_flights; i++) {
      cin >> origin >> destiny;

      if(origin != destiny && origin <= n_airport && destiny <= n_airport) {
        flights[origin]++;
        flights[destiny]++;
      }
    }

    for(int i = 1; i < n_airport; i++) {
      //total_flights = count(flights.begin(), flights.end(), *it);
      if(flights[i] >= greatest_n_flights) {
        greatest_n_flights = flights[i];
      }
    }

    sort(flights.begin(), flights.end());

    cout << "Teste " << test << endl;

    for(int i = 1; i < n_airport; i++) {
      //cout << it->id << " " << it->flights << " | ";
      //if(flights[i] == greatest_n_flights) {
        cout << flights[i];

        if((i+1) != n_airport) {
          cout << " ";
        }
      //}
    }

    cout << endl << endl;

    test++;
    //airports.clear();
    flights.clear();
    //airports_final.clear();
  }
}
