/*
PIC 10B 1A, Homework 1
Purpose: Tic-tac-toe game
Author: Victor He
Date: 3/21/2022
*/

#ifndef GAME_H
#define GAME_H
#include <vector>
#include <string>
#include "person.h"

class game
{
	public:
		/*
			construcs a game with player1 a and player2 b
			@param a: person pointer which player1 is assigned
			@param b: person pointer which player2 is assigned
		*/
		game(person* a, person* b);

		/*
			runs turns for player1 and player2 until a player wins or until a tie
		*/
		void round();
	private:
		person* player1;
		person* player2;
		std::vector<std::string> line1;
		std::vector<std::string> line2;
		std::vector<std::string> line3;
		int cordx1, cordx2, cordo1, cordo2;

		/*
			marks an X at coordinates a, b 
		*/
		void markx(const int a, const int b);

		/*
			marks an O at coordinates a, b
		*/
		void marko(const int a, const int b);

		/*
			prints the grid
		*/
		void print();

		/*
			returns true if player1 has won, false if not
		*/
		bool winconx();

		/*
			returns true if player2 has won, false if not
		*/
		bool wincono();

		/*
			bools representing each coordinate X in the graph: true if marked, false if not
		*/
		bool tlx, tmx, trx, mlx, mmx, mrx, blx, bmx, brx;

		/*
			bools representing each coordinate O in the graph: true if marked, false if not
		*/
		bool tlo, tmo, tro, mlo, mmo, mro, blo, bmo, bro;

		/*
			resets the grid and bools after round is completed
		*/
		void reset();

		/*
			runs a single turn for player1
		*/
		void xturn();

		/*
			runs a single turn for player2
		*/
		void oturn();

		/*
			keeps track of how many total turns have passed
		*/
		int turns;
};

#endif