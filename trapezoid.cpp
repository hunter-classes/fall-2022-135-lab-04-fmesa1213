/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 4F
I wrote a program that prints an upside-down trapezoid of given width and height.
However, if the input height is impossibly large for the given width, then the program should report, "Impossible shape!"
*/

#include<iostream>
using namespace std;
int main()
{
int width,height;
std::cout<<"Enter width : "<< std::endl;
std::cin>>width;

std::cout<<"Enter height : "<< std::endl;
std::cin>>height;

  int i,j;
if(2*height>width+1)
std::cout<<"Impossible Shape!"<< std::endl;
else
{
for(i=0;i<height;i++)
{
for(j=0;j<i;j++)
cout<<" ";
for(j=0;j<width;j++)
{
cout<<"*";
}
width-=2;
std::cout<< std::endl;
}
}
  return 0;
}
