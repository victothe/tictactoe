#include<iostream>
#include<string>
#include "person.h"
#include "game.h"
#include <iomanip>
using namespace std;

int main()
{
	int games;
	string p1, p2;

	cout << "Number of games: ";
	cin >> games;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Enter valid number: ";
		cin >> games;
	}
	cout << "Player 1 Name = ";
	cin >> p1;
	cout << "Player 2 Name = ";
	cin >> p2;

	//initializes person first with param p1 
	person first(p1);
	//initializes person second with param p2
	person second(p2);

	//assigns person pointer player1 to the address of person first
	person* player1 = &first;
	//assigns person pointer player2 to the address of person second
	person* player2 = &second;

	//initializes game tictactoe with player pointer params player1, player2
	game tictactoe(player1, player2);
	
	cout << setw(15) << "Tic Tac Toe" << endl;
	cout << player1->get_name() << " (X) - " << player2->get_name() << " (O)" << endl << endl;

	//runs rounds for however many int games
	for (int i = 0; i < games; i++)
	{
		tictactoe.round();
	}

	//if player1's score is greater than player2's after playing, then player1 wins
	if (player1->get_score() > player2->get_score())
	{
		cout << "Congratulations " << player1->get_name() << ". You Won!" << endl;
	}
	//if player2's score is greater than player2's after playing, then player2 wins
	else if (player1->get_score() < player2->get_score())
	{
		cout << "Congratulations " << player2->get_name() << ". You Won!" << endl;
	}
	//if both players' scores are equal, then tie game
	else if (player1->get_score() == player2->get_score())
	{
		cout << "Tie Game!" << endl;
	}


	return 0;
}