#include<iostream>
#include<cstring>
using namespace std;

void seive(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int p=2; p*p<=n; p++)
    {
        if(prime[p] == true)
        {
            for(int i=p*p; i<=n; i+=p)
            {
                prime[i] = false;
            }
        }
    }

    for(int j=2; j<=n; j++)
    {
        if(prime[j]==true)
        cout<<j<<endl;
    }


}
int main()
{
    cout<<"Enter number upto which you want to print prime numbers : "<<endl;
    int n; cin>>n;
    seive(n);
    return 0;
}
