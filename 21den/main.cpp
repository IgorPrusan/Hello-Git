#include"rect.h"



int main() {
	Employee employee1("Kate", 19, 1);
	string name;
	
	cout << "Employee1:\nName: "<<employee1.GetName();
	cout << "\nSalary: " << employee1.GetSalary()<<"$";
	return 0;
}