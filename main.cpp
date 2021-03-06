/*******************************************************************************
* AUTHOR     : Sebastian Hooshmand
* STUDENT ID : 1047448
* ASIGN #7   : Repetition & Selection
* CLASS      : CS1A
* SECTION    : MW: 8am
* DUE DATE   : 3/28/18
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


/*******************************************************************************
* Repetition & Selection
*-------------------------------------------------------------------------------
*	This program will output the total grade points and the grade point average
*-------------------------------------------------------------------------------
* INPUT:
*    letterGrade
*
*   OUTPUT:
*    totalGradePoints
*    gradePointAverage
*
*******************************************************************************/
int main()
{
	/***************************************************************************
	* CONSTANTS
	* --------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING
	* --------------------------------------------------------------------------
	* PROGRAMMER    : Programmer's name
	* CLASS         : Student's Course
	* SECTION       : Class Days and Times
	* ASSIGN_NUM    : Assign Number (specific to this lab)
	* ASSIGN_NAME   : Title of the Lab
	***************************************************************************/
	const char PROGRAMMER []  = "Sebastian Hooshmand";
	const char CLASS[]        = "CS1A";
	const char SECTION []     = "MW: 8am-11:50am";
	const int  ASSIGN_NUM     = 7;
	const char ASSIGN_NAME[]  = "Repetition & Selection";

	// variable declarations
	char 	letterGrade;
	char	X;
	float 	totalGradePoints;
	float   gradePointAverage;
	int 	count;



	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
	cout << "*  "      << setw(14) << "CLASS"     << ": " << CLASS    << endl;
	cout << "*  "      << setw(14) << "SECTION"   << ": " << SECTION  << endl;
	cout << "*  ASSIGN #" << setw(6)  << ASSIGN_NUM << ": " << ASSIGN_NAME;
	cout << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/***************************************************************************
	* INPUT - read's in the letter grade
	***************************************************************************/

	for(count = 1; count <= 3; count = count + 1)
	{
		cout << "TEST CASE #" << count << ":" << endl;

		cout << right;
		cout << setw(5) << "Enter Letter Grade #" << count << ":" << endl;
		cin  << letterGrade;
		cin.ignore(1000,'\n');

		if(letterGrade != X)
		{
			while (letterGrade != X)
			{
				cout << "Enter Letter Grade #" << count << ":" << endl;
				cin  << letterGrade;
				cin.ignore(1000,'\n');

				switch(letterGrade)
				{
				case 'A' : cout << 4.0;
					   break;
				case 'B' : cout << 3.0;
					   break;
				case 'C' : cout << 2.0;
					   break;
				case 'D' : cout << 1.0;
					   break;
				case 'F' : cout << 0.0;
					   break;

				default : cout << "Please enter a valid letter grade.";
					break;

					if(letterGrade != X)
					{
						cout << "Total Grade Point: " << totalGradePoints;
						cout << endl;
						cout << "GPA: " << gradePointAverage;
						cout << endl << endl << endl;
					}


				}

			}
		}
	}





















	return 0;
}
