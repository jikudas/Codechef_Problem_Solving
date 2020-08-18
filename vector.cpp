#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int > v;
    v.push_back(10);
    v.push_back(15);
    v.push_back(33);
    v.push_back(47);
    v.push_back(99);

    v.pop_back();
    sort(v.begin(), v.end());
    int k = (int)v.size();

    for(int i=0; i<k; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
