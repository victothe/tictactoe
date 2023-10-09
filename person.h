/*
PIC 10B 1A, Homework 1
Purpose: Tic-tac-toe game
Author: Victor He
Date: 3/21/2022
*/

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
class person
{
	public:
		/*
			constructs a person with name n
			@param n: string which name is assigned
		*/
		person(std::string n);

		/*
			increases persons's score by one
		*/
		void add_score();

		/*
			returns persons's score 
		*/
		int get_score() const;

		/*
			returns person's name
		*/
		std::string get_name() const;
	private:
		int score;
		std::string name;
};


#endif