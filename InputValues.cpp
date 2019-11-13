#include <iostream>
#include <string>
using namespace std;

int main2();

int main()
{
	int feet;
	int inches;
	
	cout << "Enter two integers spearated by spaces: ";
	cin >> feet >> inches;
	cout << endl;
	
	cout << "Feet = " << feet << endl;
	cout << "Inches = " << inches << endl;
	
	main2();
	return 0;
}

int main2()
{
	string firstName;
	string lastName;
	int age;
	double weight;
	
	cout << "Enter first name, last name, age, "
		 << "and weight, separated by spaces."
		 << endl;
	cin >> firstName >> lastName;
	cin >> age >> weight;
	
	cout << "Name: " << firstName << " "
		 << lastName << endl;
	cout << "Age: " << age << endl;
	
	return 0;
}
