#include <iostream>
#include <string>
using namespace std;


struct Address 
{
	int HouseNo;
	int StNo;
	string city;
	string province;
};
struct Student
{
	string Name;
	Address address;
	int age;
	float gpa;
};
