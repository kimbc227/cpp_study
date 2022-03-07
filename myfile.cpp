#include <iostream>


using namespace std;





int* func1(){

	int array2[3] = {1,2,3};
	
	return array2;
}


void func2(int * a){
//	a = new int[3];


	a[0] =4;
	a[1] =3;
	a[2] =5;
	//a = a+3;
	a++;a++;a++;
	a = new int[2];

	a[0]=4;
	a[1] = 0;


	

}

int main()
{
	int array1[]= {2,3,4};
	
//	int *array1;


	func2(array1);

	cout << array1[0] << array1[1] << array1[2]<<array1[3]<<array1[4] << endl;


	

}






