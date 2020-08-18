#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        if((a==b && c==d)||(c==b && a==d)||(d==b&&a==c))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
