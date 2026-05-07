#include <iostream>
#include <string>
using namespace std;

int main()
{
	string string1 , string2 , string3;

    cout << "please enter string1 ?\n";
	getline(cin , string1);

	cout << "please enter string2 ?\n";
	cin >> string2;

	cout << "please enter string3 ?\n";
	cin >> string3;

	cout << "\n************************************"<<endl;

	cout << "The Length of strings is " << string1.length() << endl;
	cout << "characters at 0, 2, 4, 7 are " << string1[0] << " " 
		<< string1[2] << " " << string1[4] << " " << string1[7] << endl;

	cout << "concatenating string2 and string3 : " << string2 + string3 << endl;
	cout <<string2 << " * " << string3 << " = " << stoi(string2) * stoi(string3);

	return 0;
}
