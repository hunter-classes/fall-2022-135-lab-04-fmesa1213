/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab4A
It asks the user to to input width and height and prints a solid rectangular box of the requested size using asterisks.
*/

# include<iostream>
using namespace std;
int main()

{
int width,height;
std::cout << "Input width : "<< std::endl;
std::cin >> width;
std::cout << "Input height : "<< std::endl;
std::cin >> height;
  
std::cout << "Shape : "<<endl<<endl;
for(int i=0;i<height;i++)
{ 
for(int j=0;j<width;j++)
{ 
  std::cout<<"*";
}
  std::cout<<endl;
}

return 0;

}
