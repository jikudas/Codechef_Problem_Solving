#include<iostream>
#include<cstring>
//#define MAX_SIZE 100
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for (int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j; k<n; k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<endl<<"Array Elements after Deleting Duplicates: ";

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
