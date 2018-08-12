#include "Game.h"
#include <iostream>
#include "Play.h"

int Game::MenuGame()
{
	std::cout << ":Game Started:" << std::endl;
	std::cout << ":Express, Loaded:" << std::endl;
	std::cout << "- 0) Exit" << std::endl;
	std::cout << "- 1) Play" << std::endl;
	std::cout << "- 2) Character" << std::endl;
	std::cout << "- 3) Inventory" << std::endl;
	std::cout << "- 4) Tutorial" << std::endl;

	int choice;
	std::cin >> choice;

	switch (choice) {
	case 0:
		exit(0);
		break;
	case 1:
		StartGame();
		break;
	case 2:
		DisplayCharacter();
		break;
	case 3:
		break;
	case 4:
		break;
	}

	return 0;
}

int Game::StartGame() {
	Play playOBJ;
	playOBJ.PlayGame();
	return 0;
}

int Game::DisplayCharacter() {
	Play playOBJ;
	playOBJ.PlayCharacter();
	return 0;
}