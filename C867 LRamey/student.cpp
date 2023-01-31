//  student.cpp
//  C867 Performance Task 1
//  Created by Lori Ramey on 1/2/23
//
#include<iostream>
#include<string>

using namespace std;

#include "student.h"

int i=0;

//full constructor
Student::Student(
  string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompletion[3], DegreeProgram degreeprogram)
{
   this->studentID = studentID;
   this->firstName = firstName;
   this->lastName = lastName;
   this->emailAddress = emailAddress;
   this->age = age;
   this->daysInCourse1 = daysInCourse1;
   this->daysInCourse2 = daysInCourse2;
   this->daysInCourse3 = daysInCourse3;
   this->daysToCompletion[3] = {daysInCourse1, daysInCourse2, daysInCourse3}
   this->degreeprogram = degreeprogram;

   for (int i=0; i<3; i++)
      this->daysToCompletion[i] = daysToCompletion[i];
}

//getters
string Student::getID()
{
   return studentID;
}

string Student::getFirstName()
{
   return firstName;
}

string Student::getLastName()
{
   return lastName;
}

string Student::getEmail()
{
   return emailAddress;
}

int Student::getAge()
{
   return age;
}

int* Student::getDaysToCompletion()
{
   return daysToCompletion;
}

DegreeProgram Student::getDegree()
{
   return degreeprogram;
}

//setters
void Student::setID(string studentID)
{
   this->studentID = studentID;
}

void Student::setFirstName(string firstName)
{
   this->firstName = firstName;
}

void Student::setLastName(string lastName)
{
   this->lastName = lastName;
}

void Student::setEmail(string emailAddress)
{
   this->emailAddress = emailAddress;
}

void Student::setAge(int age)
{
   this->age = age;
}

void Student::setDaysToCompletion(int daysToCompletion[])
{
   for (int i = 0; i < 3; i++) this->daysToCompletion[i] =  daysToCompletion[i];
}

void Student::setDegree(DegreeProgram degreeprogram)
{
   this->degreeprogram = degreeprogram;
}

//define member functions for Student class

void Student::printAll(); //print all student info tabbed
{
   cout << studentID << "\t";
   cout << firstName << "\t";
   cout << lastName << "\t";
   cout << emailAddress << "\t";
   cout << age << "\t";
   cout << daysToCompletion << "\t";
   cout << degreeprogram << endl;
}

int avgToCompletion(int daysToCompletion[]) // calc avg from array
{
   int average;
   average = ( daysToCompletion[0] + daysToCompletion[1] + daysToCompletion[2]) / 3;
   return average;
}

//destructor
Student::~Student()
{
};
