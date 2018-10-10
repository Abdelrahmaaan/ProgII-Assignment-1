#include<cstdio>
#include <iostream>
#include<string>
#include <fstream>

using namespace std;
int main()
{int numberOfLines = 1000;
string data;
string name;	// Input name to search for
int i;	//Integer that will represent the number of iterations
ifstream inStream;	//Declares inStream as a stream in variable

bool foundBoy = false;	// Flag if we found a boy or girl name
bool foundGirl = false;
cout <<"Enter name (capitalize first letter): " << endl;	//Prompt and user input
cin >> name;
inStream.open("data.txt");
if (inStream.fail())//tells the user if the file doesn't exist
{
cout << "I/O failure opening file babynames2012.txt." << endl;
//exit(1);
}for (i=0; i<numberOfLines;i++) //for loop to loop for 1000 iterations
{
int rank; //declare rank as an integer
string boyName;	//declase boyname as a string
string girlName;	//declare girlname as a string
inStream >> rank;	//1st string in each iteration of code is set to rank
inStream >> boyName;	//2nd string in each iteration of code is set to boyname
inStream >> girlName;	//3rd string in each iteration of code is set to girlname
//The code will go through each line of the 1,000 line list sorting the three pieces into a category one iteration at a time

if (name == boyName)	//if the users input (name) matches (is equal to) a boy name on the list...
{
foundBoy = true;	//the Boolean will be set to true
cout << name << " is ranked " << rank << " in popularity among boys." << endl;	//and the code will cout the name (user input) and the rank (at the time the "name" matched the "boyname" on the list)
}
if (name == girlName)	//if the users input (name) matches (is equal to) a girl name on the list...
{
foundGirl = true;	//the Boolean will be set to true
cout << name << " is ranked " << rank << " in popularity among girls." << endl; //and the code will cout the name (user input) and the rank (at the time the "name" matched the "girlname" on the list)
}
}
// Message if not found
if (!foundBoy)	//boolean "foundBoy" is false thus it went through the entire list and found no "boyname" that matched
cout << name << " is not ranked among the top 1000 names for boys." << endl;
if (!foundGirl)	//boolean "foundGirl" is false thus it went through the entire list and found no "girlname" that matched
cout << name << " is not ranked among the top 1000 names for girls." << endl;
char choice;
for(int i=1;i<=1000;i++){
        cout <<"Do you want search another name Y/N ?"<<endl;
cin>>choice;
if (choice=='Y'){
        int numberOfLines = 1000;
string data;
string name;	// Input name to search for
int i;	//Integer that will represent the number of iterations
ifstream inStream;	//Declares inStream as a stream in variable

bool foundBoy = false;	// Flag if we found a boy or girl name
bool foundGirl = false;
cout <<"Enter name (capitalize first letter): " << endl;	//Prompt and user input
cin >> name;
inStream.open("data.txt");
if (inStream.fail())//tells the user if the file doesn't exist
{
cout << "I/O failure opening file babynames2012.txt." << endl;
//exit(1);
}for (i=0; i<numberOfLines;i++) //for loop to loop for 1000 iterations
{
int rank; //declare rank as an integer
string boyName;	//declase boyname as a string
string girlName;	//declare girlname as a string
inStream >> rank;	//1st string in each iteration of code is set to rank
inStream >> boyName;	//2nd string in each iteration of code is set to boyname
inStream >> girlName;	//3rd string in each iteration of code is set to girlname
//The code will go through each line of the 1,000 line list sorting the three pieces into a category one iteration at a time

if (name == boyName)	//if the users input (name) matches (is equal to) a boy name on the list...
{
foundBoy = true;	//the Boolean will be set to true
cout << name << " is ranked " << rank << " in popularity among boys." << endl;	//and the code will cout the name (user input) and the rank (at the time the "name" matched the "boyname" on the list)
}
if (name == girlName)	//if the users input (name) matches (is equal to) a girl name on the list...
{
foundGirl = true;	//the Boolean will be set to true
cout << name << " is ranked " << rank << " in popularity among girls." << endl; //and the code will cout the name (user input) and the rank (at the time the "name" matched the "girlname" on the list)
}
}
// Message if not found
if (!foundBoy)	//boolean "foundBoy" is false thus it went through the entire list and found no "boyname" that matched
cout << name << " is not ranked among the top 1000 names for boys." << endl;
if (!foundGirl)	//boolean "foundGirl" is false thus it went through the entire list and found no "girlname" that matched
cout << name << " is not ranked among the top 1000 names for girls." << endl;

}
else
    {return 0;}

}}



