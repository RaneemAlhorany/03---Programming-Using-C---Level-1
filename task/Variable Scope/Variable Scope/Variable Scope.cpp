#include <iostream>
using namespace std;

string name = "no value"; // global variable
string family_name = "no value"; // global variable

string get_full_name()
{
    string name = "gust"; // local variable
    string family_name = "gust"; // local variable
    return name + " " + family_name;
}



int main()
{
	string name = "gust main"; // local variable
	string family_name = "gust main "; // local variable
    cout << "the value of function : " <<get_full_name() << endl;
    cout << "the value of local var in main : " << name << " " << family_name << endl;

    cout << "the value of global var before edit : " << ::name << " " << ::family_name << endl;

	::name = "raneem"; // edit global variable
	::family_name = "alhorany"; // edit global variable

    cout << "the value of global var after edit : : " << ::name << " "  << ::family_name << endl;




}
