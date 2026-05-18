#include <iostream>
using namespace std;

void swap(int &num1 , int &num2)
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1 , num2 ;

	cout << "enter the value of number 1 = ";
	cin >> num1;

    cout << "enter the value of number 2 = ";
	cin >> num2;

    cout << "the value of number 1 before swap = " << num1 
        << "\n" << "the value of number 2 before swap = " << num2 << endl;

    swap(num1 , num2);

    cout << "the value of number 1 after swap = " << num1
        << "\n" << "the value of number 2 after swap = " << num2 << endl;

	return (0);

}
