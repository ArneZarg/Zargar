//Arne Zargarian
//CSIS 135
//Lab 4

#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>
#include <string>
#include "rps.h"
using namespace std;

string convertString(int choice)//convert the choices of the player or computer to string
{
	string str;//create the str variable
	const int ROCK = 1;//Define all the cases
	const int PAPER = 2;
	const int SCISSORS = 3;
	switch (choice)//if the choice is 1, it makes the string "Rock", if 2 it becomes "Paper", if 3, "Scissors"
	{
	case ROCK:
		str = "Rock";
		break;
	case PAPER:
		str = "Paper";
		break;
	case SCISSORS:
		str = "Scissors";
		break;
	}
	return str;
}
int getComputerChoice() {//the computer choice is selected randomly b/w 1 and 3 (including 1 and 3)
	int choose;
	srand(time(NULL));
	choose = rand() % 3 + 1;
	return choose;
}
int getPlayerChoice() {//display the menu and get the input from the user
	cout << "Rock, Paper, or Scissors?" << endl;
	cout << "1) Rock" << endl;
	cout << "2) Paper" << endl;
	cout << "3) Scissors" << endl;
	cout << "Please enter your choice" << endl;
	int choice;
	cin >> choice;
	return choice;
}
bool isTie(int player, int comp) {//determines the tie
	if (player == comp)//if the player choice and the computer choice is the same, it's a tie.
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isPlayerWinner(int player, int comp)//to determine if the player is the winner
{
	if (player == 1 && comp == 3)//if the player picks rock(1) and the computer picks 3(scissors)
	{
		return true;//the player wins
	}
	else if (player == 3 && comp == 2)//if the player picks scissors and the computer picks paper
	{
		return true;//the player wins
	}
	else if (player == 2 && comp == 1)//if the player picks paper and the computer picks rock
	{
		return true;//the player wins
	}
	else//anything else means
	{
		return false;//the player loses
	}
}