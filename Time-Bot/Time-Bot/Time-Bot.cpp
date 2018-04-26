// Time-Bot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "include.h"

int main()
{
	string name = getName(); // this will get the name using the function in Timer.cpp
	int m = 0; // declares minutes in Time-Bot

	setTimer(&m); // calls setTimer from Timer.cpp and sets a reference for the minutes
	runTimer(name, m); // calls runTimer from Timer.cpp and sends name and minutes to it as paramters
	cout << "\n\nWowie! Look at that! You made it through your sitting time! Now, get up and go get em' champ!\n\n";

	system("pause");
    return 0;
}

