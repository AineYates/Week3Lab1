// Filename: Student.h
// Description: Set up classes for use in cpp file
// Author: Aine Yates
// Date: 09/10/2018
#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	std::string name_;
	std::string number_;
	int year_;
	std::string course_;
	std::string birthday_;

public:
	void SetName(std::string name);
	std::string GetName() const;

	void SetNum(std::string number);
	std::string GetNum() const;

	void SetYear(int year);
	int GetYear() const;

	void SetCourse(std::string course);
	std::string GetCourse() const;

	void SetAge(std::string birthday);
	std::string GetAge() const;

	void PrintStudent() const;
}; 

class Course {
private:	
	std::string title_;
	std::string modules_;
	int code_;

public:
	void SetTitle(std::string title);
	std::string GetTitle() const;

	void SetModules(std::string modules);
	std::string GetModules() const;

	void SetCode(int code);
	int GetCode() const;
};

class Module {
private:	
	int modCode_;
	int marks_;
	std::string lecturer_;
	std::string descrip_;

public:
	void SetModCode(int modCode);
	int GetModCode() const;

	void SetMarks(int marks);
	int GetMarks() const;

	void SetLecturer(std::string lecturer);
	std::string GetLecturer() const;
	
	void SetDescrip(std::string descrip);
	std::string GetDescrip() const;

	void PrintMarks() const;
};