#include <iostream>
using namespace std;

class A {
public :

	void ele(int arr[],int size,int pos,int num) {
		for (int i = size -1 ; i>=pos; i--) {
			arr[i + 1]= arr[i];
		}
		arr[pos] = num;
	}

};
int main()
{
	cout << "lets enter ele in anyplace"<<endl ;
	int size = 6;
	int arr [size]= {4,5,6,7,9};
	cout <<"Passsig array is : ";

	for (int i =0 ; i<size; i++) {
		cout<<arr[i];
	}
	cout<<endl;
	int pos ;
	cout << "entet the pos you want it enter";
	cin >> pos ;
	cout<<endl;
	int num ;
	cout << "entet the num you want it enter";
	cin >> num ;
	int ansArr [size + 1];
	cout<<endl;
	for (int i =0 ; i <size ; i++) {
		ansArr[i]= arr[i];
	}
	A obj;
	cout <<"Answer array is : ";
	obj.ele(ansArr,size,pos,num);

	for (int i = 0 ; i<size + 1 ; i++) {

		cout<<ansArr[i];
	}


	return 0;
}