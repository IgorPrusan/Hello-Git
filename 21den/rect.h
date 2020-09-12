#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Employee {
public:
	Employee(string n, unsigned short int age, unsigned short int years, unsigned int salary){
		this->name = n;
		this->age = age;
		this->yearsOfService = years;
		this->salary = salary;
	}

	Employee(string n, unsigned short int a, unsigned short int y) : Employee(n, a, y, 10000) {}

	void SetAge(unsigned short int age) { this->age = age; }
	void SetYearsOfService(unsigned short int years) { this->yearsOfService = years; }
	void SetSalary(unsigned short int salary) { this->salary = salary-(salary%1000); }
	void SetName(string name) { this->name = name; }

	string GetName() const { return name; }
	unsigned short int GetAge() const { return age; }
	unsigned short int GetYearsOfService() const { return yearsOfService; }
	unsigned short int GetSalary() const { return salary; }

private:
	string name;
	unsigned short int age;
	unsigned short int yearsOfService;
	unsigned int salary;
};
