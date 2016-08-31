//election.cpp
//http://br.spoj.com/problems/ELEICOES/

#include <iostream>
#include <map>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int n_votes, cand;
  map<int, long long> votes;
  long long total = 0, cur_total = 0, elected;

  cin >> n_votes;

  for(int i = 0; i < n_votes; i++)   {
      cin >> cand;
      if(votes.find(cand) != votes.end()) {
        votes.find(cand)->second++;
      } else {
        votes[cand] = 1;
      }
      if(total < votes.find(cand)->second) {
        elected = cand;
        total = votes.find(cand)->second;
      }
  }

  cout << elected;

  return 0;
}
