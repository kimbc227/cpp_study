#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
		
	int returned_day, returned_month, returned_year;
	int expected_day, expected_month, expected_year;
	int fine = 0;

	cin >> returned_day >> returned_month >> returned_year;
	cin >> expected_day>> expected_month >> expected_year;

	cout << "return day : " << returned_day<<endl;
	cout << "mretur nonth : " << returned_month<<endl;
	cout << "return  year : " << returned_year<<endl;
	cout << "expected day : " << expected_day<<endl;
	cout << "expected nonth : " << expected_month<<endl;
	cout << "expected  year : " << expected_year<<endl;

	if((returned_year<expected_year) || 
	((returned_year == expected_year)&&(returned_month<expected_month)))
//	((returned_year == expectec_year)&&(returned_month==expected_month)&& ( expected_day>returned_day) ) 	
		fine = 0; 
	else 

	if (expected_year<returned_year)
		fine = 10000;

	else if(expected_month<returned_month)
		fine = 500 *(returned_month - expected_month);
	else if(expected_day<returned_day) 
		fine = 15 * ( returned_day-expected_day);

	cout << fine<<endl;
		


	return 0;
}
