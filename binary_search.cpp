//binary_search.cpp
//http://www.spoj.com/problems/BSEARCH1/

// #include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
  int n_elements, n_queries, number;
  vector<int> elements;

  scanf("%d%d", &n_elements, &n_queries);

  for(int i = 0; i < n_elements; i++) {
    scanf("%d", &number);
    elements.push_back(number);
  }

  stable_sort(elements.begin(), elements.end());

  for(int i = 0; i < n_queries; i++) {
    scanf("%d", &number);

    if(binary_search(elements.begin(), elements.end(), number)) {
      vector<int>::iterator it = lower_bound(elements.begin(), elements.end(), number);

      int pos = it - elements.begin();
      printf("%d\n", pos);
    } else {
      printf("%d\n", -1);
    }
  }

  return 0;
}
