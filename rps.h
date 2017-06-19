//Arne Zargarian
//Lab 4
//CSIS 135

#pragma once
#ifndef RPS_H;
#define RPS_H

#include <string>

using std::string;

const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;

//gets all the methods from rps.cpp
int getComputerChoice();
int getPlayerChoice();
bool isTie(int, int);
bool isPlayerWinner(int, int);
string convertString(int);

#endif RPS_H;