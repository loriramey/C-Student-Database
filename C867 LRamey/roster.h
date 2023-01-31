//  roster.h
//  C867
//  Created by Lori Ramey on 1/2/23

#ifndef roster_hpp
#define roster_hpp

#include <stdio.h>
#include <string.h>
#include <vector>

#include "student.h"
#include "degree.h"

using namespace std;

class Roster {
   public:
   //constructor
   Roster() {
      Roster* classRosterArray = new Roster[NUM_STUDENTS];
   };
   
   //destructor
   ~Roster();
   
   //member functions

   void getStudentAt(int index);
   //indexes student to add to roster
   
   void parse(string row); //parses strings, creates Student objects, adds to Roster
   
   void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompletion[], DegreeProgram degreeprogram); //adds student to Roster

   void remove(string studentID);   //removes student from Roster
   
   void printAll(); // print whole Roster
   
   void printAverageDaysInCourse(string studentID, int daysToCompletion[]); //prints Avg from array of days in *course

   void printInvalidEmails(string studentID, string emailAddress); //find invalid emails and print those student records
   
   
   //function calculate avg days to completion
   int avgToCompletion(int daysToCompletion[]);
   
};

#endif /* roster_h */
