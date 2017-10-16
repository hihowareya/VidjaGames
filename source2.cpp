#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int main()
{
	string decision;
	string chose;
	string pN;
	int story;
	cout << "What is your name?" << endl;
	cin >> pN;
	cout << "Which adventure would you like to go on?" << endl;
	cout << "[1] temple of challenges." << endl;
	cout << "[1] temple of challenges." << endl;
	cout << "[1] temple of challenges." << endl;
	cout << "[1] temple of challenges." << endl;
	cout << "[1] temple of challenges." << endl;
	cout << "[1] temple of challenges." << endl;
	cout << "[1] temple of challenges." << endl;
	cout << "[2] Flying Castle." << endl;
	cin >> story;
	if (story == 2)
	{
		cout << "I'm Sorry, " << pN << " this adventure doesn't exist yet. expect the realease in early 2018." << endl;
	}
	else if (story == 1)
	{
		cout << "Alright, " << pN << " armed with just a torch, a cryptic code on a sheet of paper and your wits you begin your adventure" << endl;

	}
	else
	{
		cout << "Alright, " << pN << " let's begin your adventure" << endl;
	}

	cout << "You're a treasure thief hoping to make your fortune off of looting this ancient temple that you recently discovered deep in the forest." << endl;
	cout << " You'll have to navigate  series of traps, riddles and ciphers in order to reach the treasure." << endl;
	cout << endl;
	cout << "Are you ready to begin? [y/n]" << endl;
	cin >> chose;
	if (chose == "y" || "Y")
	{
		cout << "Good, then without further ado lets begin our adventure!" << endl;
	}
	else
	{
		cout << "Too bad, we're going in anyway!" << endl;
	}

	cout << endl;
	cout << "You enter the temple and are immediately surrounded by darkness, the only source of light is your torch." << endl;
	cout << "It isn't long before you're greeted by your first obstacle: a fork in the path." << endl;
	cout << "There is a signpost that appears to be in English however the letters are a jumbled mess: Yrsg-vf-gur-cngu-lbh-frrx." << endl;
	cout << "As you move towards the sign for closer inspection you noticed that carved into the wall above the sign is: '13'." << endl;
	cout << "Which way do yo go? [left/right]" << endl;
	cin >> decision;
	if (decision == "left" || "Left" || "L" || "l")
	{
		cout << "You decide to go down the left path, as you continue down the path you realise that if there was a trap it would've gone off by now." << endl;
		cout << "Congratulations you have made it past the first trap." << endl;
		cout << "You continue down the path and it isn't long before you enter a large room." << endl;
		cout << "One wall is completely covered with 0's and 1's and another has a door. " << endl;
		cout << "You approach the door, it's made of heavy stone. Beside the door is a mechanism, upon closer inspection you see that it's has 7 wheels, each with letters engraved on them." << endl;
		cout << "After spinning the wheel you see that they go [A-Z]. there is also a button besides the wheels." << endl;
		cout << "You turn back to the wall with the 0's and 1's and inspect it closer:" << endl;
		cout << "01010101 01010011 01000101 01010100 01001000 01000101 01000110 01001001 01010010 01010011 01010100 01001100 01000101 01010100 01010100 01000101 01010010 01001111 01000110 01000101 01010110 01000101 01010010 01011001 01010111 01001111 01010010 01000100" << endl;
		cout << endl;
		cout << "After inspecting the wall you return to the wheels. [What is the password?]";
		cin >> decision;
		if (decision == "UTFLOEW" || "U T F L O E W")
		{
			cout << "You enter the password and press the button, after a few seconds with a loud grating sound the door swings open." << endl;
			cout << "You proceed down the corridor the path steadily sloping downwards as you make your way further and further into the temple." << endl;
			cout << "Just when you start to think that this hallway will go on forever it suddenly opens up into a large room filled with what appears to be coffins." << endl;
			cout << "In the center of the room there is a giant stone structure that appears to be what you're seeking." << endl;
			cout << "On one of the walls there is what appears to be an ancient number pad with stone buttons engraved [0-9]." << endl;
			cout << "You pull out the sheet of paper with what is surely the final riddle." << endl;
			cout << " ---------------------------------------------------------------------------------------- " << endl;
			cout << "|                                                                                        |" << endl;
			cout << "|                                                                                        |" << endl;
			cout << "|                          .--. -.- .--. --. 00110010                                    |" << endl;
			cout << "|                          .-- .. --.. .. .-. 00110100                                   |" << endl;
			cout << "|                          ...- ..- .-.. 00110111                                        |" << endl;
			cout << "|                          --. .--. ...- ... 00110001                                    |" << endl;
			cout << "|                          -. .-. .--. --.- -.-. 00111001                                |" << endl;
			cout << "|                                                                                        |" << endl;
			cout << " ---------------------------------------------------------------------------------------- " << endl;
			cout << endl;
			cout << "You enter the code:" << endl;
			cin >> decision;
			if (decision == "97148" || "9 7 1 4 8")
			{
				cout << "Cfter you press the last button, the stone structure starts to break apart like an egg." << endl;
				cout << "Inside of the structure is the treasure you seek!" << endl;
				cout << "Congratulations, YOU WON!" << endl;
			}
			else
			{
				cout << "After you press the last button hidden ducts throughout the room start to emit a toxic gas." << endl;
				cout << "Despite your best efforts to escape you succumb to the gas." << endl;
				cout << "You Have Died." << endl;
			}

		}
		else
		{
			cout << "You enter the password and press the button, there is a loud rumbling coming from all around, you hear an ominous creaking sound from up above." << endl;
			cout << "You look up in time to see the ceiling above you collapsing, before you can react you are crushed by the falling rubble." << endl;
			cout << "You Died." << endl;
		}
	}
	else if (decision == "right" || "Right" || "R" || "r")
	{
		cout << "You decide to go down the right path, However as you walk down the path the floor beneath you collapses and you fall into a pit!" << endl;
		cout << "You don't survive the fall." << endl;
		cout << "You have died." << endl;
	}

}