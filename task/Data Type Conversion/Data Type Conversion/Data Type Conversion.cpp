#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "43.22" , is2 , ds3 , fs4;
    double d1 , n2 = 33.5;
    float f1 , n3 = 55.23;
    int i1, n1 = 20 , n4;



    d1 = stod(s1);
    f1 = stof(s1);
    i1 = stoi(s1);
    is2 = to_string(n1);
	ds3 = to_string(n2);
	fs4 = to_string(n3);
    n4 = n3;

    cout << "s1 :" << s1 << "\n";
    cout << "d1 :" << d1 << "\n";
    cout << "f1 :" << f1 << "\n";
    cout << "i1 :" << i1 << "\n";
    cout << "is2 :" << is2 << "\n";
    cout << "ds3 :" << ds3 << "\n";
    cout << "fs3 :" << fs4 << "\n";
    cout << "i2 :" << n4 << "\n";
    cout << (int)n3 << "\n";
    cout <<  int (n3) << "\n";





}

