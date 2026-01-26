#include <iostream>
#include <cstdlib>
#include <ctime>

#define CPU 0
#define Player 1
using namespace std;
// please use snake case (eg: snake_case)
void print_board()
{
	char board[3][3] = {
	{' ', ' ', ' '},
	{' ', ' ', ' '},
	{' ', ' ', ' '}
	};

	cout << "  |  |  " << "\n";
	cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
	cout << "__|__|__" << "\n";
	cout << "  |  |  " << "\n";
	cout << " " << board[1][0] << " | " << board[1][0] << " | " << board[1][2] << "\n";
	cout << "__|__|__" << "\n";
	cout << "  |  |  " << "\n";
	cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
	cout << "  |  |  " << "\n";

}

int flip_coin()
{
	if (rand() % 2 == 0) return CPU;
	else return Player;
}

int main()
{
	int choice;
	int flip_coin();

	cout << "Hello! Welcome to Tic Tac Toe!\n"; // main menu
	cout << "\n--- Main Menu --- \n";
	cout << "\n1. Play Tic Tac Toe\n";
	cout << "0. Exit Game\n";
	cout << "\nSelect (0-1): ";
	cin >> choice;

	if (choice < 0 || choice > 1) // loop when player inputs invalid value
	{
		do {
			cout << "Please enter a valid value (0-1): ";
			cin >> choice;
		} while (choice < 0 || choice > 1);
	}


	switch (choice) {
	case 0:
		cout << "\nGoodbye!\n";
		exit(0); // program ends
	case 1:
		srand((unsigned int)time(NULL)); // coin flip that decides who starts first
		if (flip_coin() == CPU) cout << "\nThe CPU will start first." << "\n";
		else cout << "\nThe Player will start first." << "\n";
		break;

	}

	return 0;
}
