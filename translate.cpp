//translate.cpp
//http://br.spoj.com/problems/JASPION/

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

vector<string> splitWords(string line, char separator);

/**
* main function
*/
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

        //split line by a blank space
        music_tokens = splitWords(music_line, ' ');

       for(vector<string>::iterator it = music_tokens.begin(); it != music_tokens.end(); it++) {
         if(dictionary.find(*it) != dictionary.end()) {
           cout << dictionary[*it];
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

/**
* Function to split a line by a specific separator
*/
vector<string> splitWords(string line, char separator) {
  vector<string> words;
  string word;

  for(int i = 0; i < line.size(); i++) {
    if(line[i] != separator) {
      word += line[i];
    } else {
      words.push_back(word);
      word = "";
    }
  }

  //insert the last word in the vector
  words.push_back(word);

  return words;
}
