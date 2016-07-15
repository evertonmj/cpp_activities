//comet.cpp
/* Problem Description:

Halley comet is a comet of short period of the solar system, completing a lap around the sun every 76 years; 
on the last occasion he became visible from Earth in 1986, several space agencies have sent probes to collect samples of its tail and thus confirm theories about their chemical compositions.

Write a program that, given the current year, determines the next year that Halley's comet will be visible again from Earth. 
If the current year is a year of the comet, consider that the comet has passed that year (ie, always consider the next passing year, not including the current year).
*/

#include <iostream>

using namespace std;

#define LAST_PASS 1986;
#define PERIOD 76;

int main() {
	int year, next_pass;
	
	cin >> year;
	
	if(year >= 2010) {

		next_pass = LAST_PASS + PERIOD;
		
		while (next_pass < year) {
			
			next_pass = next_pass + PERIOD;

			if(year == next_pass) {
				year++;
			}
		}	
	
		cout << next_pass << "\n";
	}
	return 0;
}
