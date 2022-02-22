#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
	string n_temp;
	getline(cin, n_temp);

	int n = stoi(ltrim(rtrim(n_temp)));
	


	cout << "n = " <<n<<endl;

	int max_num=0;
	int tmp_num=0;
	for(;n>0;)
	{
		cout << "n = " <<n<<endl;

		if(n%2 == 1)
		{
			tmp_num++;

			if(max_num <tmp_num)
				max_num = tmp_num;
		}
		else //if(n%2 ==0)
			tmp_num=0;		

		n=n>>1;
	}

	cout << max_num << endl;

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
			s.begin(),
			find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	       );

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
			find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
			s.end()
	       );

	return s;
}

