//war.cpp
#include <stdio.h>
#include <vector>
#include <numeric>
#define MAX_SECTIONS 100000
#define MAX_SECTION_SIZE 100

using namespace std;

int main() {
  int n_sections, section, cut_pos = 1, current_val, previous_val = 0, total_sections = 0;
  vector<int> sections;

  scanf("%d\n", &n_sections);

  if(n_sections <= MAX_SECTIONS) {
    for(int i = 0; i < n_sections; i++) {
      scanf("%d", &section);
      if(section <= MAX_SECTION_SIZE) {
        sections.push_back(section);
        total_sections += section;
      }
    }

    for(vector<int>::iterator it = sections.begin(); it != sections.end();it++) {
      previous_val += *it;
      if(previous_val == (total_sections - previous_val)) {
        printf("%d", cut_pos);
        break;
      }
      cut_pos++;
    }
  }

  return 0;
}
