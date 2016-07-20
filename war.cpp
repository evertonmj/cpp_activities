//war.cpp
//#include <iostream>
#include <stdio.h>
#include <vector>
#include <numeric>
#define MAX_SECTIONS 100000
#define MAX_SECTION_SIZE 100

using namespace std;

int sum(vector<int>::iterator begin, vector<int>::iterator end) {
  int total = 0;
  for(vector<int>::iterator it = begin; it != end; it++) {
    total += *it;
  }

  return total;
}

int main() {
  int n_sections, section, cut_pos = 1, current_val, previous_val = 0;
  vector<int> sections;

  //cin >> n_sections;
  scanf("%d\n", &n_sections);

  if(n_sections <= MAX_SECTIONS) {
    for(int i = 0; i < n_sections; i++) {
      //cin >> section;
      scanf("%d", &section);
      if(section <= MAX_SECTION_SIZE) {
        sections.push_back(section);
      }
    }

    for(vector<int>::iterator it = sections.begin(); it != sections.end();it++) {
      previous_val += *it;
      if(previous_val == sum(it + 1, sections.end())) {
        //cout << cut_pos;
        printf("%d", cut_pos);
        break;
      }
      cut_pos++;
    }
  }

  return 0;
}
