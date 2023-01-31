//  main.cpp
//  C867 Performance Task 1
//  Created by Lori Ramey on 12/23/22.
//
#include<iostream>
#include<string>
#include "roster.h"

using namespace std;
int main()
{
   //declare studentData array, adding myself to line 5
    const string studentDataTable[] = {
       "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
       "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
       "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
       "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
       "A5,Lori,Ramey,lrame29@wgu.edu,38,10,14,28,SOFTWARE",
    };

   //print required info for WGU task
   cout << "C867 Scripting & Programming Applications" << endl;
   cout << "Language: C++" << endl;
   cout << "Student ID: 010899261" << endl;
   cout << "Name: Loretta Ramey (Please call me Lori)" << endl;

   
   //create a Roster
   Roster classRoster = new Roster();
   
   //print all students in roster
   classRoster->Student::printAll();

   //print all invalid emails
   classRoster->printInvalidEmails(classRoster->getStudentAt(i)->getEmailAddress());
   
   //print average days in course for all students
   for (int i=0; i < NUM_STUDENTS; i++)  {
      classRoster->printAverageDaysInCourse(
          classRoster->getStudentAt(i)->getID(i),
          classRoster->getStudentAt(i)->getDaysToCompletion()
       );
   }
   
   //remove student A3 and print confirmation message
   classRoster->remove("A3");
   
   //reprint class roster to confirm A3 deletion
   classRoster->printAll();
   
   //attempt to remove student A3 again - should print error
   classRoster->remove("A3");

   
   //release memory
   Roster::~classRoster();
   
return 0;
}
