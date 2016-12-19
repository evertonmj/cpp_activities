//https://www.hackerrank.com/challenges/chocolate-feast
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int trips;
    cin >> trips;

    for(int i = 0; i < trips; i++){
        int money;
        int cost;
        int trade;

        cin >> money >> cost >> trade;

        int total = money / cost;
        int chocolates_eaten = total;

        while(total >= trade) {
        	int residue = total % trade;

        	if(residue == 0) {
        		total /= trade;	
	        	chocolates_eaten += total;
        	} else {
        		int aux = total - residue;
        		total = aux / trade;
        		chocolates_eaten += total;
        		total += residue;
        	}
        }

        cout << chocolates_eaten << endl;
    }
    return 0;
}
