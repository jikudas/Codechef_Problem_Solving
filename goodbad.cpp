#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;

    //test cases started
    while(t--)
    {
        int n, k; cin>> n >> k;
        string s; cin>>s;
        int cap=0, small=0;

        //small and capital letter count
        for(int i = 0; i<n; i++)
        {
            //char x = s[i];
            int p = int(s[i]);
            //int p = int(x);

            if(p >= 65  && p<= 90)
                cap++;
            else
                small++;
        }

        //possible conditions check
        if(cap == small)
        {
            if(k>=cap)
                cout<<"both"<<endl;
            else
                cout<<"none"<<endl;
        }

        else if(cap>small)
        {
            if(k>=cap)
                cout<<"both"<<endl;
            else if(small<=k<cap)
                cout<<"brother"<<endl;
            else
                cout<<"none"<<endl;
        }
        else if(small>cap)
        {
            if(k>=small)
                cout<<"both"<<endl;
            else if(cap<=k<small)
                cout<<"chef"<<endl;
            else
                cout<<"none"<<endl;
        }
    }
    return 0;
}
