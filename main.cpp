#include <iostream>
#include <stdlib.h>
#include <limits>
using namespace std;



int main() {

double lowerLimit=0;
double higherLimit=0;
double step=0;

cout<<"Please give in a lower limit, limit >= 0: 10\n\n";
cin>>lowerLimit;
while(!(cin >> lowerLimit) || lowerLimit < 0 || lowerLimit > 500)
{
    cout << "invalid input!\n";
    cin.clear();
    cin.ignore( numeric_limits<int>::max(), '\n' );
}

cout<<"Please give in a higher limit, 10 > limit <= 500: 20 \n\n";
cin>>higherLimit;
while(!(cin >> higherLimit) || higherLimit <= 10 || higherLimit > 500)
{
    cout << "invalid input!\n";
    cin.clear();
    cin.ignore( numeric_limits<int>::max(), '\n' );
}
cout<<"Please give in a step. 0 < step <= 10: 4\n\n";
cin>>step;
while(!(cin >> step) || step <= 0 || step >10)
{
    cout << "invalid input!\n";
    cin.clear();
    cin.ignore( numeric_limits<int>::max(), '\n' );
}

cout<<lowerLimit<<higherLimit<<step<<"\n\n";
cout<<"Thanks!";











return 1;
}
