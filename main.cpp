#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cctype>
using namespace std;




int main()
{
int lowerLimit;
int higherLimit;
int step;


do
{
    cout<<"Please give in a lower limit, limit >= 0: 10\n\n";
   cin>>lowerLimit;
    if(!isdigit(lowerLimit) || lowerLimit < 0)
        cout<<"Invalid Entry\n\n";

}while(!isdigit(lowerLimit) || lowerLimit < 0);

do
{
    cout<<"Please give in a higher limit, 10 > limit <= 500: 20 \n\n";
    cin>>higherLimit;
    if(!isdigit(higherLimit) == false || higherLimit < 10 || higherLimit > 500)
        cout<<"Invalid Entry\n\n";
}while(!isdigit(higherLimit) == false || higherLimit < 10 || higherLimit > 500);


do
{
    cout<<"Please give in a step. 0 < step <= 10: 4";
    cin>>step;
    if(!isdigit(step) == false || step < 1 || step > 4)
        cout<<"Invalid Entry\n\n";
}while (!isdigit(step) == false || step < 1 || step > 4);



return 1;
}
