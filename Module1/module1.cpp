#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
	string firstName = "Collie";
	string lastName = "Rado";
	string streetAddress = "1234 Address St";
	string city = "City";
	string zipCode = "54321";

	cout << "First name:\t" + firstName << endl;
	cout << "Last name:\t" + lastName << endl;
	cout << "Address:\t" + streetAddress << endl;
	cout << "\t\t" + city + " " + zipCode << endl;

  return 0;
}
