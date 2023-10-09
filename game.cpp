/*
PIC 10B 1A, Homework 1
Purpose: Tic-tac-toe game
Author: Victor He
Date: 3/21/2022
*/

#include "game.h"
#include <iomanip>

game::game(person* a, person* b)
{
	player1 = a;
	player2 = b;
	cordx1 = 0;
	cordx2 = 0;
	cordo1 = 0;
	cordo2 = 0;
	line1 = { "    1        2     3  ","         |       |        ", "1        |       |        "};
	line2 = { "  _______|_______|____","         |       |        ", "2        |       |        "};
	line3 = { "  _______|_______|____","         |       |        ", "3        |       |        ", "         |       |"};
	tlx = false, tmx = false, trx = false, mlx = false, mmx = false, mrx = false, blx = false, bmx = false, brx = false;
	tlo = false, tmo = false, tro = false, mlo = false, mmo = false, mro = false, blo = false, bmo = false, bro = false;
	turns = 0;
}

void game::reset()
{
	line1 = { "    1        2     3  ","         |       |        ", "1        |       |        " };
	line2 = { "  _______|_______|____","         |       |        ", "2        |       |        " };
	line3 = { "  _______|_______|____","         |       |        ", "3        |       |        ", "         |       |" };
	tlx = false, tmx = false, trx = false, mlx = false, mmx = false, mrx = false, blx = false, bmx = false, brx = false;
	tlo = false, tmo = false, tro = false, mlo = false, mmo = false, mro = false, blo = false, bmo = false, bro = false;
	turns = 0;
}

void game::markx(const int a, const int b)
{
	//assigns bools representing X coordinates true for marked. if already marked by x or o, then redos turn
	if (a == 1)
	{
		if (b == 1)
		{
			if (tlx == true || tlo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				xturn();
			}
			else
			{
				line1[2][3] = 'X';
				tlx = true;
			}
		}
		else if (b == 2)
		{
			if (mlx == true || mlo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				xturn();
			}
			else
			{
				line2[2][3] = 'X';
				mlx = true;
			}
		}
		else if (b == 3)
		{
			if (blx == true || blo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				xturn();
			}
			else
			{
				line3[2][3] = 'X';
				blx = true;
			}
		}
	}
	else if (a == 2)
	{
		if (b == 1)
		{
			if (tmx == true || tmo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				xturn();
			}
			else
			{
				line1[2][12] = 'X';
				tmx = true;
			}
		}
		else if (b == 2)
		{
			if (mmx == true || mmo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				xturn();
			}
			else
			{
				line2[2][12] = 'X';
				mmx = true;
			}
		}
		else if (b == 3)
		{
			if (bmx == true || bmo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				xturn();
			}
			else
			{
				line3[2][12] = 'X';
				bmx = true;
			}
		}
	}
	else if (a == 3)
	{
		if (b == 1)
		{
			if (trx == true || tro == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				xturn();
			}
			else
			{
				line1[2][20] = 'X';
				trx = true;
			}
		}
		else if (b == 2)
		{
			if (mrx == true || mro == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				xturn();
			}
			else
			{
				line2[2][20] = 'X';
				mrx = true;
			}
		}
		else if (b == 3)
		{
			if (brx == true || bro == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				xturn();
			}
			else
			{
				line3[2][20] = 'X';
				brx = true;
			}
		}
	}
}

void game::marko(const int a, const int b)
{
	//assigns bools representing O coordinates true for marked. if already marked by x or o, then redos turn
	if (a == 1)
	{
		if (b == 1)
		{
			if (tlx == true || tlo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				oturn();
			}
			else
			{
				line1[2][3] = 'O';
				tlo = true;
			}
		}
		else if (b == 2)
		{
			if (mlx == true || mlo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				oturn();
			}
			else
			{
				line2[2][3] = 'O';
				mlo = true;
			}
		}
		else if (b == 3)
		{
			if (blx == true || blo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				oturn();
			}
			else
			{
				line3[2][3] = 'O';
				blo = true;
			}
		}
	}
	else if (a == 2)
	{
		if (b == 1)
		{
			if (tmx == true || tmo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				oturn();
			}
			else
			{
				line1[2][12] = 'O';
				tmo = true;
			}
		}
		else if (b == 2)
		{
			if (mmx == true || mmo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				oturn();
			}
			else
			{
				line2[2][12] = 'O';
				mmo = true;
			}
		}
		else if (b == 3)
		{
			if (bmx == true || bmo == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				oturn();
			}
			else
			{
				line3[2][12] = 'O';
				bmo = true;
			}
		}
	}
	else if (a == 3)
	{
		if (b == 1)
		{
			if (trx == true || tro == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				oturn();
			}
			else 
			{
				line1[2][20] = 'O';
				tro = true;
			}
		}
		else if (b == 2)
		{
			if (mrx == true || mro == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				oturn();
			}
			else
			{
				line2[2][20] = 'O';
				mro = true;
			}
		}
		else if (b == 3)
		{
			if (brx == true || bro == true)
			{
				std::cout << "Coordinate already taken. " << std::endl;
				oturn();
			}
			else
			{
				line3[2][20] = 'O';
				bro = true;
			}
			
		}
	}
}

void game::print()
{
	for (int i = 0; i < line1.size(); i++)
	{
		for (int j = 0; j < line1[i].size(); j++)
		{
			std::cout << line1[i][j];
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < line2.size(); i++)
	{
		for (int j = 0; j < line2[i].size(); j++)
		{
			std::cout << line2[i][j];
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < line3.size(); i++)
	{
		for (int j = 0; j < line3[i].size(); j++)
		{
			std::cout << line3[i][j];
		}
		std::cout << std::endl;
	}
}

void game::xturn()
{
	std::cout << std::endl << player1->get_name() << " (X) Mark Location: ";
	std::cin >> cordx1 >> cordx2;
	//checks for correct inputs
	while (std::cin.fail() || cordx1 < 1 || cordx1 > 3 || cordx2 < 1 || cordx2 > 3)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Enter valid coordinates: ";
		std::cin >> cordx1 >> cordx2;
	}
	markx(cordx1, cordx2);
}

void game::oturn()
{
	std::cout << std::endl << player2->get_name() << " (O) Mark Location: ";
	std::cin >> cordo1 >> cordo2;
	//checks for correct inputs
	while (std::cin.fail() || cordo1 < 1 || cordo1 > 3 || cordo2 < 1 || cordo2 > 3)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Enter valid coordinates: ";
		std::cin >> cordo1 >> cordo2;
	}

	marko(cordo1, cordo2);
}

bool game::winconx()
{
	//top horizontal
	if (tlx == true && tmx == true && trx == true)
	{
		return true;
	}
	//middle horizontal
	else if (mlx == true && mmx == true && mrx == true)
	{
		return true;
	}
	//bottom horizontal
	else if (blx == true && bmx == true && brx == true)
	{
		return true;
	}
	//left vertical
	else if (tlx == true && mlx == true && blx == true)
	{
		return true;
	}
	//middle vertical
	else if (tmx == true && mmx == true && bmx == true)
	{
		return true;
	}
	//right vertical
	else if (trx == true && mrx == true && brx == true)
	{
		return true;
	}
	//left to right horizontal
	else if (tlx == true && mmx == true && brx == true)
	{
		return true;
	}
	//right to left horizontal
	else if (trx == true && mmx == true && blx == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool game::wincono()
{
	//top horizontal
	if (tlo == true && tmo == true && tro == true)
	{
		return true;
	}
	//middle horizontal
	else if (mlo == true && mmo == true && mro == true)
	{
		return true;
	}
	//bottom horizontal
	else if (blo == true && bmo == true && bro == true)
	{
		return true;
	}
	//left vertical
	else if (tlo == true && mlo == true && blo == true)
	{
		return true;
	}
	//middle vertical
	else if (tmo == true && mmo == true && bmo == true)
	{
		return true;
	}
	//right vertical
	else if (tro == true && mro == true && bro == true)
	{
		return true;
	}
	//left to right horizontal
	else if (tlo == true && mmo == true && bro == true)
	{
		return true;
	}
	//right to left horizontal
	else if (tro == true && mmo == true && blo == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void game::round()
{
	print();

	while (true)
	{
		xturn();
		print();
		turns++;
		//checks if player1 has won after player1's turn
		if (winconx() == true)
		{
			std::cout << player1->get_name() << " wins this round" << std::endl;
			player1->add_score();
			std::cout << player1->get_name() << " : " << player1->get_score() << std::endl;
			std::cout << player2->get_name() << " : " << player2->get_score() << std::endl << std::endl;
			reset();
			break;
		}
		//if 9 turns passed and neither player has won, then tie round
		if (turns == 9)
		{
			std::cout << "Tie Round!" << std::endl;
			std::cout << player1->get_name() << " : " << player1->get_score() << std::endl;
			std::cout << player2->get_name() << " : " << player2->get_score() << std::endl << std::endl;
			reset();
			break;
		}
		oturn();
		print();
		turns++;
		//checks if player2 has won after player2's turn
		if (wincono() == true)
		{
			std::cout << player2->get_name() << " wins this round" << std::endl;
			player2->add_score();
			std::cout << player1->get_name() << " : " << player1->get_score() << std::endl;
			std::cout << player2->get_name() << " : " << player2->get_score() << std::endl << std::endl;
			reset();
			break;
		}
	}

}