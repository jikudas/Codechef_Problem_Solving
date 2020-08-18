#include<iostream>
using namespace std;

int main()
{
    string s; cin>>s;
    int len = (int)s.size();
    int i=0;
    int a[26] = {0};
    for(i=0; i<len; i++)
    {
        char p = s[i];
        int q = int(p);
        q = q-97;
        a[q] = 1;
    }

    int n; cin>>n;
    while(n--)
    {
        string x; cin>>x;
        int h = x.size();
        int count=0;
        for(i=0; i<h; i++)
        {
            char y = x[i];
            int z = (int)y;
            z = z-97;
            if(a[z]==0)
                count++;
            else
                count=count;
        }
        if(count==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
