/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 4D
I wrote a program that prints the bottom-left half of a square, given the side length.
*/

#include<iostream>
using namespace std;
int main()
{

int length;

std::cout<<"Input side length: "<< std::endl;
std::cin>>length;

std::cout<<"Shape: "<< std::endl;

for(int i=1;i<=length;i++)
{
for(int j=1;j<=i;j++)
{
cout<<"*";
}
std::cout<< std::endl;
}
  return 0;
} 
