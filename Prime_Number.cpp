#include <iostream>
#include <string>
using namespace std;

int PrimeTime(int num) {

  // code goes here
  int count = 0;
  for(int i=1; i<=num; i++)
  {
    if(num % i == 0)
    count++;
  }

  cout<<count<<endl;
  /*if(count == 2)
    {
      cout<<"true"<<endl;
    }
  else
    {
      cout<<"false"<<endl;
    }
    */
  return num;

}

int main(void) {

  // keep this function call here
  int num; cin>>num;
  PrimeTime(num);
  //cout << PrimeTime(gets(stdin));
  return 0;

}
