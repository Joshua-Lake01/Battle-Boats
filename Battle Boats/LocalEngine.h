#pragma once
#include"RenderMenu.h"
#include <windows.h>
int usedboats = 0;
bool validboat = false;
int boatsize[6];
bool boatsleft[5] = { true,true,true,true,true };
bool vboatnum = false;
int boatnum;
bool first = false;
using namespace std;
void lay_pboard() {


	cout << "    | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |\n";
	for (z = 1; z <= 8; z++) { //lays board depending on vaule within 7x7 matrix
		cout << "  ";
		y_cord();
		for (int x = 1; x <= 8; x++) { // if vaule is that it will make a picture / text to that point in the matrix for local player
			if (local_board[x - 1][z - 1] == 0) {
				cout << "| * ";

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
		}
		cout << "|";
		cout << endl;
	}
}

/*void boatrange() { // Scrapped Idea For Detecting Boat Range
	boatsize[1] = 5;
	boatsize[2] = 3;
	boatsize[3] = 4;
	boatsize[4] = 3;
	boatsize[5] = 2;
	cout << boatnum;
	if (boatnum = NULL) {
	if (cord[2] + boatsize[boatnum] > 8) {
		cout << "Boat Out Of Range! Enter New Cords\n";
	}
	else {
		if (boatnum = 1) {
		local_board[cord[1] - 1][cord[2] - 1] = 1;
		local_board[cord[1] - 1][cord[2]] = 1;
		local_board[cord[1] - 1][cord[2] + 1] = 1;
		local_board[cord[1] - 1][cord[2] + 2] = 1;
		local_board[cord[1] - 1][cord[2] + 3] = 1;

		}
		else if (boatnum = 3) {
			local_board[cord[1] - 1][cord[2] - 1] = 3;
			local_board[cord[1] - 1][cord[2]] = 3;
			local_board[cord[1] - 1][cord[2] + 1] = 3;
			local_board[cord[1] - 1][cord[2] + 2] = 3;

		}
		else if (boatnum = 4) {
			local_board[cord[1] - 1][cord[2] - 1] = 4;
			local_board[cord[1] - 1][cord[2]] = 4;
			local_board[cord[1] - 1][cord[2] + 1] = 4;

		}
		else if (boatnum = 5) {
			local_board[cord[1] - 1][cord[2] - 1] = 5;
			local_board[cord[1] - 1][cord[2]] = 5;

		}




validboat = true;
	}



	}
	else if (boatnum = 2){
		if (cord[1] + boatsize[boatnum] > 8) {
			cout << "Boat Out Of Range! Enter New Cords\n";
		}
		else {
			local_board[cord[1] - 1][cord[2]] = 2;
			local_board[cord[1]][cord[2]] = 2;
			local_board[cord[1] +1][cord[2]] = 2;

			validboat = true;
		}

	}

	//if (boatnum = 2) {
		//if (cord[1] - boatsize[boatnum > 8]) {
		//	cout << "Boat Out Of Range! Enter New Cords\n";
		//}
		//else {
			//local_board[cord[1] - 1][cord[2]] = 2;
			//local_board[cord[1]][cord[2]] = 2;
			//local_board[cord[1] + 1][cord[2]] = 2;

		///}

	//}
	//else {



	//}




}*/ 


/*void numselect() {
	int boatnum;
		boatnum = NULL;
	while (vboatnum == false) {
		
		cout << "What Boat Would You Like To Place? ";
		cin >> boatnum;
		if (!(int)boatnum) {
			cout << "££";
			validboat = true;
			Sleep(1000);

		}
		if (boatsleft[4] == false or boatsleft[3] == false or boatsleft[2] == false or boatsleft[0] == false) {
			cout << "Boat Already In Use! Select Another Boat\n";
			return;
		}
		else if (boatnum > 5) {
			cout << "Invalid Boat Number. Choose Number Within Range 1-5\n";
			Sleep(1000);
			return;
		}
		else {
			vboatnum = true;

		}
	}
}*/
void choose_boatpos() { //allows the user to enter the desired boat locations
	vboatnum = false;
	validboat = false;
	cout << "Boats To Choose: " << "\n";
	if (boatsleft[0] == true) {
		cout << "1. " << (char)219 << " \n";
		cout << "   " << (char)219 << " \n";
		cout << "   " << (char)219 << " \n";
		cout << "   " << (char)219 << " \n";
		cout << "   " << (char)219 << " \n";

	}
	if (boatsleft[1] == true) {
		cout << "\n2. " << (char)240 << " " << (char)240 << " " << (char)240 << " " << " \n";

	}
	if (boatsleft[2] == true) {
		cout << "\n3. " << (char)177 << " \n";
		cout << "   " << (char)177 << " \n";
		cout << "   " << (char)177 << " \n";
		cout << "   " << (char)177 << " \n";

	}
	if (boatsleft[3] == true) {
		cout << "\n4. " << (char)176 << " \n";
		cout << "   " << (char)176 << " \n";
		cout << "   " << (char)176 << " \n";

	}
	if (boatsleft[4] == true) {

		cout << "\n5. " << (char)178 << " \n";
		cout << "   " << (char)178 << " \n";
	}

	cout << "Choose Positions Of Boats From Top End: \n" << endl;
	lay_pboard();
	cout << "Boats Left: ";
	for (int i = 1; i <= 5; i++) {
		if (boatsleft[i - 1] == true) {
			cout << " " << i;
		}

	}
	cout << endl;
	
	
	while (validboat == false) {
		//cout << validboat << " ";
	//	Sleep(2000);
		while(vboatnum == false) {
			cout << "What Boat Would You Like To Place? ";
			cin >> boatnum;
			
			//if (!(int)boatnum) {
				//cout << "££";
				//validboat = true;
				//Sleep(1000);

			//}
			if (boatsleft[boatnum-1] == false) {
				cout << "Boat Already In Use! Select Another Boat\n";
				
			}
			else if (boatnum > 5) {
				cout << "Invalid Boat Number. Choose Number Within Range 1-5\n";
			//	Sleep(1000);
				
			}
			else {
				vboatnum = true;

			}
		}
		//cout << validboat << " ";
		//Sleep(2000);
		cout << "What X Would You Like To Place The Boat At? ";
		cin >> cord[1];
		if (!(int)boatnum) {
			validboat = true;
			return;
		}
		cout << "What Y Would You Like To Place The Boat At? ";
		cin >> cord[2];
		if (!(int)boatnum) {
			validboat = true;
			return;
		}
		//cout << boatnum;
		//Sleep(1000);

		boatsize[1] = 5;
		boatsize[2] = 3;
		boatsize[3] = 4;
		boatsize[4] = 3;
		boatsize[5] = 2;

		//cout << boatnum;
		//Sleep(1000);
		if (boatnum != 2) {
			if (cord[2] + boatsize[boatnum] > 10) {
				cout << "Boat Out Of Range! Enter New Entry\n";
				return;
			}
			else {

				if (local_board[cord[1] - 1][cord[2] - 1] or local_board[cord[1] - 1][cord[2]] or local_board[cord[1] - 1][cord[2] + 1] or local_board[cord[1] - 1][cord[2] + 2] != 0) {
					cout << "Boat Already Placed Here! Enter Location Againn\n";
				}
				else if (local_board[cord[1] - 1][cord[2] - 1] or local_board[cord[1] - 1][cord[2]] or local_board[cord[1] - 1][cord[2] + 1] or local_board[cord[1] - 1][cord[2] + 2] != 0) {
					cout << "Boat Already Placed Here! Enter Location Againn\n";
				}
				else if (local_board[cord[1] - 1][cord[2] - 1] or local_board[cord[1] - 1][cord[2]] or local_board[cord[1] - 1][cord[2] + 1] != 0) {
					cout << "Boat Already Placed Here! Enter Location Againn\n";
				}
				else if (local_board[cord[1] - 1][cord[2] - 1] or local_board[cord[1] - 1][cord[2]] != 0) {
					cout << "Boat Already Placed Here! Enter Location Againn\n";
				}
				else if (boatnum == 1 and boatsleft[0] == true) {
				
					local_board[cord[1] - 1][cord[2] - 1] = 1;
					local_board[cord[1] - 1][cord[2]] = 1;
					local_board[cord[1] - 1][cord[2] + 1] = 1;
					local_board[cord[1] - 1][cord[2] + 2] = 1;
					local_board[cord[1] - 1][cord[2] + 3] = 1;
					usedboats = usedboats + 1;
					validboat = true;
					boatsleft[0] = false;
				
				}else if (boatnum == 3 and boatsleft[2] == true) {
					local_board[cord[1] - 1][cord[2] - 1] = 3;
					local_board[cord[1] - 1][cord[2]] = 3;
					local_board[cord[1] - 1][cord[2] + 1] = 3;
					local_board[cord[1] - 1][cord[2] + 2] = 3;
					usedboats = usedboats + 1;
					validboat = true;
					boatsleft[2] = false;
					usedboats = usedboats + 1;
				
				}else if (boatnum == 4 and boatsleft[3] == true) {
					local_board[cord[1] - 1][cord[2] - 1] = 4;
					local_board[cord[1] - 1][cord[2]] = 4;
					local_board[cord[1] - 1][cord[2] + 1] = 4;
					usedboats = usedboats + 1;
					validboat = true;
					boatsleft[3] = false;
					usedboats = usedboats + 1;
				}else if (boatnum == 5 and boatsleft[4] == true) {
					local_board[cord[1] - 1][cord[2] - 1] = 5;
					local_board[cord[1] - 1][cord[2]] = 5;
					usedboats = usedboats + 1;
					validboat = true;
					boatsleft[4] = false;
					usedboats = usedboats + 1;
				}
				else if (boatsleft[4] == false or boatsleft[3] == false or boatsleft[2] == false or boatsleft[0] == false) {

					cout << "Boat Already In Use! Select Another Boat\n";
					return;
				}
				else {

					cout << "Boat Already Placed Here! Enter Location Againn\n";
					//cout << boatnum;
					//Sleep(1000);
				}





			}




		}
		else if (boatnum == 2) {
			if (cord[1] + boatsize[boatnum] > 8) {
				cout << "Boat Out Of Range! Enter New Cords\n";
			}
			else if (local_board[cord[1] - 1][cord[2] - 1] != 0 or local_board[cord[1]][cord[2] - 1] != 0 or local_board[cord[1] + 1][cord[2] - 1] != 0) {
				cout << "Boat Already Placed Here! Enter Location Again\n";
			} else if (boatsleft[1] == true) {
                local_board[cord[1] - 1][cord[2] - 1] = 2;
				local_board[cord[1]][cord[2] - 1] = 2;
				local_board[cord[1] + 1][cord[2] - 1] = 2;
				usedboats = usedboats + 1;
				validboat = true;
				boatsleft[1] = false;


			}
			else if (boatsleft[1] == false) {
				cout << "Boat Already In Use! Select Another Boat";
				return;
			}
			else if (local_board[cord[1] - 1][cord[2] - 1] != 0) {

				cout << "Boat Already Placed Here! Enter Location Again\n";
			}

		}




	}


}
void LocalDecisonEngine() {
	Title();
	r_boards();
	opt_log();

}
