//Arne Zargarian
//CSIS 135
//3/28/2017
//Lab 4


#include <iostream>
#include <time.h>
#include <string>
#include <random>
#include <cstdlib>
#include <iomanip>
#include "rps.h"
using namespace std;

int main()
{
	//Create menu, 
	// create choice for player choice, 
	// create comp for computer choice
	char menu;
	int choice = 0;
	int comp = 0;
	do
	{
		//Display the menu and ask for the player's choice.
		cout << "ROCK PAPER SCISSORS MENU" << endl;
		cout << "-------------------------" << endl;
		cout << "p)Play Game" << endl;
		cout << "q)Quit" << endl;
		cin >> menu;
		//if the player chooses 'p' then rock paper scissors menu displayes
		if (menu == 'p')
		{
			do//input validation loop to make sure the player can only pick 1, 2, or 3.
			{
				choice = getPlayerChoice();
				if (choice < 1 || choice > 3)
				{
					//If the user's choice is not between 1 and 3,
					//Display "Invalid choice please select 1, 2, or 3."
					cout << "Invalid choice, please select 1, 2, or 3." << endl;
				}
			} while (choice < 1 || choice > 3);//Display getPlayerChoice menu while choice < 1 or choice > 3 
				comp = getComputerChoice();
				//Gets the computer's random choice

				cout << "You chose " << convertString(choice) << endl;
				//Converts the player's choice to string
				
				cout << "The computer chose " << convertString(comp) << endl;
				//Converts the computer's choice to string
				
				if (isTie(choice, comp) == true)//If the game is a tie, display "It's a TIE!"
				{
					cout << "It's a TIE!\n" << endl;
				}
				else if (isPlayerWinner(choice, comp) == true)//If the player wins, display "You WIN!"
				{
					cout << "You WIN!\n" << endl;
				}
				//If the player neither wins nor is the game a tie, the player lost
				//Display "Sorry you LOSE."
				else if (isPlayerWinner(choice, comp) == false && isTie(choice, comp) == false)
				{
					cout << "Sorry you LOSE.\n" << endl;
				}
		}
		else if (menu == 'q')//If the player chooses 'q' to quit the game, the program ends.
		{
			return 0;
		}
		else if(menu != 'q' || menu != 'p')//if the player chooses neither 'p' nor 'q' display "invalid choice"
		{
			cout << "invalid choice" << endl;
		}
	} while (choice != 'q');//keep running the program if the choice is not 'q'
	system("pause");
}