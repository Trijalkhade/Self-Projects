#include<iostream>
using namespace std;
int main()
{
  string shape;
  cout<<"Enter Shape:\n";
  cin>>shape;
  float r, l, b, h, area, pi=3.14159, base1, base2;
  
  if(shape=="square")
  {
    cout<<"Enter length of side:";
  cin>>l;
  area=l*l;
  cout<<"\nArea of square = "<<area;
  }
  
  else if(shape=="rectangle")
  {
    cout<<"Enter length and breadth of sides:";
  cin>>l>>b;
  area=l*b;
  cout<<"\nArea of rectangle = "<<area;
  }
  
  else if(shape=="triangle")
  {
    cout<<"Enter height and base of triangle:";
  cin>>h>>base1;
  area=(0.5*l*b);
  cout<<"\nArea of triangle = "<<area;
  }
  
  else if(shape=="trapezium")
  {
    cout<<"Enter two bases and height:";
  cin>>base1>>base2>>h;
  area=(0.5*base1*base2)*h;
  cout<<"\nArea of Circle = "<<area;
  }
  
  else if(shape=="circle")
  {
  cout<<"Enter radius of circle:";
  cin>>r;
  area=pi*r*r;
  cout<<"\nArea of Circle = "<<area;
  }
  
  else
  {
    cout<<"\n Shape unidentified!!!";
  }
  return 0;
}
