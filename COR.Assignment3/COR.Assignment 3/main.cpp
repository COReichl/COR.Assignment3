//Colin Reichl
//Assignment 3 - MadLib
//My Morning Routine

#include <conio.h>
#include <iostream>

using namespace std;

//Declaring my Struct
struct Entry {
	string type;
	string input;
};

int main()
{
	string answer = "y";
	const int NUM_ENTRIES = 11;
	//an array with the types of words desired and a place to contain them
	Entry entries[NUM_ENTRIES] = {
		{"verb", ""},
		{"adjective", ""},
		{"object", ""},
		{"noun", ""},
		{"past tense verb", ""},
		{"famous person", ""},
		{"adjective", ""},
		{"breakfast food", ""},
		{"place", ""},
		{"verb", ""},
		{"animal", ""}
	};
	//a loop that goes through the types of word desired and inputs all of the words entered by the user
	for (int i = 0; i < NUM_ENTRIES; i++)
	{
		cout << (i + 1) << ". Enter a " << entries[i].type << ": ";
		cin >> entries[i].input;
	}
	//Checks if the user had entered y to wanting to fix mistakes and repeates while true
	while (answer == "y")
	{
		cout << "Do you want to fix any mistakes? (y/n): ";
		cin >> answer;
		if (answer == "y")
		{
			//allows the user to select and change an entry
			int entry = 0;
			cout << "Which entry would you like to fix? (1-11): ";
			cin >> entry;
			cout << "Enter a " << entries[entry - 1].type << ": ";
			cin >> entries[entry - 1].input;

		}
		else answer = "n";
	}
	//enters all inputed items into the madlib and displays it
	cout << "Your Mad Lib: \n" << "After I " << entries[0].input << " in the morning, I like to have a " << entries[1].input << " shower, brush my teeth with my " << entries[2].input << ", and comb my " << entries[3].input << ". Once I've " << entries[4].input << ", I talk to " << entries[5].input << " and make " << entries[6].input << " " << entries[7].input << ". Before I leave for " << entries[8].input << ", I can't forget to " << entries[9].input << " my pet " << entries[10].input << ".";

	//After I verb in the morning, I like to have a adjective shower, brush my teeth with my object, and comb my noun. 
	// Once I've past tense verb, I talk to famous person and make adjective food. Before I leave for place, I can't 
	// forget to verb my pet animal.


	(void)_getch(); //wait for key press
	return 0;
}