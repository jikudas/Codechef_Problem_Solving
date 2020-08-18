#include<iostream>
using namespace std;

int main()
{
    int amount;
    double balance, rem_bal;

    cin>>amount;
    cin>>balance;

    if(amount%5 == 0 && (amount+0.5)<=balance)
    {
        rem_bal = balance - (amount+0.5);
        cout<<rem_bal<<endl;
    }
    else
        cout<<balance;

    return 0;
}
