#include <iostream>
using namespace std;
int main()
{
	int TotalBill , CashPaid ;
	float remainder;
	cout << "enter number of TotalBill\n";
	cin  >> TotalBill;
	cout << "enter number of CashPaid\n";
	cin  >> CashPaid;
	remainder = CashPaid - TotalBill;

	cout << "the remainder of payment : " << remainder;



}


