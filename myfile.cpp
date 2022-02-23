#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
	private:
		vector<int> elements;

	public:
		int maximumDifference;

		// Add your code here
	Difference(vector<int> a):elements(a), maximumDifference(0){}
	void computeDifference()
	{			
		for(int i=0;i<elements.size()-1;i++)
		{
			int tmp_element = elements.at(i);

			for(int j=i+1;j<elements.size();j++)
			{	
				int tmp_2nd_element = 0, tmp_difference=0;
				tmp_2nd_element = elements.at(j);
				tmp_difference = tmp_element - tmp_2nd_element;
				if(tmp_difference<0)
					tmp_difference=tmp_difference * -1;
				if( tmp_difference> maximumDifference)
					maximumDifference = tmp_difference;

			}
		}

	}

	
}; // End of Difference class

int main() {
	int N;
	cin >> N;

	vector<int> a;

	for (int i = 0; i < N; i++) {
		int e;
		cin >> e;

		a.push_back(e);
	}

	Difference d(a);

	d.computeDifference();

	cout << d.maximumDifference;

	return 0;
}
