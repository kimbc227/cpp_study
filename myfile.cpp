#if 0
#include<iostream>

using namespace std;


class Something {
	public :
		int value;


		Something(int n){
			value =n;
			cout << "Constructor"<<endl;
		}	
		void setValue(int n) {
			value = n;
		}


		int getValue() const{
			return value;
		}

};


int main(){

	const Something s(3);
	//	s.setValue(1);

	cout << "value = " << s.value << endl;

}

#else

#include<iostream>

using namespace std;
class Something {
	public:
		int value;
		Something(int n) {
			value = n;
			cout << "Constructor" << endl;
		}
		void setvalue(int n) {
			value = n;
		}
		int getvalue() const{
			return value;
		}
};

void print(Something s) {
	cout << s.value << endl;
	cout << "print함수에서 주소 : " << &s << endl;
}
int main() {
	const Something s(1);
	print(s);
	cout << "main함수에서의 주소 : " << &s << endl;
	return 0;
}


#endif
