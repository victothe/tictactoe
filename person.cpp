/*
PIC 10B 1A, Homework 1
Purpose: Tic-tac-toe game
Author: Victor He
Date: 3/21/2022
*/

#include "person.h"

person::person(std::string n)
{
	name = n;
	score = 0;
}

int person::get_score() const
{
	return score;
}

void person::add_score()
{
	score++;
}

std::string person::get_name() const
{
	return name;
}