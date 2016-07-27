//dead_alive.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#define MAX_PARTICIPANTS 100
#define MAX_ROUNDS 100

using namespace std;

int main() {
  int n_participants, n_rounds, participant, n_participants_round, order, part_try, test = 0;
  vector<int> participants;

  while(cin >> n_participants >> n_rounds && n_participants != 0 && n_rounds != 0) {
    if(n_participants >= 2 && n_participants <= MAX_PARTICIPANTS && n_rounds > 0 && n_rounds <= MAX_ROUNDS) {
      //get participants
      cout << "Participants" << endl;

      for(int i = 0; i < n_participants; i++) {
        cin >> participant;
        if(participant > 0 && participant <= n_participants) {
          participants.push_back(participant);
          cout << participant << " ";
        }
      }
      cout << endl << "Rounds" << endl;
      //rounds
      for (int i = 0; i < n_rounds; i++) {
        cin >> n_participants_round >> order;

        if(n_participants_round >= 2 && n_participants_round <= n_participants & order >= 0 && order <= 1) {
          for(int j = 0; j < n_participants_round; j++) {
              cin >> part_try;
              cout << "Round " << i << " | Order: " << order << " | Try: " << part_try << " | Participant: " << *(participants.begin() + j) << endl;
              if(part_try != order) {
                participants.erase(participants.begin() + j);
              }
          }
        }

        cout << "----" << endl;

        if((i + 1) == n_rounds) {
          cout << "Teste " << ++test << endl;
          cout << participants.front() << endl << endl;
        }
      }

      participants.clear();
    }
  }

  return 0;
}
