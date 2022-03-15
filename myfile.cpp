#include <iostream>
#include <vector>

using namespace std;





class B{

public :
        int a =10;
        B(int tmp):a(tmp){}


};



class C{
private :

public :

        B binc;
        B * pbinc;



        C(B yourb, B * pyourb):binc(yourb), pbinc(pyourb){}


	void mytest(B & tmp_b)
	{

		tmp_b.a = 9;
	}


};



int * get_array(int * par){

	for(int i =0;i<5; i++)
		par[i] *= 10;
	return par;
}


vector<int> MultiplyArrayByTwo(const vector<int> *arr)
{
    vector<int> tmp;

    for (const auto &item : *arr) {
        tmp.push_back(item * 2);
    }
    return tmp;
}


void my_func(const int par)
{
	cout << par<<endl;
}


int      main()
{


	int my_int = 3;
	int *my_pointer;
	my_pointer = &my_int;
	
	int & my_tmp = my_int;
	
	int* &my_val = my_pointer;
	(*my_val)= 9;
	my_int = 77;
	my_func(my_int);
	cout << "my_mal = "<< my_tmp <<endl;

	vector<int> cpp_array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	auto cpp_array_2x = MultiplyArrayByTwo(&cpp_array);

	cout << "array = [ ";
	for (int i : cpp_array_2x) {
		cout << i << ", ";
	}
	cout << "]" << endl;

/*

        B *myb = new B(4);
        cout << myb->a<<endl;
        C myc(*myb, myb);

        myb->a = 5;

        cout << myb->a  << endl;
        cout << myc.binc.a << "    " << myc.pbinc->a<<endl;



        B myb_(10);
        cout << myb_.a<<endl;
        C myc_(myb_, &myb_);

        myb_.a = 15;
        cout << myb_.a << endl;
        cout << myc_.binc.a << "    " << myc_.pbinc->a<<endl;


<<<<<<< HEAD
*/
=======
	B qq(100);

	myc_.mytest(qq);
	cout << qq.a << endl;
>>>>>>> 4a48099bc855ac05f5bc34459a2787b0a215bd33

        return 0;

}
