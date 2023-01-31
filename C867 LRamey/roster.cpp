//  roster.cpp
//  C867 Performance Task 1
//  Created by Lori Ramey on 1/2/23
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#include "roster.h"

int studentIndex;

//create array of pointers as Roster
Roster() {
   Roster* classRosterArray = new Roster;
   for (int i = 0; i < 5; i++)      //parse given string from Student
   {
      classRosterArray->parse(studentDataTable[i]);
   }
}

//parse data coming from studentDataTable
void Roster::parse(string row)
{
   int tempDaysToCompletion[3] = {};

   if (studentIndex < NUM_STUDENTS)  {
      studentIndex++;
      
      //read the studentID
      int right = row.find(",");
      string tempID = row.substr(0, right);
      
      //read the first name
      int left = right + 1;
      right = row.find(",", left);
      string tempFN = row.substr(left, right - left);
      
      //read the last name
      left = right + 1;
      right = row.find(",", left);
      string tempLN = row.substr(left, right - left);
      
      //read the email address
      left = right + 1;
      right = row.find(",", left);
      string tempEmail = row.substr(left, right - left);
      
      //read the age
      left = right + 1;
      right = row.find(",", left);
      string tempAge = row.substr(left, right - left);
      
      //read the days to course completion
      left = right + 1;
      right = row.find(",", left);
      string tempDay1 = row.substr(left, right - left);
      std::stoi(tempDay1);
      
      left = right + 1;
      right = row.find(",", left);
      string tempDay2 = row.substr(left, right - left);
      std::stoi(tempDay2);
      
      left = right + 1;
      right = row.find(",", left);
      string tempDay3 = row.substr(left, right - left);
      std::stoi(tempDay3);
      
      //read into temp array the 3 values for days to completion of courses
      tempDaysToCompletion[0] = tempDay1;
      tempDaysToCompletion[1] = tempDay2;
      tempDaysToCompletion[2] = tempDay3;
      
      //read the enrolled degree program
      left = right + 1;
      right = row.find(",", left);
      string tempDegree = row.substr(left, right - left);
      string degreeProgramName = "";
      if (tempDegree == SECURITY)  {
         degreeProgramName = degreeprogram[0];
      }
      if (tempDegree == NETWORK)  {
         degreeProgramName = degreeprogram[1];
      }
      if (tempDegree == SOFTWARE)  {
         degreeProgramName = degreeprogram[2];
      }
      
      //call the Add function, defined below
      this->add(
         studentID = tempID,
         firstName = tempFN,
         lastName = tempLN,
         emailAddress = tempEmail,
         age = tempAge,
         daysToCompletion = tempDaysToCompletion,
          degreeprogram = degreeProgramName);
   }
   else  {
      cout << "There is an error reading the student data." << endl;
   }
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompletion[], DegreeProgram degreeprogram); //adds student to Roster
{
   this->studentID = studentID;
   this->firstName = firstName;
   this->lastName = lastName;
   this->emailAddress = emailAddress;
   this->age = age;
   this->degreeprogram = degreeprogram;

   for (int i=0; i < 3; i++)
      this->daysToCompletion[i] = daysToCompletion[i];
}

void Roster::remove(string studentID);   //removes student from Roster
{
   bool found = false;
   for (int = 0; i <= NUM_STUDENTS; i++)
   {
      if (this->classRoster[i]->getStudentID() == studentID)  {
         found = true;
         delete this->classRoster[i];
      }
      else
      {
         cout << "The student with the ID: " << studentID << " was not found." << endl;
      }
   return found;
   }
}

void Roster::printAll()
{
   for (i = 0; i<=this->studentIndex; i++) (this->classRoster)[i]->Student::print();
}
                           
void Roster::printAverageDaysInCourse(string studentID, int daysToCompletion[]); //prints Avg from array of days in course
{
   for (int i = 0; i < NUM_STUDENTS; i++) //iterate through roster and check addresses
   {
      this->studentID = classRoster[i]->getID();
      this->daysToCompletion = classRoster[i]->getDays
      
   int averageDaysInCourse = 0;
   int runningSum = 0;
   for (i = 0; i<3; i++)
   {
      runningSum = runningSum + (this->daysToCompletion[i]);
   }
   AverageDaysInCourse = runningSum / 3;
   cout << "Student ID: " << studentID << ", average days in course is: " << AverageDaysInCourse << endl;
}

//find invalid emails and print to display
void printInvalidEmails(string studentID, string emailAddress)
{
   string tempEmail = "";

   for (int i = 0; i < NUM_STUDENTS; i++) //iterate through roster and check addresses
   {
      bool invalid = false;
      int found = -1;
      this->studentID = classRoster[i]->getID();
      tempEmail = this->classRoster[i]->getEmail(); //get particular student's email
      
      std::size_t found = str.find(' '); // look for extra spaces (invalid address)
      if (found != -1)
      {
         invalid = true;
      }
      
      std::size_t found = str.find('@'); // look for @ to confirm validity
      if (found == std::string::npos)
      {
         invalid = true;
      }
      std::size_t found = str.find('.'); // look for . to confirm validity
      if (found == std::string::npos)
      {
         invalid = true;
      }
      
      
      if (invalid == true)  //print invalid email to display
      {
         cout << tempEmail << " - is invalid."
      }
   }
   return invalid;
}


