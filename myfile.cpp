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
	vector <int> input(N);

	for (int i =0; i<N; i++)
	{
		cin>>input[i];
	}



	for(int i=0;i<N;i++)
	{
		int isprime=1;

		if(input[i] == 1)
			isprime=0;	

		for(int j = 2;j*j<=input[i];j++)
		{
			if(input[i] %j ==0)
			{
				isprime = 0;
				break;
			}

		}
	

		if(isprime ==0)
			cout << "Not prime"<<endl;

		else 
			cout << "Prime" <<endl;		



	}

	return 0;


}
