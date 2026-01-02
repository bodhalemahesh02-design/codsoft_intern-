#include <iostream>
using namespace std;

char board[3][3] = { {'1','2','3'},
                     {'4','5','6'},
                     {'7','8','9'} };

void show() {
    cout << "\n";
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

int check() {
    // rows
    if(board[0][0]==board[0][1] && board[0][1]==board[0][2]) return 1;
    if(board[1][0]==board[1][1] && board[1][1]==board[1][2]) return 1;
    if(board[2][0]==board[2][1] && board[2][1]==board[2][2]) return 1;

    // columns
    if(board[0][0]==board[1][0] && board[1][0]==board[2][0]) return 1;
    if(board[0][1]==board[1][1] && board[1][1]==board[2][1]) return 1;
    if(board[0][2]==board[1][2] && board[1][2]==board[2][2]) return 1;

    // diagonals
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]) return 1;
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]) return 1;

    return 0;
}

int main() {
    int pos, r, c, turn = 0;
    char mark;

    while(1) {
        show();

        if(turn % 2 == 0)
            mark = 'X';
        else
            mark = 'O';

        cout << "Player " << mark << " enter position: ";
        cin >> pos;

        pos--;
        r = pos / 3;
        c = pos % 3;

        if(board[r][c]=='X' || board[r][c]=='O') {
            cout << "Already taken!\n";
            continue;
        }

        board[r][c] = mark;

        if(check()) {
            show();
            cout << "Player " << mark << " wins!\n";
            break;
        }

        turn++;

        if(turn == 9) {
            show();
            cout << "It's a draw!\n";
            break;
        }
    }

    return 0;
}
