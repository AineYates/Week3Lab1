// Filename: Main.cpp
// Description: Main file to run classes
// Author: Áine Yates
// Date: 09/10/18

#include <iostream>
#include <string>

#include "Student.h"

using namespace std;

int main() {

	Student Billy;
	Module md1;
	Module md2;
	Module md3;

	string moduleName;


	Billy.SetName("Billy Bragg");
	Billy.SetNum("B00578985");
	Billy.SetCourse("Music Theory");
	Billy.SetYear(3);

	md1.SetMarks(87);
	md2.SetMarks(92);
	md3.SetMarks(47);

	Billy.PrintStudent();
	md1.PrintMarks();
	md2.PrintMarks();
	md3.PrintMarks();

	system("Pause");
}
