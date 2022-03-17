#include <bits/stdc++.h>
#include <queue>
#include <functional>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{
	string N_temp;
	getline(cin, N_temp);

	int N = stoi(ltrim(rtrim(N_temp)));
	
	priority_queue<string, vector<string>, greater<string> > name_book;

	for (int N_itr = 0; N_itr < N; N_itr++) {
		string first_multiple_input_temp;
		getline(cin, first_multiple_input_temp);

		vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

		string firstName = first_multiple_input[0];

		string emailID = first_multiple_input[1];
#if 0
		cout << "find+last_of : " <<emailID.find("@gmail.com")<<endl;
		cout << "emailID length : " <<  emailID.length()  << endl;
		cout << "length of @gmail.com : " << string("@gmail.com").length() << endl;
#endif
		if(emailID.find("@gmail.com")==emailID.length()-string("@gmail.com").length())
			name_book.push(firstName);	
	}

	while(name_book.size()!=0)	{

		cout << name_book.top()<<endl;
		name_book.pop();
	}
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

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}

