/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 4C
I wrote a program that asks the user to input the shape size, and prints a diagonal cross of that dimension.
*/

#include <iostream>  
using namespace std;  
int main()  
{  
	int n;
	
std::cout<<"Input size: "<< std::endl;
std::cin>>n;
	
for(int i = 1;i<=n;i++)
{
	for(int j = 1;j<=n;j++)
{
	if(i==j || (i+j-1==n))
{
	std::cout<<"*";
}
	else
{
	std::cout<<" ";
}
}
	std::cout<< std::endl;
}
	return 0;
} 
