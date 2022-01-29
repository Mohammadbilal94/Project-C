#include <iostream>
using namespace std;
int main()
{
string friendName,name,food,number,adjective,color,animal,yourName;
string word; //prompt;
char space;
//ifstream in;
int num;
cout<<"Enter the first of your friend: ";
cin >> friendName;
cout << "Enter your name: ";
cin >> yourName;
cout << "Enter a food item: ";
cin >> food;
cout<<"Enter a number between 100 and 120: ";
cin >> number;
cout <<" Please enter an adjective: ";
cin >>adjective;
cout <<" Enter a color: ";
cin >> color;
cout <<"Please enter an animal: ";
cin >> animal;
cout << "Dear friend "; cout << friendName;
cout << ",:\n";
cout << "I am so sorry that I am unable to come to your place at this time. \n";
cout << " First, I ate a rotten ";
cout << food;
cout << ", which made me turn ";
cout << color;
cout << " and extremely ill. I came down with a fever of ";
cout << number;
cout << ". Next my ";
cout << adjective;
cout << " pet ";
cout << animal;
cout << " must have smelled the remains of the";
cout << food;
cout << " i do have assignments.\n";
cout << " I am currently doing my assignments and hope you will accept my exceuses. \n";
cout << "Love you friend, \n";
cout << yourName;
return 0;



}