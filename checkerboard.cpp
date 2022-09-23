/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 4B
I wrote a program that asks the user to input width and height and prints a rectangular checkerboard of the 
requested size using asterisks and spaces (alternating).
*/

# include<iostream>
using namespace std;
int main()
{
int width, height;
std::cout << "Input width: "<< std::endl;
std::cin >> width;
std::cout << "Input height: "<< std::endl;
std::cin >> height;

  for(int row = 0; row < height; row++) 
{
  for(int col = 0; col < width; col++) 
{
if((row+col) % 2 == 0) 
{
  std::cout << "*";
} 
else 
{
  std::cout << " ";
}
}
  std::cout << std::endl;
}
return 0;
}
