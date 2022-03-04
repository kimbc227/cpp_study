#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
	public:
		virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
	public:
		int divisorSum(int n) {
			int sum=0;
			vector <int> myArray;
			for(int i=1;i<=n; i++)
			{
				if(n%i == 0) 
					myArray.push_back(i);
				
			}
			for(vector<int>::iterator i=myArray.begin(); i!=myArray.end() ; i++)
				sum+= *i;
	
			return sum;
		}
};

int main(){
	int n;
	cin >> n;
	AdvancedArithmetic *myCalculator = new Calculator(); 
	int sum = myCalculator->divisorSum(n);
	cout << "I implemented: AdvancedArithmetic\n" << sum;
	return 0;
}
