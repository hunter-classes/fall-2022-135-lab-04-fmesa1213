/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 4G
I wrote a program that asks the user to input width and height and prints a checkerboard of 3-by-3 squares.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
  int width, height;
std::cout << "Input width: "<< std::endl;
std::cin >> width;

std::cout << "Input height: "<< std::endl;
std::cin >> height;

char rowStart = '*';
char c = '*';

for(int row = 1; row <= height; row++)
{
c = rowStart; 
for(int col = 1; col <= width; col++)
{
cout << c;
if(col % 3 == 0)
{
  if(c == '*')
  c = ' ';
  else
  c = '*';
}
}
std::cout << std::endl;

if(row % 3 == 0)
{
if(rowStart == '*')
rowStart = ' ';
else
rowStart = '*';
}
}
  return 0;
}
