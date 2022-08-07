#pragma once
int random_x = { NULL };
int random_y = { NULL };
int comp_b = 1;
int cboatnum = 1;
int ccord[3] = { 0,0 };
bool vboat[5] = {FALSE};
int totalvboat = 0;
int cboatsize[6];
using namespace std;

#include "RenderMenu.h"
#include "GUIRender.h"
void gen_cords() {
        random_x = (int)(rand() % 8) + 1;
        random_y = (int)(rand() % 8) + 1;
       // cout << "HERE||!";
}

void reset_board() {
    for (int y = 1; y <= 8; y++) {
        for (int x = 1; x <= 8; x++) {
            comp_board[x-1][y-1] == 0;
        }
    }

}
void print_board() {
    //cout << "Here";
    for (int y = 1; y <=8; y++) {
        
        for (int x = 1; x <= 8; x++) {
            cout << comp_board[x-1][y-1];
           // cout << "Here..";
        }
        cout << "\n";
    }
}
void pc_pos() {
    int compvboats = false;
        cboatsize[1] = 5;
        cboatsize[2] = 3;
        cboatsize[3] = 4;
        cboatsize[4] = 3;
        cboatsize[5] = 2;
       // cout << "HERE";
        reset_board();
        bool inti[10] = {NULL};
        while (compvboats == false) { //places the boats and itterates through each boat it places 
            if (inti[1] == false) {
            cout << "Building Game";
            inti[1] = true;
            Sleep(100);
            cout << " .";
            Sleep(100);
            cout << " .";
            Sleep(100);
            cout << " .\n";
            }
            else if (inti[2] ==false) {
              cout << "Loading Game Bot";
              inti[2] = true;
              Sleep(100);
              cout << " .";
              Sleep(100);
              cout << " .";
              Sleep(100);
              cout << " .\n";
            }
            else if (inti[3] == false) {
                cout << "Mapping User Grid";
                inti[3] = true;
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .\n";
            }
            else if (inti[4] == false) {
                cout << "Creating Game Physics";
                inti[4] = true;
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .\n";
            }
            else if(inti[5] == false){
                cout << "Loading Game Decisions";
                inti[5] = true;
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .\n";
            }
            else if (inti[6] == false) {
                cout << "Loading Player Strike Options";
                inti[6] = true;
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .\n";
            }
            else if (inti[7] == false) {
                cout << "Loading Log Recording";
                inti[7] = true;
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .\n";
            }
            else if (inti[8] == false) {
                cout << "Rendering Pause Menu";
                inti[8] = true;
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .\n";
            }
            else if (inti[9]==false){
                cout << "Rendering Main Game";
                inti[9] = true;
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .";
                Sleep(100);
                cout << " .";
            }

            
          // cout << "HERE!";
            gen_cords(); 
          //  print_board();
            ccord[1] = random_x;
            ccord[2] = random_y;
            cboatnum = comp_b;
          // cout << random_x << " " << random_y;
         //  cout << " '" <<comp_b;
          if (cboatnum != 2) {
              //cout << "HERE!!";
              if (ccord[2] + cboatsize[cboatnum] > 10) {
                   // cout << "HERE!!// ";
                  //  cout << "%" << (ccord[2] + cboatsize[cboatnum])<<"%";
                    
              }else if (comp_board[ccord[1] - 1][ccord[2] - 1] != 0 or comp_board[ccord[1] - 1][ccord[2]] !=0 or comp_board[ccord[1] - 1][ccord[2] + 1] != 0 or comp_board[ccord[1] - 1][ccord[2] + 2] != 0 or comp_board[ccord[1] - 1][ccord[2]+3] != 0) {
                  //  cout << "HERE!!= ";
                  // cout << comp_board[ccord[1] - 1][ccord[2] - 1] << comp_board[ccord[1] - 1][ccord[2]] << comp_board[ccord[1] - 1][ccord[2] + 1] << comp_board[ccord[1] - 1][ccord[2] + 2] << comp_board[ccord[1] - 1][ccord[2] + 3];
                    
              }
              else if (comp_board[ccord[1] - 1][ccord[2] - 1] or comp_board[ccord[1] - 1][ccord[2]] or comp_board[ccord[1] - 1][ccord[2] + 1] or comp_board[ccord[1] - 1][ccord[2] + 2] != 0) {
                  //  cout << "HERE!!/] ";
                    
              }
                else if (comp_board[ccord[1] - 1][ccord[2] - 1] or comp_board[ccord[1] - 1][ccord[2]] or comp_board[ccord[1] - 1][ccord[2] + 1] != 0) {
                  // cout << "HERE!!/[ ";
                }
                else if (comp_board[ccord[1] - 1][ccord[2] - 1] or comp_board[ccord[1] - 1][ccord[2]] != 0) {
                  //  cout << "HERE!!/p ";
                }
                else if (cboatnum == 1) { //places a boat based upon what vaule it has been given, this can be stregic or random
                    comp_board[ccord[1] - 1][ccord[2] - 1] = cboatnum;
                    comp_board[ccord[1] - 1][ccord[2]] = cboatnum;
                    comp_board[ccord[1] - 1][ccord[2] + 1] = cboatnum;
                    comp_board[ccord[1] - 1][ccord[2] + 2] = cboatnum;
                    comp_board[ccord[1] - 1][ccord[2] + 3] = cboatnum;
                    vboat[0] = true;
                    comp_b = comp_b + 1;
                // cout << "HERE!!z ";
                }
                else if (cboatnum == 3) {
                    comp_board[ccord[1] - 1][ccord[2] - 1] = cboatnum;
                    comp_board[ccord[1] - 1][ccord[2]] = cboatnum;
                    comp_board[ccord[1] - 1][ccord[2] + 1] = cboatnum;
                    comp_board[ccord[1] - 1][ccord[2] + 2] = cboatnum;
                    vboat[2] = true;
                    comp_b = comp_b + 1;
               //    cout << "HERE!!z ";
                }
                else if (cboatnum == 4) {
                    comp_board[ccord[1] - 1][ccord[2] - 1] = cboatnum;
                    comp_board[ccord[1] - 1][ccord[2]] = cboatnum;
                    comp_board[ccord[1] - 1][ccord[2] + 1] = cboatnum;
                    vboat[2] = true;
                    comp_b = comp_b + 1;
                 //   cout << "HERE!!z ";

                }
                else if (cboatnum == 5) {
                    comp_board[ccord[1] - 1][ccord[2] - 1] = cboatnum;
                    comp_board[ccord[1] - 1][ccord[2]] = cboatnum;
                    vboat[4] = true;
                    comp_b = comp_b + 1;
                 // cout << "HERE!!z ";
                }
          }
          else if (cboatnum == 2) {
              if (ccord[1] + cboatsize[2] > 9) {
                  //cout << "FAILEDx1";
                 // cout << "|" << ccord[1] << "  " << cboatsize[2] << "|";
              }
              else if (comp_board[ccord[1] - 1][ccord[2]] or comp_board[ccord[1]][ccord[2]-1] or comp_board[ccord[1] + 1][ccord[2]-1] != 0) {
                 // cout << "FAILEDx0";
                //  cout << comp_board[ccord[1] - 1][ccord[2]] << comp_board[ccord[1]][ccord[2]] << comp_board[ccord[1] + 1][ccord[2]];

                }
                else {
                    comp_board[ccord[1] - 1][ccord[2]-1] = cboatnum;
                    comp_board[ccord[1]][ccord[2]-1] = cboatnum;
                    comp_board[ccord[1] + 1][ccord[2]-1] = cboatnum;
                    vboat[1] = true;
                    comp_b = comp_b + 1;
                  //  cout << "HERE!!z ";

                }


          } else { //else contains a fatal error to show where it has exited and thus failed at. This could happen because the computer cannot generate positions to place at
                cout << "FATAL_ERROR (CODE 'COMPNUMGENx01')";
                for (int x = 1; x <= 5; x++) {
                    Sleep(300);
                    cout << ". ";
                }
                break;
          }

          totalvboat = comp_b;
       //   cout << "TOTAL: " << totalvboat;
          for (int x = 1; x <= 5; x++) {
          
            //  cout << "......" << vboat[x] << "......";
          }
            if (totalvboat == 6) {
                compvboats == true;
             //   print_board();
                return;
            }

            
            Sleep(500);
        
       
    
    
    }
   
    

}



void pc_decision() {
    bool vvfire = false;
    strike_turn = 1;
    int tally[6] = { NULL };
    for (int y = 1; y <= 8; y++) {
        for (int x = 1; x <= 8; x++) {
            if (local_board[x - 1][y - 1] != 0 and local_board[x - 1][y - 1] != 9 and local_board[x - 1][y - 1] != 8) {
                tally[0]--;
                //cout << "Tally: " << tally[0];
                //Sleep(5000);
            }
           
        }
    }

    //cout << "Tally: " << tally[1];
    if ((tally[0]) == 0) {
        winner = 1;
        exit_menu();
    }
    vvfire == false;
    while (vvfire == false) {
        gen_cords();
        ccord[1] = random_x;
        ccord[2] = random_y;
        cout << "                   BOT: Firing At " << ccord[1] << "," << ccord[2] << "\n";
        Sleep(2000);
        if (local_board[ccord[1] - 1][ccord[2] - 1] == 9 or local_board[ccord[1] - 1][ccord[2] - 1] == 8) {
        }
        else if (local_board[ccord[1] - 1][ccord[2] - 1] != 0) {
            cout << "                   BOT: DIRECT HIT AT: " << ccord[1] << "," << ccord[2] << "\n";
            local_board[ccord[1] - 1][ccord[2] - 1] = 9;
            vvfire = true;
            Sleep(2000);
        }
        else {
            cout << "                   BOT: Miss" << "\n";
            local_board[ccord[1] - 1][ccord[2] - 1] = 8;
            vvfire = true;
            Sleep(2000);
            //cout << "Here";
        }
        //cout << "Here|";
    }


    }
