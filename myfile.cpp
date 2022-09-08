#include <iostream>

using namespace std;

class Integer
{
public:
	Integer() : mData(nullptr) 
	{ 
		mData = new int(0);
		cout << "디폴트 생성자 호출!" << endl; 
	}
	Integer(const int data)
	{
		mData = new int(data);
		cout << "const int data 일반 생성자 호출!" << endl;
	}
	Integer(const Integer& data) 
	{ 
		mData = new int(data.getData());
		cout << "const Integer& data 복사 생성자 호출!" << endl;
	}
	Integer(Integer&& data) : mData(data.mData)
	{
		cout << "const Integer&& data 이동 생성자 호출! " << data.mData << endl;

		data.mData = nullptr;
		
	}
	virtual ~Integer() 
	{ 
		if (mData)
		{
			cout << "소멸자 호출! " << mData << endl;
			delete mData;
			mData = nullptr;
		}
		else
			cout << "소멸자 호출! " << mData << endl;
	}

	
	int getData() const { return *mData; }
	void setData(const int data) { *mData = data; }
	void setNull() { mData = nullptr; }

	Integer operator+(Integer& data)
	{
		Integer ret;
		cout << "연산자 오버로딩(+) 함수 호출! " << ret.mData << endl;
		ret.setData(this->getData() + data.getData());
		return ret;
	}
	void Print()
	{
		cout << *mData << endl;
	}
private:
	int *mData;
};


int main()
{
	Integer x(5);
	Integer y(10);
	cout << "--------------" << endl;
	Integer z = x+ y;
	x.Print();
	y.Print();
	z.Print();
	cout << "--------------" << endl;
}
