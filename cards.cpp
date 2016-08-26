//http://br.spoj.com/problems/TROCCARD/
// cards.cpp

#include <iostream>
#include <set>

using namespace std;

int main() {
  int n_cards_a, n_cards_b, card, total_cards_a = 0, total_cards_b = 0;

  while(cin >> n_cards_a >> n_cards_b && (n_cards_a != 0 && n_cards_b != 0)) {
    set<int> cards_a, cards_b;

    for(int i = 0; i < n_cards_a; i++) {
      cin >> card;
      cards_a.insert(card);
    }

    for(int i = 0; i < n_cards_b; i++) {
      cin >> card;
      cards_b.insert(card);
    }

    for(set<int>::iterator it = cards_a.begin(); it != cards_a.end(); it++) {
      if(cards_b.find(*it) == cards_b.end()) {
        total_cards_a++;
      }
    }

    for(set<int>::iterator it = cards_b.begin(); it != cards_b.end(); it++) {
      if(cards_a.find(*it) == cards_a.end()) {
        total_cards_b++;
      }
    }

    if(total_cards_a < total_cards_b) {
      cout << total_cards_a << endl;
    } else {
      cout << total_cards_b << endl;
    }

    //clean total variables
    total_cards_a = 0;
    total_cards_b = 0;
  }

  return 0;
}
