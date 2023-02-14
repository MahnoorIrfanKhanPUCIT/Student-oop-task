#include <iostream>
#include <string.h>

using namespace std;

class Student
{
	int regNo;
	string firstName;
	string lastName;
	string program;
	float cgpa;

public:
	//MUTATORS
	void setregNo(int x)
	{
		if (x >= 501 && x <= 565)
		{
			regNo = x;
		}
		else
		{
			regNo = 0;
		}
	}

	void setcgpa(float y)
	{
		if (y >= 0.00f && y <= 4.00f)
		{
			cgpa = y;
		}
		else
		{
			cgpa = -1;
		}
	}

	void setfirstName(string a)
	{
		firstName = a;
	}

	void setlastName(string b)
	{
		lastName = b;
	}

	void setprogram(string c)
	{
		program = c;
	}

	//GEYTTERS
	int getregNo()
	{
		return regNo;
	}

	string getfirstName()
	{
		return firstName;
	}

	string getlastName()
	{
		return lastName;
	}

	string getprogram()
	{
		return program;
	}

	float getcgpa()
	{
		return cgpa;
	}

	//CONSTRUCTORS

	//parameterised
	Student(int regNo_x, string firstName_x,string lastName_x, string program_x)
	{
		setregNo(regNo_x);
		setfirstName(firstName_x);
		setlastName(lastName_x);
		setprogram(program_x);
		cgpa = -1;
	}

	Student(int regNo_y, string firstName_y, string program_y)
	{
		setregNo(regNo_y);
		setfirstName(firstName_y);
		lastName = " ";
		setprogram(program_y);
		cgpa = -1;
	}

	Student(int regNo_z, string firstName_z, string lastName_z, string program_z,float cgpa_z)
	{
		setregNo(regNo_z);
		setfirstName(firstName_z);
		setlastName(lastName_z);
		setprogram(program_z);
		setcgpa(cgpa_z);
	}

	//copy
	Student(Student& obj)
	{
		regNo = obj.regNo;
		firstName = obj.firstName;
		lastName = obj.lastName;
		program = obj.program;
		cgpa = obj.cgpa;
	}

	//DESTRUCTOR
	~Student()
	{
		cout << "Destructor called....." << endl;
	}

	//MEMBER FUNCTIONS

	//setting items
	void setStudent(int a, string b, string c, string d,float e)
	{
		setregNo(a);
		setfirstName(b);
		setlastName(c);
		setprogram(d);
		setcgpa(e);
	}

	//getting items
	void getStudent()
	{
		int regNo;
		string firstName;
		string lastName;
		string program;
		float cgpa;

		cout << "Enter the regNo of student : ";
		cin >> regNo;
		cout << "Enter the first name of student : ";
		cin >> firstName;
		cout << "Enter the last name of student : ";
		cin >> lastName;
		cout << "Enter the program of student : ";
		cin >> program;
		cout << "Enter the cgpa of student : ";
		cin >> cgpa;
		setStudent(regNo,firstName,lastName,program,cgpa);
	}

	//placing information
	void putStudent()
	{
		cout << getregNo() << "\t" << "\t" << getfirstName() << "\t" << "\t" << getlastName() << "\t\t" << getprogram() << "\t\t" << getcgpa() << "\t\t";
	}

	//isFirstSemester
	bool isFirstSemester()
	{
		return (cgpa == -1);
	}

	//percentage
	float getPercentage()
	{
		if (cgpa >= 0)
		{
			return (cgpa / 4) * 100;
		}
		else
		{
			return -1;
		}
	}

	//isPromoted
	bool isPromoted()
	{
		return (cgpa >= 2.00f);
	}
};


int main()
{

	Student obj1(505, "mahnoor", "khan", "IT", 4.00f);
	Student obj2(obj1);
	Student obj3(obj2), obj4(506, "hira", "IT");
	int sem = 0;

	//STD1
	cout << "Enter Info for student-1:" << endl;
	obj1.getStudent();

	//STD2
	cout << "Enter Info for student-2:" << endl;
	obj2.getStudent();

	//STD3
	cout << "Enter Info for student-3:" << endl;
	obj3.getStudent();

	//STD4
	cout << "Enter Info for student-4:" << endl;
	obj4.getStudent();

	cout << "RegNo" << "\t" << "FirstName" << "\t" << "LastName" << "\t" << "Program" << "\t\t" << "CGPA" << endl;

	obj1.putStudent();
	cout << endl;

	obj2.putStudent();
	cout << endl;

	obj3.putStudent();
	cout << endl;

	obj4.putStudent();
	cout << endl;

	//IsSemester
	if (obj1.isFirstSemester() == 1)
	{
		cout << "Student 1 is in first semester." << endl;
	}
	cout << endl;

	if (obj2.isFirstSemester() == 1)
	{
		cout << "Student 2 is in first semester." << endl;
	}
	cout << endl;

	if (obj3.isFirstSemester() == 1)
	{
		cout << "Student 3 is in first semester." << endl;
	}
	cout << endl;

	if (obj4.isFirstSemester() == 1)
	{
		cout << "Student 4 is in first semester." << endl;
	}
	cout << endl;


	//Percentage
	cout << "Percentages: " << endl;

	cout << "Student - 1:";
	cout << obj1.getPercentage();
	cout << endl;

	cout << "Student - 2:";
	cout << obj2.getPercentage();
	cout << endl;

	cout << "Student - 3:";
	cout << obj3.getPercentage();
	cout << endl;

	cout << "Student - 4:";
	cout << obj4.getPercentage();
	cout << endl;
	cout << endl;


	//Is Promoted

	if (obj1.isPromoted() == 1)
	{
		cout << "Student 1 is in promoted." << endl;
	}
	else
	{
		cout << "Student 1 is in not promoted." << endl;

	}
	cout << endl;

	if (obj2.isPromoted() == 1)
	{
		cout << "Student 2 is in promoted." << endl;
	}
	else
	{
		cout << "Student 2 is in not promoted." << endl;

	}
	cout << endl;

	if (obj3.isPromoted() == 1)
	{
		cout << "Student 3 is in promoted." << endl;
	}
	else
	{
		cout << "Student 3 is in not promoted." << endl;

	}
	cout << endl;

	if (obj4.isPromoted() == 1)
	{
		cout << "Student 4 is in promoted." << endl;
	}
	else
	{
		cout << "Student 4 is in not promoted." << endl;

	}
	cout << endl;
}