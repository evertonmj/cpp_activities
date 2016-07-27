//tetris.cpp
//http://br.spoj.com/problems/OBITETRI/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Player {
  string name;
  int total_score;
};

bool comp(Player a, Player b) {
    if(a.total_score == b.total_score){
      return a.name < b.name;
    }

    return a.total_score > b.total_score;
}

int main() {

  int n_players, score, total_score = 0, min = 0, max = 0, classification = 1, iterator = 1, last_score = 0, test = 0;
  string name;
  vector<int> scores;
  Player player;
  vector<Player> players;

  while(cin >> n_players && n_players != 0) {
    for(int i = 0; i < n_players; i++) {
      cin >> name;
      for(int j = 0; j < 12; j++) {
        cin >> score;
        total_score += score;
        scores.push_back(score);
      }
      sort(scores.begin(), scores.end());

      min = scores.at(0);
      max = scores.at(11);

      player.name = name;
      player.total_score = total_score - min - max;
      players.push_back(player);

      scores.clear();
      total_score = 0;
      min = 0;
      max = 0;
    }

    sort(players.begin(), players.end(), comp);

    cout << "Teste " << ++test << endl;

    for(vector<Player>::iterator it = players.begin(); it != players.end(); it++, iterator++) {
      if(last_score > it->total_score) {
        classification = iterator;
      }
      cout << classification << " " << it->total_score << " "  << it->name << endl;
      last_score = it->total_score;
    }

    cout << endl;
    players.clear();
    last_score = 0;
    classification = 1;
    iterator = 1;
  }

  return 0;
}
