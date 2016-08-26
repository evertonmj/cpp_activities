//friends_of_friends.cpp
//http://www.spoj.com/problems/FACEFRND/

#include <iostream>
#include <set>

using namespace std;

struct Friend {
  int id;
  set<int> friends;

  Friend(const int &int_id) : id(int_id) {}

  Friend(const int& intId, const std::set<int>& setFriends): id(intId), friends(setFriends) {}

  Friend() {}

  bool operator<(const Friend& f) const {
    return id < f.id;
  }

  bool operator==(const Friend& f) const {
    return id == f.id;
  }
};

int main() {
  int n_friends, a_friend, n_a_friends, in_friend;
  set<Friend> friends;
  set<int> friends_of_friends;

  cin >> n_friends;

  for(int i = 0; i < n_friends; i++) {
      set<int> friend_friends;

      cin >> a_friend >> n_a_friends;

      Friend f_friend;
      f_friend.id = a_friend;

      for(int j = 0; j < n_a_friends; j++) {
        cin >> in_friend;
        friend_friends.insert(in_friend);
      }

      f_friend.friends = friend_friends;

      friends.insert(f_friend);
  }

  for(set<Friend>::iterator it = friends.begin(); it != friends.end(); it++) {
    set<int> itFriends = it->friends;
    for(set<int>::iterator it2 = itFriends.begin(); it2 != itFriends.end(); it2++) {
      if(friends.find(*it2) == friends.end()) {
        friends_of_friends.insert(*it2);
      }
    }
  }

  cout << friends_of_friends.size();

  return 0;
}
