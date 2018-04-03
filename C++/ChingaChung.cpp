#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int player1Global = 0;
int player2Global = 0;
int compGlobal = 0;
int playerGlobal = 0;

void CompVsPlay () {

    srand(time(0));
    int comp;
    int player;
   
    for (int i = 0; i < 5; i++) {

        cout << "Enter the number:";
        cin >> player;
        comp = rand() % 3 + 1; 
     
        if (player == 1 && comp == 2) {
            playerGlobal++;
        } else if (player == 1 && comp == 3) {
            compGlobal++;
        } else if (player == 2 && comp == 1) {
            compGlobal++;
        } else if (player == 2 && comp == 3) {
            playerGlobal++;
        } else if (player == 3 && comp == 1) {
            playerGlobal++;
        } else if (player == 3 && comp == 2) {
            compGlobal++;
        }  
        
        cout << "(" << playerGlobal << " : " << compGlobal << ")\n";
    }  
      
    if (compGlobal > playerGlobal) {
        cout << "You lose!(" << playerGlobal << " : " << compGlobal << ")\n";
    } else if (compGlobal < playerGlobal) {
        cout << "You win!(" << playerGlobal << " : " << compGlobal << ")\n";
    } else if (compGlobal == playerGlobal) {
        cout << "Nobody won!(" << playerGlobal << " : " << compGlobal << ")\n";
    }
}

void PlayVsPlay () {

    int player1;
    int player2;

    for (int i = 0; i < 5; i++) {

        cout << "Player1 enter the number:";
        cin >> player1;
        cout << "Player2 enter the number:";
        cin >> player2;

        if (player1 == 1 && player2 == 2) {
            player1Global++;
        } else if (player1 == 1 && player2 == 3) {
            player2Global++;
        } else if (player1 == 2 && player2 == 1) {
            player2Global++;
        } else if (player1 == 2 && player2 == 3) {
            player1Global++;
        } else if (player1 == 3 && player2 == 1) {
            player1Global++;
        } else if (player1 == 3 && player2 == 2) {
            player2Global++;
        }

        cout << "(" << player1Global << " : " << player2Global << ")\n";
    }

    if (player2Global > player1Global) {
        cout << "You lose!(" << player1Global << " : " << player2Global << ")\n";
    } else if (player2Global < player1Global) {
        cout << "You win!(" << player1Global << " : " << player2Global << ")\n";
    } else if (player2Global == player1Global) {
        cout << "Nobody won!(" << player1Global << " : " << player2Global << ")\n";
    }



}

int main () {
    
    int k;
    cout << "Hello!\n" << "Computer vs Player -- 1.\n";
    cout << "Player vs Player -- 2.\n";

    for (int i = 0; i < 5; i++) {
        cin >> k;     
        if (k != 1 && k != 2) {
            cout << "Error!\n";
        } else {
            break;
        }
    }
    
    cout << "Qar -- 1.\n";
    cout << "Mkrat -- 2.\n";
    cout << "Tuxt -- 3.\n";  
    
    if (k == 1) {
        CompVsPlay ();
    } else {
        PlayVsPlay ();
    }

    return 0;

}
