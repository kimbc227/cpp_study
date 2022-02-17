#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

string ltrim(const string &);

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int n;
	string tmp_input;
	getline(cin,tmp_input);
	n = stoi(tmp_input);
	map <string,string> phonebook;
	vector<string> quary(n);
	string tmp_name, tmp_phonenumber;
	for(int i=0;i<n;i++){
		cin>>tmp_name;
		getline(cin,tmp_phonenumber);
		tmp_phonenumber = ltrim(tmp_phonenumber);
//		cin>>tmp_phonenumber;
		if(tmp_phonenumber.length() !=0)
			phonebook[tmp_name]=tmp_phonenumber;
	}
//	getline(cin,tmp_name);
	int qu_num=0;
	for(;qu_num<n;qu_num++){
		getline(cin,quary[qu_num]);
		if(quary[qu_num].length()==0) break;
	}	
	for(int i=0;i<qu_num;i++){
		if(phonebook.count(quary[i]))
				cout << quary[i]<<"="<<phonebook[quary[i]]<<endl;
		else 
			cout<<"Not found"<<endl;
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

