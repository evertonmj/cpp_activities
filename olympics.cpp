//olympics.cpp
//http://br.spoj.com/problems/OLIMPJ09/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Country {
  int id, total_medals;
};

bool cmp(Country a, Country b) {
  if(a.total_medals == b.total_medals) {
    return a.id < b.id;
  }

  return a.total_medals > b.total_medals;
}

int main() {
  int n_countries, n_sports, gold, silver, bronze, total_c1, total_c2, total_c3;
  vector<Country> countries;
  Country country;

  cin >> n_countries >> n_sports;

  for(int i = 0; i < n_countries; i++) {
    country.id = i + 1;
    country.total_medals = 0;
    countries.push_back(country);
  }

  vector<Country>::iterator it = countries.begin();

  for(int j = 0; j < n_sports; j++) {
    cin >> gold >> silver >> bronze;

    vector<Country>::iterator c1 = it + (gold - 1);
    c1->total_medals += 1;

    vector<Country>::iterator c2 = it + (silver - 1);
    c2->total_medals += 1;

    vector<Country>::iterator c3 = it + (bronze - 1);
    c3->total_medals += 1;
  }

  sort(countries.begin(), countries.end(), cmp);

  for(vector<Country>::iterator it = countries.begin(); it != countries.end(); it++) {
    cout << it->id << " ";
  }

  return 0;
}
