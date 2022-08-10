#include<iostream>

using namespace std;


class Integer
{
	public:
		Integer() : mData(0){cout<< "1st case" << endl;}
		Integer(const Integer& data) : mData(data.mData) { cout << " 2nd case" << endl;}
		Integer(const int data) : mData(data) { cout << "3rd case" <<endl;}

		void printdata()
		{ cout << "hi : " << mData << endl;}
		
		void printdata_test(Integer data)
		{ data.printdata();}
	private:
		int mData;

};


int main()
{

	Integer myInt(3);
	Integer testInt(myInt);

	testInt.printdata();

	
}
