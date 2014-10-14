#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;


int main() {

float lowerLimit=0;
float higherLimit=0;
float step=0;

cout<<"Please give in a lower limit, limit >= 0: 10\n\n";
while(!(cin >> lowerLimit) || lowerLimit < 0 || lowerLimit > 500)
{
    cout << "invalid input!\n";
    cin.clear();
    cin.ignore( numeric_limits<int>::max(), '\n' );
}
cout<<"Please give in a higher limit, 10 > limit <= 500: 20 \n\n";
while(!(cin >> higherLimit) || higherLimit <= 10 || higherLimit > 500)
{
    cout << "invalid input!\n";
    cin.clear();
    cin.ignore( numeric_limits<int>::max(), '\n' );
}
cout<<"Please give in a step. 0 < step <= 10: 4\n\n";
while(!(cin >> step) || step <= 0 || step >10)
{
    cout << "invalid input!\n";
    cin.clear();
    cin.ignore( numeric_limits<int>::max(), '\n' );
}

cout<<endl;
cout<<"Celsius\t"<<"Fahrenheit"<<endl;
cout<<"-------\t"<<"----------"<<endl<<endl;

float answer=lowerLimit;

while(lowerLimit <= higherLimit)
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    answer = (lowerLimit * 1.8, lowerLimit + 32);
    cout<<lowerLimit<<"\t"<<answer<<endl;
    lowerLimit = lowerLimit + step;

}


return 1;
}
