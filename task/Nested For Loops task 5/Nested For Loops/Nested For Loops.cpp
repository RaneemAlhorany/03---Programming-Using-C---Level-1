
#include <iostream>
using namespace std;


void printAlphaFrom_A_to_F()
{
    for (char i = 'A'; i <= 'F'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}


int main()
{
    printAlphaFrom_A_to_F();

	return 0;
}
