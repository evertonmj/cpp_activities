//https://www.hackerrank.com/challenges/manasa-and-stones
#include <set>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int n_stones, dif_a, dif_b, stone = 0;
		set<int> final_stones;
		cin >> n_stones >> dif_a >> dif_b;

		for(int j = 0; j < n_stones; j++) {
			stone += dif_a;
		}
	}

	return 0;
}