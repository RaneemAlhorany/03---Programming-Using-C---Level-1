#include <iostream>
using namespace std;

void my_sum_procedure()
{
    int number1, number2;

    cout << "please enter Number 1? \n";
	cin >> number1;

    cout << "please enter Number 2? \n";
    cin >> number2;

    cout << "********************"<< endl;
	cout << number1 + number2 << endl;

}
int my_sum_function()
{
    int number1, number2;

    cout << "please enter Number 1? \n";
    cin >> number1;

    cout << "please enter Number 2? \n";
    cin >> number2;
    cout << "********************" << endl;
	return (number1 + number2);
}

int main()
{
    my_sum_procedure();

    cout << my_sum_function() << endl;
	return 0;
    
}
