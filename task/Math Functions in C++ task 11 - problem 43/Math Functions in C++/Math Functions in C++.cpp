#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    int  days ,  hours, minutes , seconds;
    int temp;


    cout << "enter the total seconds  : ";
    cin >> seconds;
    temp = seconds;
    
    
    days = round (seconds / (24 * 60 * 60));
    temp = seconds % (24 * 60 * 60);


    hours  = round (temp / (60 * 60));
    temp = temp %  (60 * 60);


    minutes = round(temp / 60);
    temp = temp % (60);

    seconds = round(temp);
    

    cout << "the days  : " << days << endl;
    cout << "the hours  : " << hours << endl;
    cout << "the minutes  : " << minutes << endl;
    cout << "the minutes  : " << seconds << endl;
    cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;

}




