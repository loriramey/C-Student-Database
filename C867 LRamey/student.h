//
//  student.h
//  C867 LRamey
//
//  Created by Lori Ramey on 12/23/22.
//

#ifndef student_h
#define student_h

#include <stdio.h>
#include <string>
#include "degree.h"

using namespace std;

const int NUM_STUDENTS = 5;

//define Student class and its variables, declare member functions

class Student {
   public:
   
   //constructor and destructor
   Student(); //default constructor
   
   Student(  //parameterized constructor
      string studentID,
      string firstName,
      string lastName,
      string emailAddress,
      int age,
           int daysInCourse1,
           int daysInCourse2,
           int daysInCourse3,
      int daysToCompletion[],
      DegreeProgram degreeprogram);

   ~Student();   //destructor
   
   //getters (accessors))
   string getID();
   string getFirstName();
   string getLastName();
   string getEmail();
   int getAge();
   int* getDaysToCompletion();
   virtual DegreeProgram getDegree() = 0;

   //setters (mutators)
   void setID(string studentID);
   void setFirstName(string firstName);
   void setLastName(string lastName);
   void setEmail(string emailAddress);
   void setAge(int age);
   void setDaysToCompletion(int daysToCompletion[]);
   void setDegree(DegreeProgram degreeprogram);
   
   //print function declared
   virtual void printAll() = 0;
   
private:   //member variables
   string studentID;
   string firstName;
   string lastName;
   string emailAddress;
   int age;
   int daysToCompletion[3];
   int daysInCourse1;
   int daysInCourse2;
   int daysInCourse3;
   DegreeProgram degreeprogram;
   
};
#endif /* student_h */
