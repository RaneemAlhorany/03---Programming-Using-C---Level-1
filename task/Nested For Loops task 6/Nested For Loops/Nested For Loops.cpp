
#include <iostream>
using namespace std;


void printNumbers()
{
    for (int i = 1; i  < 11; i++)
    {
        for (int j = i ; j <= 10 ; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}


int main()
{
    printNumbers();

	return 0;
}
