//run.cpp
//http://br.spoj.com/problems/CORR11/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Car {
  int id, total_time;
};

bool comp(Car a, Car b) {
  return a.total_time <= b.total_time;
}

int main() {
  int n_cars, n_laps, lap = 0, total_laps = 0;
  vector<Car> cars;
  Car car;

  cin >> n_cars >> n_laps;

  for(int i = 0; i < n_cars; i++) {
    for(int j = 0; j < n_laps; j++) {
      cin >> lap;
      total_laps += lap;
    }

    car.id = i + 1;
    car.total_time = total_laps;
    cars.push_back(car);

    lap = 0;
    total_laps = 0;
  }

  sort(cars.begin(), cars.end(), comp);

  vector<Car>::iterator it = cars.begin();

  for(int i = 0; i < 3; it++, i++) {
    cout << it->id << endl;
  }

  return 0;
}
