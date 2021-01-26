#include <iostream>
#include <string>
#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCDFAInspection"
using namespace std;

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void draw_board();
int play_game();

int main() {
        int player = 1,i;
        string choice;
    char mark;
    cout << "It's TikTakToe baby woooo lets gooooo" << endl;
    cout << "Player 1: X" << endl << "Player 2: O" << endl << "^ dont forget it cause im not saying it again" << endl;
    do
    {
        player = (player%2) ? 1: 2;
        draw_board();
        mark = (player == 1) ? 'X': 'O';
        cout << "Player " << player << ", make a move: " << endl;
        cin >> choice;
        if (choice == "1" && (square[1] == '1'))
            square[1] = mark;
        else if (choice == "2" && (square[2] == '2'))
            square[2] = mark;
        else if (choice == "3" && (square[3] == '3'))
            square[3] = mark;
        else if (choice == "4" && (square[4] == '4'))
            square[4] = mark;
        else if (choice == "5" && (square[5] == '5'))
            square[5] = mark;
        else if (choice == "6" && (square[6] == '6'))
            square[6] = mark;
        else if (choice == "7" && (square[7] == '7'))
            square[7] = mark;
        else if (choice == "8" && (square[8] == '8'))
            square[8] = mark;
        else if (choice == "9" && (square[9] == '9'))
            square[9] = mark;
        else {
            cout << "not allowed stupid, choose again" << endl;
            player--;
            cin.ignore(choice.length());
        }
        i = play_game();
        player++;
    }while(i==0);
    player--;
    if (i==1)
        cout << "==>\nPlayer " << player << " wins";
    else {
        cout << "yall are hella stupid, now no one wins";
    }
    return 0;
}


void draw_board() {
    cout << "\n\nTik Tak Toe\n\n";
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "   " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "  " << endl;
    cout << "     |     |     " << endl;
}

int play_game() {
    if ((square[1] == square[2] && square[2] == square[3]) || (square[4] == square[5] && square[5] == square[6])
    || (square[7] == square[8] && square[8] == square[9]) || (square[1] == square[5] && square[5] == square[9])
    || (square[7] == square[5] && square[5] == square[3]) || (square[1] == square[4] && square[4] == square[7])
    || (square[2] == square[5] && square[5] == square[8]) || (square[3] == square[6] && square[6] == square[9]))
        return 1;
    else if (square[1] != '1' && square[2] != '2'&& square[3] != '3'
    && square[4] != '4' && square[5] != '5' && square[6] != '6'
    && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 2;
    else
        return 0;
}
