#include <iostream>
using namespace std;


double calculateTotalSales(int TotalSales)
{
	if (TotalSales >= 1000000)
		return TotalSales * 0.01;
	else if (TotalSales >= 500000)
		return TotalSales * 0.02;
	else if (TotalSales >= 100000)
		return TotalSales * 0.03;
	else if (TotalSales >= 50000)
		return TotalSales * 0.05;
	else
		return TotalSales * 0.00;
}

void  printTotalSalse(int TotalSales)
{
	cout << calculateTotalSales(TotalSales)<< endl;
}



void readTotalSales(int & TotalSales)
{
	cout << "Enter Total Sales: \n";
	cin >> TotalSales;
}

int main()
{
	int TotalSales;
	readTotalSales(TotalSales);
	printTotalSalse(TotalSales);

	return 0;
    
}
