//quermesse.cpp
//http://br.spoj.com/problems/QUERM/
#include <iostream>
#include <list>

using namespace std;

int main() {
	int n, test = 1, index = 1;

	while(cin >> n && n != 0) {
		int current;
		list<int> line;

		for(int i = 0; i < n; i++) {
			cin >> current;

			line.push_back(current);
		}

		for(list<int>::iterator it = line.begin(); it != line.end(); it++) {
			if(index == *it) {
				cout << "Teste " << test << endl << *it << endl;
				break;
			}
			index++;
		}

		index = 1;
		test++;
	}
	return 0;
}
