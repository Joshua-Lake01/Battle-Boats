#pragma once
#pragma once
#include <windows.h>
#include "Pcengine.h"
using namespace std;
int z;
char skey;
string cordstr;
int cord[3] = { 0,0 };
bool sboatsleft[2][5];
bool f = true;
int tboatsleft[2];
int orsize[5][2];
int i;
int j;
bool vfire = false;
string y;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void Title() { // Prints title and adds boxing to it
	if (f == true){
		sboatsleft[2][0] = true;
		sboatsleft[2][1] = true;
		sboatsleft[2][2] = true;
		sboatsleft[2][3] = true;
		sboatsleft[2][4] = true;
		sboatsleft[1][0] = true;
		sboatsleft[1][1] = true;
		sboatsleft[1][2] = true;
		sboatsleft[1][3] = true;
		sboatsleft[1][4] = true;
		f = false;
		//cout << "HeRe";
	}
	int tally[6] = { NULL };
	int ttally[6] = { NULL };
	// Main title 
	cout << "\n                                                                                                                                                      ";
	cout << "\n                       ________  ________  _________  _________  ___       _______           ________  ________  ________  _________  ________      \n";
	cout << "                      |\\\   __  \\\|\\\   __  \\\|\\\___   ___\\\\\___   ___\\\\\  \\\     |\\\  ___ \\\         |\\\   __  \\\|\\\   __  \\\|\\\   __  \\\|\\\___   ___\\\\\   ____\\\     \n";
	cout << "                      \\\ \\\  \\\|\\\ /\\\ \\\  \\\|\\\  \\\|___ \\\  \\\_\\\|___ \\\  \\\_\\\ \\\  \\\    \\\ \\\   __/|        \\\ \\\  \\\|\\\ /\\\ \\\  \\\|\\\  \\\ \\\  \\\|\\\  \\\|___ \\\  \\\_\\\ \\\  \\\___|_    \n";
	cout << "                       \\\ \\\   __  \\\ \\\   __  \\\   \\\ \\\  \\\     \\\ \\\  \\\ \\\ \\\  \\\    \\\ \\\  \\\_|/__       \\\ \\\   __  \\\ \\\  \\\\\\\  \\\ \\\   __  \\\   \\\ \\\  \\\ \\\ \\\_____  \\\   \n";
	cout << "                        \\\ \\\  \\\|\\\  \\\ \\\  \\\ \\\  \\\   \\\ \\\  \\\     \\\ \\\  \\\ \\\ \\\  \\\____\\\ \\\  \\\_|\\\ \\\       \\\ \\\  \\\|\\\  \\\ \\\  \\\\\\\  \\\ \\\  \\\ \\\  \\\   \\\ \\\  \\\ \\\|____|\\\  \\\  \n";
	cout << "                         \\\ \\\_______\\\ \\\__\\\ \\\__\\\   \\\ \\\__\\\     \\\ \\\__\\\ \\\ \\\_______\\\ \\\_______\\\       \\\ \\\_______\\\ \\\_______\\\ \\\__\\\ \\\__\\\   \\\ \\\__\\\  ____\\\_\\\  \\\ \n";
	cout << "                          \\\|_______|\\\|__|\\\|__|    \\\|__|      \\\|__|  \\\|_______|\\\|_______|        \\\|_______|\\\|_______|\\\|__|\\\|__|    \\\|__| |\\\_________\\\ \n";
	cout << "                                                                                                                                        \\\|_________| \n";
	cout << "                                                                                                                                                      ";
	cout << endl;
	for (int y = 1; y <= 8; y++) {
		for (int x = 1; x <= 8; x++) {
			if (comp_board[x - 1][y - 1] != 0 and comp_board[x - 1][y - 1] != 9 and comp_board[x - 1][y - 1] != 8) {
				tally[0]--;
				//cout << "Tally: " << tally[0];
				//Sleep(5000);
			}
			if (comp_board[x - 1][y - 1] == 1) {
				tally[1]--;
			}
			else if (comp_board[x - 1][y - 1] == 2) {
				tally[2]--;
			}
			else if (comp_board[x - 1][y - 1] == 3) {
				tally[3]--;
			}
			else if (comp_board[x - 1][y - 1] == 4) {
				tally[4]--;
			}
			else if (comp_board[x - 1][y - 1] == 5) {
				tally[5]--;
			}
		}
	}
	if (tally[1] == 0) {
		sboatsleft[2][0] = false;
		//cout << "Here|";
	}
	if (tally[2] == 0) {
		sboatsleft[2][1] = false;
	}
	if (tally[3] == 0) {
		sboatsleft[2][2] = false;
	}
	if (tally[4] == 0) {
		sboatsleft[2][3] = false;
	}
	if (tally[5] == 0) {
		sboatsleft[2][4] = false;
	}

	for (int y = 1; y <= 8; y++) {
		for (int x = 1; x <= 8; x++) {
			if (local_board[x - 1][y - 1] != 0 and local_board[x - 1][y - 1] != 9 and local_board[x - 1][y - 1] != 8) {
				ttally[0]--;
				//cout << "Tally: " << tally[0];
				//Sleep(5000);
			}
			if (local_board[x - 1][y - 1] == 1) {
				ttally[1]--;
			}
			else if (local_board[x - 1][y - 1] == 2) {
				ttally[2]--;
			}
			else if (local_board[x - 1][y - 1] == 3) {
				ttally[3]--;
			}
			else if (local_board[x - 1][y - 1] == 4) {
				ttally[4]--;
			}
			else if (local_board[x - 1][y - 1] == 5) {
				ttally[5]--;
			}
		}
	}
	if (ttally[1] == 0) {
		sboatsleft[1][0] = false;
		//cout << "Here|";
	}
	if (ttally[2] == 0) {
		sboatsleft[1][1] = false;
	}
	if (ttally[3] == 0) {
		sboatsleft[1][2] = false;
	}
	if (ttally[4] == 0) {
		sboatsleft[1][3] = false;
	}
	if (ttally[5] == 0) {
		sboatsleft[1][4] = false;
	}





	cout << endl;
	cout << "                                                 " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << "                                                 "  << (char)186 << "Player Boats Left: " << "            " << (char)186 << "Computer Boats Left: " << "          " << (char)186 << endl;
	cout << "                                                 " << (char)186 << "1. " << sboatsleft[1][0] << "                           " << (char)186 << "1. " << sboatsleft[2][0] << "                           " << (char)186 << endl;
	cout << "                                                 "  << (char)186 << "2. " << sboatsleft[1][1] << "                           " << (char)186 << "2. " << sboatsleft[2][1] << "                           " << (char)186 << endl;
	cout << "                                                 "  << (char)186 << "3. " << sboatsleft[1][2] << "                           " << (char)186 << "3. " << sboatsleft[2][2] << "                           " << (char)186 << endl;
	cout << "                                                 "  << (char)186 << "4. " << sboatsleft[1][3] << "                           " << (char)186 << "4. " << sboatsleft[2][3] << "                           " << (char)186 << endl;
	cout << "                                                 "  << (char)186 << "5. " << sboatsleft[1][4] << "                           " << (char)186 << "5. " << sboatsleft[2][4] << "                           " << (char)186 << endl;
	cout << "                                                 "  <<(char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 <<(char)205 << (char)205 << (char)205 <<  (char)205<<(char)205 << (char)205 << (char)188 << endl;


	cout << endl;
	cout << "                                              Local Player                                                   Computer                         \n";
	cout << "                                    | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |                             | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |            \n";
	//cout << endl; 
	//cout << (char)219 << " "; //my custom asccii characters, done through resources
	//cout << (char)178 << " ";//my custom asccii characters, done through resources
	//cout << (char)177 << " ";//my custom asccii characters, done through resources
	//cout << (char)176 << " ";//my custom asccii characters, done through resources
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void y_cord() { //in void function to save space (omly called in r_boards)
	if (z == 1) { //sets board side cords (y)
		cout << "1 ";
	}
	else if (z == 2) {
		cout << "2 ";
	}
	else if (z == 3) {

		cout << "3 ";
	}
	else if (z == 4) {
		cout << "4 ";
	}
	else if (z == 5) {
		cout << "5 ";
	}
	else if (z == 6) {
		cout << "6 ";
	}
	else if (z == 7) {
		cout << "7 ";
	}
	else if (z == 8) {
		cout << "8 ";
	}

}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void r_boards() {

	for (z = 1; z <= 8; z++) { //lays board depending on vaule within 7x7 matrix
		cout << "                                  ";

		y_cord();

		/*switch (y) {
		case 1:
			cout << "A ";
		case 2:
			cout << "B ";
		case 3:
			cout << "C ";
		case 4:
			cout << "D ";
		case 5:
			cout << "E ";
		case 6:
			cout << "F ";
		case 7:
			cout << "G ";

		}*/
		for (int x = 1; x <= 8; x++) { // if vaule is that it will make a picture / text to that point in the matrix for local player
			if (local_board[x - 1][z - 1] == 0) {
				cout << "| " << (char)248 << " ";

			}
			else if (local_board[x - 1][z - 1] == 1) {
				cout << "| " << (char)219 << " ";
			}
			else if (local_board[x - 1][z - 1] == 2) {
				cout << "| " << (char)240 << " ";

			}
			else if (local_board[x - 1][z - 1] == 3) {
				cout << "| " << (char)177 << " ";

			}
			else if (local_board[x - 1][z - 1] == 4) {
				cout << "| " << (char)176 << " ";

			}
			else if (local_board[x - 1][z - 1] == 5) {
				cout << "| " << (char)178 << " ";

			}
			else if (local_board[x - 1][z - 1] == 8) {
				cout << "| X" << " ";

			}
			else if (local_board[x - 1][z - 1] == 9) {
				cout << "| !" << " ";

			}
			//if (local_board[7][7] == 0 and z == 7 and x == 7) {
				//cout << "| * ";

			//}

		}

		cout << "|                           "; //space filler

		y_cord();

		for (int x = 1; x <= 8; x++) {  // if vaule is that it will make a picture / text to that point in the matrix for computer
			if (compm_board[x - 1][z - 1] == 0) {
				cout << "| " << (char)248 << " ";

			}
			else if (compm_board[x - 1][z - 1] == 1) {
				cout << "| " << (char)219 << " ";
			}
			else if (compm_board[x - 1][z - 1] == 2) {
				cout << "| " << (char)240 << " ";

			}
			else if (compm_board[x - 1][z - 1] == 3) {
				cout << "| " << (char)177 << " ";

			}
			else if (compm_board[x - 1][z - 1] == 4) {
				cout << "| " << (char)176 << " ";

			}
			else if (compm_board[x - 1][z - 1] == 5) {
				cout << "| " << (char)178 << " ";

			}
			else if (compm_board[x - 1][z - 1] == 8) {
				cout << "| X"  << " ";

			}
			else if (compm_board[x - 1][z - 1] == 9) {
				cout << "| !" << " ";

			}
		}
		cout << "|";//space filler
		cout << "            " << endl; //space filler
	}

	cout << "                                                                                                                                                      ";
	cout << endl;
	//cutline();
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void opt_log() {  // make decision where to hit
	vfire = false;
	cout << "\n                                                                                 \n";
	cout << "                                                                                  Attack                                \n";
	/*if ((orsize[comp_board[cord[1] - 1][cord[2] - 1]][1] == 1) and (comp_board[ccord[1] - 1][ccord[2] - 1] == 9 and comp_board[ccord[1] - 1][ccord[2]] == 9 and comp_board[ccord[1] - 1][ccord[2] + 1] == 9 and comp_board[ccord[1] - 1][ccord[2] + 2] == 9 and comp_board[ccord[1] - 1][ccord[2] + 3] == 9)) {
		sboatsleft[1][1] = false;
	}
	else if ((orsize[comp_board[cord[1] - 1][cord[2] - 1]][1] == 2) and (comp_board[ccord[1] - 1][ccord[2] - 1] == 9 and comp_board[ccord[1]][ccord[2]-1] == 9 and comp_board[ccord[1] + 1][ccord[2] - 1] == 9)) {
		sboatsleft[2][1] = false;
	}
	else if ((orsize[comp_board[cord[1] - 1][cord[2] - 1]][1] == 3) and (comp_board[ccord[1] - 1][ccord[2] - 1] == 9 and comp_board[ccord[1] - 1][ccord[2]] == 9 and comp_board[ccord[1] - 1][ccord[2] + 1] == 9 and comp_board[ccord[1] - 1][ccord[2] + 2] == 9)) {
		sboatsleft[3][1] = false;
	}
	else if ((orsize[comp_board[cord[1] - 1][cord[2] - 1]][1] == 4) and (comp_board[ccord[1] - 1][ccord[2] - 1] == 9 and comp_board[ccord[1] - 1][ccord[2]] == 9 and comp_board[ccord[1] - 1][ccord[2] + 1] == 9)) {
		sboatsleft[4][1] = false;
	}
	else if ((orsize[comp_board[cord[1] - 1][cord[2] - 1]][1] == 5) and (comp_board[ccord[1] - 1][ccord[2] - 1] == 9 and comp_board[ccord[1] - 1][ccord[2]] == 9)) {
		sboatsleft[5][1] = false;
	}*/
	//cout << " | " << " Last Hit at " << cord[1] << ", " << cord[2];

	

	if (strike_turn == 1) {
		strike_turn = 0;
int tally[6] = {NULL};
		for (int y = 1; y <= 8; y++) { //itterates across each square of the board
	  for(int x=1;x<=8;x++){
		  if (comp_board[x - 1][y - 1] != 0 and comp_board[x - 1][y - 1] != 9 and comp_board[x - 1][y - 1] != 8) { // tallies up the total ships left
			  tally[0]--;
			  //cout << "Tally: " << tally[0];
			  //Sleep(5000);
		  }
		  if (comp_board[x - 1][y - 1] == 1) {
			  tally[1]--;
		  }
		  else if (comp_board[x - 1][y - 1] == 2) {
			  tally[2]--;
		  }
		  else if (comp_board[x - 1][y - 1] == 3) {
			  tally[3]--;
		  }
		  else if (comp_board[x - 1][y - 1] == 4) {
			  tally[4]--;
		  }
		  else if (comp_board[x - 1][y - 1] == 5) {
			  tally[5]--;
		  }
      }
	}
	if (tally[1] == 0) {
		sboatsleft[2][0] = false;
		//cout << "Here|";
	}
	if (tally[2] == 0) {
		sboatsleft[2][1] = false;
	}
	if (tally[3] == 0) {
		sboatsleft[2][2] = false;
	}
	if (tally[4] == 0) {
		sboatsleft[2][3] = false;
	}
	if (tally[5] == 0) {
		sboatsleft[2][4] = false;
	}
		//cout << "Tally: " << tally[1];
		if ((tally[0]) == 0) {
			winner = 0;
			exit_menu();
		}
		vfire == false;
		while (vfire == false) { //allow for input of fire locations
			cout << "                   PLAYER: What X Would You Like To Fire At Next? ";
	        cin >> cord[1];
	        cout << "                   PLAYER: What Y Would You Like To Fire At Next? ";
			cin >> cord[2];
		    cout << "                   PLAYER: Firing At " << cord[1] << "," << cord[2] << "\n";
		if (comp_board[cord[1] - 1][cord[2] - 1] == 9 or comp_board[cord[1] - 1][cord[2] - 1] == 8) {
			cout << "                   PLAYER: Already Fired Here Enter New Cords\n"; //already hit detection ^
			Sleep(1000);
		}
		else if (comp_board[cord[1] - 1][cord[2] - 1] != 0) {
			cout << "                   PLAYER: DIRECT HIT AT: " << cord[1] << "," << cord[2] << "\n"; //will diplay and set value to an X if hit. Just done within a context dictionary
			orsize[comp_board[cord[1] - 1][cord[2] - 1]][1] = comp_board[cord[1] - 1][cord[2] - 1];
			compm_board[cord[1]-1][cord[2]-1] =9;
			comp_board[cord[1] - 1][cord[2] - 1] = 9;
			vfire = true;
			Sleep(1000);
		}
		else {
			cout <<"                   PLAYER: Miss" << "\n";
			orsize[comp_board[cord[1] - 1][cord[2] - 1]][1] = comp_board[cord[1] - 1][cord[2] - 1]; //will diplay a miss if not hit a boat
			compm_board[cord[1] - 1][cord[2] - 1] = 8;
			comp_board[cord[1] - 1][cord[2] - 1] = 8;
			vfire = true;
			Sleep(1000);
			//cout << "Here";
		}
		//cout << "Here|";
		}
		
		
	}
	else if(strike_turn == 0) {
		pc_decision();
	}
	else {
		cout << "FATAL_ERROR (CODE:FAILEDPLAYERSWITCHx01)"; //reuturns fatal error
		for (int x = 1; x <= 10; x++) {
			Sleep(200);
			cout << " .";
		}
		//exit(opt_start);
	
	}
	//cout << "Here!";
	

}


