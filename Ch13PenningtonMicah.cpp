// Micah Pennington
// April 5 2022 ©
// Chapter 13 Program

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Employee {
private:
	string name;
	int idNumber;
	string department;
	string position;
public:
	// Class constructors
	Employee(string inName, int inIdNumber, string inDepartment, string inPosition) {
		name = inName;
		idNumber = inIdNumber;
		department = inDepartment;
		position = inPosition;
	}

	Employee(string inName, int inIdNumber) :
		Employee(inName, inIdNumber, "", "") {}

	Employee() :
		Employee("", 0, "", "") {}

	// Property setter functions
	void setName(string inName) { name = inName; }
	void setIdNumber(int inIdNumber) { idNumber = inIdNumber; }
	void setDepartment(string inDepartment) { department = inDepartment; }
	void setPosition(string inPosition) { position = inPosition; }

	// Property getter functions
	string getName() { return name; }
	int getIdNumber() { return idNumber; }
	string getDepartment() { return department; }
	string getPosition() { return position; }
};

// Prototypes

int main() {
	// Susan Meyers, 47899, Accounting, Vice President
	// Mark Jones, 39119, IT, Programmer
	// Joy Rogers, 81774,  Manufacturing, Engineer

	// Make first employee with first constructor
	Employee susan = Employee("Susan Meyers", 47899, "Accounting", "Vice President");
	// Make second employee with second constructor and then manually set other properties
	Employee mark = Employee("Mark Jones", 39119);
	mark.setDepartment("IT");
	mark.setPosition("Programmer");
	// Make third employee with third constructor and then manually set other properties
	Employee joy = Employee();
	joy.setName("Joy Rogers");
	joy.setIdNumber(81774);
	joy.setDepartment("Manufacturing");
	joy.setPosition("Engineer");

	// Display employees
	cout << susan.getName() << "\t" << susan.getIdNumber() << "\t" << susan.getDepartment() << "\t" << susan.getPosition() << '\n';
	cout << mark.getName() << "\t" << mark.getIdNumber() << "\t" << mark.getDepartment() << "\t\t" << mark.getPosition() << '\n';
	cout << joy.getName() << "\t" << joy.getIdNumber() << "\t" << joy.getDepartment() << "\t" << joy.getPosition() << '\n';
}