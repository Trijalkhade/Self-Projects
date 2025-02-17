#include<iostream>
using namespace std;
int sum(int a)
{
  int sum=0;
  while(a>0)
  {
    sum=sum+a%10;
    a=a/10;
  }
  return sum;
}
 
 int main()
 {  
   int a,sumofdigits;
   cout<<"Enter a numbers:"<<endl;
   cin>>a;
   sumofdigits = sum(a);
   cout<<"Sum: "<<sumofdigits;
 }
