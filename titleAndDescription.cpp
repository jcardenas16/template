#include "myheader.h"


void titleAndDescription(string title, string description)
{

	cout << left << setfill ('*') << setw (80) << "*" << setfill(' ') << endl
         << "TITLE: " << title << endl;
	cout << setfill ('_') << setw (80) << "_" << setfill(' ') << endl
	     << "DESCRIPTION: " << description << endl;




	cout << left << setfill ('*') << setw (80) << "*" << setfill(' ') << endl;
}
