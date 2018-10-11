// Filename: Student.cpp
// Description:
// Author: Áine Yates
// Date: 09/10/18

#include "Student.h"



void Student::PrintStudent() const {
	std::cout << "Name = " << name_ << endl;
	std::cout << "RegistrationID = " << number_ << endl;
	std::cout << "Course  = " << course_ << endl;
	std::cout << "Year = " << year_ << endl;
}

void Module::PrintMarks() const {
	std::cout <<"Module Mark = " << marks_ << endl;
}

void Student::SetName(std::string name) {
	name_ = name;
}

std::string Student::GetName() const {
	return name_;
}

void Student::SetNum(std::string number) {
	number_ = number;
}

std::string Student::GetNum() const {
	return number_;
}

void Student::SetYear(int year) {
	year_ = year;
}

int Student::GetYear() const {
	return year_;
}

void Student::SetCourse(std::string course) {
	course_ = course;
}

std::string Student::GetCourse() const {
	return course_;
}

void Student::SetAge(std::string birthday) {
	birthday_ = birthday;
}

std::string Student::GetAge() const {
	return birthday_;
}

void Module::SetMarks(int marks) {
	marks_ = marks;
}

int Module::GetMarks() const {
	return marks_;
}
