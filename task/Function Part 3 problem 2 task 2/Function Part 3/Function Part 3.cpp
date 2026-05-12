#include <iostream>
using namespace std;


void print_name(string name)
{
    cout <<"your name :" << name;
}



int main()
{
    string name;

    cout << "enter your name :) \n";
    cin >> name;

    print_name(name);

    return (0);
}
