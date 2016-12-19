//https://www.hackerrank.com/challenges/cavity-map
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> grid(n), grid_res(n);

    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }

    grid_res = grid;

    cout << grid_res[0] << endl;
    
    for(int i = 1; i < (n - 1); i++) {

    	for(int j = 1; j < (n - 1); j++) {
       		char cur_number = grid[i][j]; 
       		char next_number = grid[i][j+1];
       		char prev_number = grid[i][j-1];
       		char above_number = grid[i-1][j];
       		char below_number = grid[i+1][j];

	    	if(cur_number > next_number && cur_number > prev_number && cur_number > above_number && cur_number > below_number) {
	    		grid_res[i][j] = 'X';   		
	    	} 
	    }

	    cout << grid_res[i] << endl;
    }
    if(n > 1) {
    	cout << grid_res[n - 1] << endl;
    }

    return 0;
}
