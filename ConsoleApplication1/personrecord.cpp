#include <iostream>
#include <string>
using namespace std;

int z_main()
{
	string Name, Address;
	int Age, Height;
	char Gender;
	bool Married;
	
	cout << "Name: ";
	getline (cin, Name);
	cout << "Age: ";
	cin >> Age;
	cout << "Gender (m/f): ";
	cin >> Gender;
	cout << "Address: ";
	cin.ignore();
	getline(cin, Address);
	cout << "Married (true/false): ";
	cin >> Married;
	cout << "Height in meters: ";
	cin >> Height;

	cout << "\n\nName: " << Name << endl << "Age: " << Age << endl << "Gender (m/f): " << Gender << endl;
	cout << "Address: " << Address << endl << "Married (true/false): " << Married << endl;
	cout << "Height in meters: " << Height << endl;
	return 0;
}