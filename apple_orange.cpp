//https://www.hackerrank.com/challenges/apple-and-orange

#include <iostream>
#include <vector>

using namespace std;


int main(){
    int start_house;
    int end_house;
    cin >> start_house >> end_house;

    int apple_tree;
    int orange_tree;
    cin >> apple_tree >> orange_tree;

    int apples;
    int oranges;
    cin >> apples >> oranges;

    vector<int> apple(apples);
    for(int apple_i = 0;apple_i < apples;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(oranges);
    for(int orange_i = 0;orange_i < oranges;orange_i++){
       cin >> orange[orange_i];
    }

    int total_apples = 0, total_oranges = 0;

    //count apple totals
    for(int i = 0; i < apples; i++) {
        int position = apple[i];
        int distance = apple_tree + position;

        if(distance >= start_house && distance <= end_house) {
            total_apples++;
        }
    }

    //count orange totals
    for(int i = 0; i < oranges; i++) {
        int position = orange[i];
        int distance = orange_tree + position;

        if(distance >= start_house && distance <= end_house) {
            total_oranges++;
        }
    }

    cout << total_apples << endl << total_oranges;


    return 0;
}
