#include <iostream>

using namespace std;

class Integer
{
public:
	Integer() : mData(nullptr)
	{ 
		cout << "디폴트 생성자 호출!" << endl; 
	}
	Integer(const int data) : mData(new int(data))
	{
		cout << "일반 생성자 호출! " << mData<< endl;
	}
	Integer(const Integer& data) : mData(data.mData ? new int(*data.mData) : nullptr)
	{ 
		cout << "복사 생성자 호출!" << endl;
	}
	Integer(Integer&& data) : mData(data.mData)
	{
		cout << "이동 생성자 호출! " << data.mData << "///"<< mData  << endl;
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

	Integer operator+(Integer& data)
	{
		Integer ret;
		*ret.mData = *mData + *data.mData;

		cout << "연산자 오버로딩(+) 함수 호출! " << ret.mData << endl;
		return ret;
	}

	Integer& operator=(Integer& data)
	{
		if (data.mData != nullptr)
		{
			if (mData == nullptr)
				mData = new int;
			*mData = *data.mData;
		}
		else
		{
			if (mData)
				delete mData;
			mData = nullptr;
		}

		cout << "복사 오버로딩 호출! " << data.mData << endl;
		return *this;
	}

	Integer& operator=(Integer&& data)
	{
		mData = data.mData;
		data.mData = nullptr;

		cout << "이동 오버로딩 호출! " << data.mData << endl;
		return *this;
	}

	void Print()
	{
		if (mData)
			cout << *mData << endl;
		else
			cout << "값 없음" << endl;
	}
private:
	int *mData;
};
#if 0

template <typename T>
void data_swap(T left, T right)
{
	T temp = left;
cout << "data_swap() called T temp = std::move(left)" << endl;

	left = right;
cout << "data_swap() called  --> left = std::move(right)" << endl;

	right = temp;
cout << "data_swap() is terminating" << endl;

}

#else


template <typename T>
void data_swap(T &left, T &right)
{
	T temp = left;
cout << "data_swap() called T temp = std::move(left)" << endl;

	left = right;
cout << "data_swap() called  --> left = std::move(right)" << endl;

	right = temp;
cout << "data_swap() is terminating" << endl;

}


#endif

template <typename T>
void data_swap_move(T& left, T& right)
{
	cout << "data_swap_move() called" << endl;
	
	T temp = std::move(left);
cout << "data_swap_move() called T temp = std::move(left)" << endl;
	left = std::move(right);
cout << "data_swap_move() called  --> left = std::move(right)" << endl;
	right = std::move(temp);
cout << "data_swap_move() is terminating" << endl;
}



int main()
{
#if 0
	int a = 0xbc;
	cout<<a << endl;

	std::move(a);
	cout<<a << endl;
#endif

	Integer x(5);
	Integer z(std::move(x));

	cout << "x : ";
	x.Print();
	cout << "z : ";
	z.Print();

	data_swap_move(x, z);

	cout << "x : ";
	x.Print();
	cout << "z : ";
	z.Print();

	data_swap(x, z);

	cout << "x : ";
	x.Print();
	cout << "z : ";
	z.Print();

	cout << "----------" << endl;
}
