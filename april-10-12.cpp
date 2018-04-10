#include<iostream>
using namespace std;
int main()
{
    float kmph, miph;

    cout << "\n\n Convert kilometer per hour to miles per hour : \n";
    cout << "----------------------------------------------------\n";

    cout << " Input the distance in Kilometer : ";
    cin >> kmph;

    miph = (kmph * 0.06213712);

    cout << " The "<< kmph << "km./hr. means "<<miph << " Miles/hr."<<endl;
    cout << endl;

    return 0;
}
