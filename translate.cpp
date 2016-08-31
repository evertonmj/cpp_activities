//translate.cpp
//http://br.spoj.com/problems/JASPION/

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
  int n_instances, n_dic_words, n_music_lines;
  string word, trans, music_line, music_word;

  cin >> n_instances;

  for(int i = 0; i < n_instances; i++) {
      map<string, string> dictionary;
      cin >> n_dic_words;
      cin >> n_music_lines;

      cin.ignore();

      for(int j = 0; j < n_dic_words; j++) {
        getline(cin, word);
        getline(cin, trans);
        dictionary[word] = trans;
      }

      for(int j = 0; j < n_music_lines; j++) {
        vector<string> music_tokens;
        std::getline(cin, music_line);

        istringstream iss(music_line);
        copy(istream_iterator<string>(iss),
         istream_iterator<string>(),
         back_inserter(music_tokens));

         for(vector<string>::iterator it = music_tokens.begin(); it != music_tokens.end(); it++) {
           if(dictionary.find(*it) != dictionary.end()) {
             cout << dictionary.find(*it)->second;
           } else {
             cout << *it;
           }

           cout << " ";
         }
         cout << endl;
      }
  }

  return 0;
}
