#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>
#include "include.h"

using namespace std;

void setTimer(int* min) { // this will take the memory of the parameters so it's easier to modify it
	cout << "Please enter how long, in minutes, you would like to stay seated.\n\n";
	cout << "Enter time here: ";
	cin >> *min; // Sets the number stored in the address
}

string getName() {
	string userName; // declare a variable that will store the users name
	cout << "Hello human! I am Time-Bot, welcome to the program that will help you get up from your chair for once!\n";
	cout << "So, what's your name? It's only courteous to call you by your name. Or at least that's what I know of humans.\n";
	cin >> userName; // gets a name input from the user
	return(userName); // returns the users name so it can be called later
}

void runTimer(string userName, int min) {
	int minutesToSeconds = min * 60;; // This converts minutes to seconds to make it easier to count in a loop
	for (int i = minutesToSeconds; i > 0; i--) { // A for loop that runs until there are no seconds left to go through
		cout << "\n" << userName << " this is your time to shine. Your time until getting up is: "; // Says the users name 
		minutesToSeconds--;
		cout << minutesToSeconds << "\nDon't worry, it's not as far away as it seems!";
		Sleep(1000); // this makes it wait around a second before counting down again
	}

}