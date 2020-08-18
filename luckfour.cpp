#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, count=0; cin>>n;
        ostringstream str1;
        str1<<n;
        string s = str1.str();
        int len = (int)s.size();
        for(int i=0; i<len; i++)
        {
            if(s[i]=='4')
                count++;
            else
                count = count;
        }
        cout<<count<<endl;
    }
    return 0;
}
