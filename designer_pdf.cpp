//https://www.hackerrank.com/challenges/designer-pdf-viewer
#include <map>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

map<int, int> loadEnglishAlphabetCodes() {
	map<int, int> map_return;
	int char_code = 97;

	for(int i = 0; i < 26; i++){ //97 a 122
		map_return[char_code] = i;
		char_code++;
	}

	return map_return;
}

int main(){
    int n = 26;

    vector<int> h(n);
    map<int, int> alphabet = loadEnglishAlphabetCodes();

    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
    }

    string word;
    cin >> word;

    int word_size = word.size();
    int max_height_letter = 0;

    for(int i = 0; i < word.size(); i++) {
    	int letter = word[i];
    	int index = alphabet.find(letter)->second;
    	int letter_size = h[index];

    	if(letter_size > max_height_letter) {
    		max_height_letter = letter_size;
    	}
    }

    cout << (word_size * max_height_letter) << endl;

    return 0;
}
