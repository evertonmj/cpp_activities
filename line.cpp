//line.cpp
/*
* Problem description:

With the proximity of the World Cup, the flow of people in the queues for buying tickets has increased considerably.
As the queues are getting bigger, people fewer patients tend to withdraw from the purchase of tickets and end up
leaving the queues, thus freeing opening for others.
When a person leaves the queue, all the people who were behind her take a step forward, so there is never a vacant space between two people.
The queue initially contains N people, each with a different identifier. Johnny knows her initial state and identifiers in order of people who have left the queue.
 Knowing that after the initial state no person came more in line, little Johnny wants to know the final state of the queue.
*/
#include <iostream>
#include <algorithm>
#include <vector>
#define MAX_PERS 50000
#define MAX_ID 100000

using namespace std;

int main() {
  int n_start_line, n_leave_line, id;
  vector<int> start_line, end_line;

  cin >> n_start_line;

  if(n_start_line > 0 && n_start_line <= MAX_PERS) {
    for(int i = 0; i < n_start_line; i++) {
      cin >> id;
      start_line.push_back(id);
    }

    cin >> n_leave_line;

    if(n_leave_line < n_start_line) {
      int last_elem = false;

      for(int i = 0; i < n_leave_line; i++) {
        cin >> id;

        if(id > 0 && id <= MAX_ID) {
          end_line.push_back(id);
        }
      }
    }

    bool first = true;
    for(vector<int>::iterator it = start_line.begin(); it != start_line.end(); it++) {
      if(find(end_line.begin(), end_line.end(), *it) == end_line.end()) {
        if(first) {
          cout << *it;
        } else {
          cout << " " << *it;
        }
        first = false;
      }
    }
  }
}
