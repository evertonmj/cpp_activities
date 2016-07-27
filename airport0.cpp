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

    for(int i = 0; i < n_flights; i++) {
      cin >> origin >> destiny;

      if(origin != destiny && origin <= n_airport && destiny <= n_airport) {
        flights.push_back(origin);
        flights.push_back(destiny);

        if(find(airports.begin(), airports.end(), origin) == airports.end()) {
          airports.push_back(origin);
        }

        if(find(airports.begin(), airports.end(), destiny) == airports.end()) {
          airports.push_back(destiny);
        }
      }
    }

    for(vector<int>::iterator it = airports.begin(); it != airports.end(); it++) {

      total_flights = count(flights.begin(), flights.end(), *it);

      if(total_flights >= greatest_n_flights) {
        greatest_n_flights = total_flights;
      }

      Airport airport;
      airport.id = *it;
      airport.flights = total_flights;

      airports_final.push_back(airport);
    }

    sort(airports_final.begin(), airports_final.end(), comparator);

    cout << "Teste " << test << endl;

    for(vector<Airport>::iterator it = airports_final.begin(); it != airports_final.end(); it++) {
      cout << it->id << " " << it->flights << " | ";
      /*if(it->flights == greatest_n_flights) {
        cout << it->id;
        if((it+1) != airports_final.end()) {
          cout << " ";
        }
      }*/
    }

    cout << endl << endl;

    test++;
    airports.clear();
    flights.clear();
    airports_final.clear();
  }
}
