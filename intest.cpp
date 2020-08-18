#include<iostream>
using namespace std;

int main()
{
    int n, k; cin>>n>>k;
    int i, tot=0;
    long long int t;

    for(i=0; i<n; i++)
    {
        cin>>t;
        if(t%k==0)
            tot++;
        else
            tot = tot;
    }
    cout<<tot<<endl;
}
