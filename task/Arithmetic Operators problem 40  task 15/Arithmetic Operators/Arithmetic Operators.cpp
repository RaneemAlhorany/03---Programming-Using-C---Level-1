#include <iostream>
using namespace std;
int main()
{
	float  billvalue , TotalBill;
	cout << "enter number of payment \n";
	cin  >> billvalue;
	cout << "enter number of CashPaid\n";
	TotalBill = billvalue * 1.1 *1.16;

	cout << "the TotalBill  : " << TotalBill;



}


