#include <iostream>


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



int      main()
{

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


	B qq(100);

	myc_.mytest(qq);
	cout << qq.a << endl;

        return 0;

}
