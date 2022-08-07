bool moved = true;
int local_board[8][8];
int comp_board[8][8];
int compm_board[8][8];
bool strike_turn = 1;
bool boats_unselected = false;
bool winner = 0;
#include <random>
#include<iostream>
#include<conio.h>
#include<string.h>
#include"LocalEngine.h"
#include"Pcengine.h"
#include"RenderMenu.h"
#include <io.h>
#include <fcntl.h>
#include <stdlib.h>
#include "windows.h"
#include <vector>
#include "GUIRender.h"

using namespace std;


int main() {
	system("color 70");
start_screen(); //calls menu screen
	system("cls");

	while (usedboats <= 6) {
		choose_boatpos(); //allows player to choose pos
		system("CLS");
		//cout << usedboats;
	}
    pc_pos(); //sets pc locations
	b_menu(); //battle menu cause it looks cool
	system("color 70");
	while (true) {
			system("CLS");
			LocalDecisonEngine(); //main menu and allows for user to interact with the bot and board (bunch of collected functions)
	}
}


