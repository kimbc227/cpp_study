#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int N;
	cin >> N;
	string tmp;
	getline(cin,tmp);
	string input[N];
	string odd[N];
	string even[N];
	for (int i=0; i<N;i++)
	{
		getline(cin,input[i]);
		for(int j=0; j<input[i].length();j++)
		{	
			odd[i]= odd[i]+ input[i][j];
			j++;
			if(j>=input[i].length())
                            break;
			even[i] =even[i]+ input[i][j];



		}

	}

	for(int i=0; i<N;i++)
		cout << odd[i] << " " << even[i]<<endl;






	return 0;
}

