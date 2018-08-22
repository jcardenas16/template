#include "myheader.h"

void singlePrint(string type, string authorOne, int authorOneId,int assignmentNumber, string assignmentTitle, string dueDate)
{
	int setTheWidth = 16;
		cout << left
			 << setfill ('*') << setw (80)
			 << "*" << setfill(' ') << endl
			 << setw(setTheWidth) << "* AUTHOR(S) "     << ": " << authorOne   << endl
			 << setw(setTheWidth) << "* STUDENT IDS "   << ": " << authorOneId << endl;

		if (type == "Lab")
			cout << setw(setTheWidth) << "* Lab # "         << ": " << assignmentNumber << " - " << assignmentTitle << endl;
		else
			cout << setw(setTheWidth) << "* ASSIGNMENTS # " << ": " << assignmentNumber << " - " << assignmentTitle << endl;


		cout	 << setw(setTheWidth) << "* CLASS "         << ": " << "CS1D" << endl
			 << setw(setTheWidth) << "* SECTION "       << ": " << "Monday & Wednesdays: 5:00 - 7:20pm"  << endl
			 << setw(setTheWidth) << "* DUE DATE "      << ": " << dueDate << endl
			 << setfill ('*') << setw (80)
			 << "*" << setfill(' ') << endl
			 << right;
}



