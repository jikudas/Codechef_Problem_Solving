#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int t, n, i; cin>>t;


    while(t--)
    {
        long long int sum = 0;
        cin>>n;
        ostringstream str1;
        str1<<n;
        string s = str1.str();
        int len = s.length();
        for(i=0; i<len; i++)
        {
            char x = s[i];
            int p = x;
            p = p-48;
            sum = sum + p;
        }
        cout<<sum<<endl;
    }
    return 0;
}
