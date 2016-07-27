//fliper.cpp
//http://br.spoj.com/problems/FLIPERAM/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int game1, int game2) {
  return game1 >= game2;
}

int main() {
  int total_games, total_ranking, game;
  vector<int> games;

  cin >> total_games >> total_ranking;

  for(int i = 0; i < total_games; i++) {
    cin >> game;
    games.push_back(game);
  }

  sort(games.begin(), games.end(), cmp);

  vector<int>::iterator it = games.begin();

  for(int i = 0; i < total_ranking; i++, it++) {
    cout << *it << endl;
  }

  return 0;
}
