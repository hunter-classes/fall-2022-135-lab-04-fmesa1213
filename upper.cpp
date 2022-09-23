/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 4E
I wrote a program that prints the top-right half of a square, given the side length.
*/

#include <iostream>
using namespace std;
int main() 
{
  int side;

std::cout << "Input side length: "<< std::endl;
std::cin >> side;

int count = 0;
std::cout << "Shape:" << std::endl;

for(count=0; count < side; count++) 
{
  int j=0;
  for(j=0; j<count; j++) 
{
  cout << " ";
}
  for(j=0; j<(side - count); j++) 
{
  cout << "*";
}
  std::cout<< std::endl;
}
  return 0;
}
