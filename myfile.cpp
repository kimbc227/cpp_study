#include <bits/stdc++.h>

using namespace std;



int main()
{
	string S;
	getline(cin, S);

	int result =0;
	try{
		result = stoi(S);
		cout << result <<endl;
	}
	catch(exception& error){
		cout<<"Bad String"<<endl;
	}
	return 0;
}

