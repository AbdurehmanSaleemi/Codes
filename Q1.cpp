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
int main()
{
	int no;

	cout << "How many Students you want to create\n";
	cin >> no;

	Student* students = new Student[no];

	for (int i = 0; i < no; i++)
	{
		system("cls");
		cout << "Enter Name\n";
		cin >> students[i].Name;

		cout << "Enter House No\n";
		cin >> students[i].address.HouseNo;

		cout << "Enter Street No\n";
		cin >> students[i].address.StNo;

		cout << "Enter City Name\n";
		cin >> students[i].address.city;

		cout << "Enter Province Name\n";
		cin >> students[i].address.province;

		cout << "Enter Age\n";
		cin >> students[i].age;

		cout << "Enter GPA\n";
		cin >> students[i].gpa;

	}
	system("cls");
	for (int i = 0; i < no; i++)
	{
		cout << "Name: " << students[i].Name << endl;

		cout << "Address: " << students[i].address.HouseNo << " St.no " << students[i].address.StNo << " " 
			<< students[i].address.city << "," << students[i].address.province << endl;
		cout << "Age: " << students[i].age << endl;
		cout << "GPA: " << students[i].gpa << endl;
	}
	delete[] students;
	return 0;
}
