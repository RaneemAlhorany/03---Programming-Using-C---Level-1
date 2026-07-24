
#include <iostream>
using namespace std;

void printAlphabet()
{
    for (char i = 'A'; i <= 'Z'; i++)
    {
        cout << "----------------------" << "\n";
		cout << "The letter is: " << i << "\n";

        for (char J = 'A'; J <= 'Z'; J++)
        {
            cout <<i << J << "\n";
        }
        cout << "----------------------" << "\n";
    }

}



int main()
{
    printAlphabet();

	return 0;
}
