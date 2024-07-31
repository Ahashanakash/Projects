#include <bits/stdc++.h>
using namespace std;

char Board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

//move function
bool moves(string block_sign)
{
    bool legal_move;
    switch (block_sign[0])
    {
    case '1':
        if (Board[0][0] == ' ')
        {
            Board[0][0] = block_sign[1];
            legal_move = true;
        }
        else
        {
            cout << "Block already used. choose an empty block." << '\n';
            legal_move = false;
        }
        break;
    case '2':
        if (Board[0][1] == ' ')
        {
            Board[0][1] = block_sign[1];
            legal_move = true;
        }
        else
        {
            cout << "Block already used. choose an empty block." << '\n';
            legal_move = false;
        }
        break;
    case '3':
        if (Board[0][2] == ' ')
        {
            Board[0][2] = block_sign[1];
            legal_move = true;
        }
        else
        {
            cout << "Block already used. choose an empty block." << '\n';
            legal_move = false;
        }
        break;
    case '4':
        if (Board[1][0] == ' ')
        {
            Board[1][0] = block_sign[1];
            legal_move = true;
        }
        else
        {
            cout << "Block already used. choose an empty block." << '\n';
            legal_move = false;
        }
        break;
    case '5':
        if (Board[1][1] == ' ')
        {
            Board[1][1] = block_sign[1];
            legal_move = true;
        }
        else
        {
            cout << "Block already used. choose an empty block." << '\n';
            legal_move = false;
        }
        break;
    case '6':
        if (Board[1][2] == ' ')
        {
            Board[1][2] = block_sign[1];
            legal_move = true;
        }
        else
        {
            cout << "Block already used. choose an empty block." << '\n';
            legal_move = false;
        }
        break;
    case '7':
        if (Board[2][0] == ' ')
        {
            Board[2][0] = block_sign[1];
            legal_move = true;
        }
        else
        {
            cout << "Block already used. choose an empty block." << '\n';
            legal_move = false;
        }
        break;
    case '8':
        if (Board[2][1] == ' ')
        {
            Board[2][1] = block_sign[1];
            legal_move = true;
        }
        else
        {
            cout << "Block already used. choose an empty block." << '\n';
            legal_move = false;
        }
        break;
    case '9':
        if (Board[2][2] == ' ')
        {
            Board[2][2] = block_sign[1];
            legal_move = true;
        }
        else
        {
            cout << "Block already used. choose an empty block." << '\n';
            legal_move = false;
        }
        break;
    default:
        cout << "Press any number between (1-7) to select a valid block" << '\n';
        legal_move = false;
        break;
    }
    return legal_move;
}

// print function
void print_board()
{
    cout << Board[0][0] << " | " << Board[0][1] << " | " << Board[0][2] << '\n';
    cout << "---------" << '\n';
    cout << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << '\n';
    cout << "---------" << '\n';
    cout << Board[2][0] << " | " << Board[2][1] << " | " << Board[2][2] << '\n';
    return;
}

//checking function
bool check()
{
    // row matching
    if ((Board[0][0] == 'x' && Board[0][1] == 'x' && Board[0][2] == 'x') || (Board[0][0] == 'o' && Board[0][1] == 'o' && Board[0][2] == 'o'))
        return true;
    else if ((Board[1][0] == 'x' && Board[1][1] == 'x' && Board[1][2] == 'x') || (Board[1][0] == 'o' && Board[1][1] == 'o' && Board[1][2] == 'o'))
        return true;
    else if ((Board[2][0] == 'x' && Board[2][1] == 'x' && Board[2][2] == 'x') || (Board[2][0] == 'o' && Board[2][1] == 'o' && Board[2][2] == 'o'))
        return true;

    // column matching
    else if ((Board[0][0] == 'x' && Board[1][0] == 'x' && Board[2][0] == 'x') || (Board[0][0] == 'o' && Board[1][0] == 'o' && Board[2][0] == 'o'))
        return true;
    else if ((Board[0][1] == 'x' && Board[1][1] == 'x' && Board[2][1] == 'x') || (Board[0][1] == 'o' && Board[1][1] == 'o' && Board[2][1] == 'o'))
        return true;
    else if ((Board[0][2] == 'x' && Board[1][2] == 'x' && Board[2][2] == 'x') || (Board[0][2] == 'o' && Board[1][2] == 'o' && Board[2][2] == 'o'))
        return true;

    // diagonal matching
    else if ((Board[0][0] == 'x' && Board[1][1] == 'x' && Board[2][2] == 'x') || (Board[0][0] == 'o' && Board[1][1] == 'o' && Board[2][2] == 'o'))
        return true;
    else if ((Board[0][2] == 'x' && Board[1][1] == 'x' && Board[2][0] == 'x') || (Board[0][2] == 'o' && Board[1][1] == 'o' && Board[2][0] == 'o'))
        return true;
    else
        return false;
}

//main function
int main()
{
    // Welcome note
    cout << '\n'
         << "Welcome To Tic-Tac-Toe game!" << '\n';

    // How to play
    cout << '\n'
         << "How to Play?" << '\n';
    cout << "To make a move, press any number between (1-7) to select a valid block and then press 'x' or 'o' the sign you got." << '\n';
    cout << "For example - 3o, 1x. Here 5 and 1 are blocks and 'o' and 'x' are signs." << '\n';
    cout << "Do not use any space while typing your move." << '\n';
    cout << "Player 1 press - o." << '\n';
    cout << "Player 2 press - x." << '\n'
         << '\n';

    // Demo board
    cout << '\n'
         << "The board is given below - " << '\n';
    cout << "1" << " | " << "2" << " | " << "3" << '\n';
    cout << "---------" << '\n';
    cout << "4" << " | " << "5" << " | " << "6" << '\n';
    cout << "---------" << '\n';
    cout << "7" << " | " << "8" << " | " << "9" << '\n'
         << '\n';

    cout << "Did you read the instructions above and ready to start the game? (If yes, then type 'y' or 'Y)" << '\n';
    cout << "Pressing other button will close the game." << '\n';
    cout << "Answer - ";
    char yes;
    cin >> yes;
    cin.ignore();
    string player1, player2;
    if (yes == 'y' || yes == 'Y')
    {
        cout << "Great!" << '\n';
        cout << "Enter player 1's name - ";
        // cin>>player1;
        getline(cin, player1);
        // getchar();
        cout << "Enter player 2's name - ";
        getline(cin, player2);
        // cin>>player2;
    }
    else
    {
        cout << "Game closed" << '\n';
        return 0;
    }

    // play
    int n = 9;
    bool game_over = false;
    while (n)
    {
        if (n % 2 != 0)
        {
            cout << player1 << "! it's your turn! type a block number between (1-7) and type 'o'" << '\n';
            string block_sign;
            while (1)
            {
                getline(cin, block_sign);
                if (block_sign.size() != 2 || block_sign[1] != 'o')
                {
                    cout << "Wrong move! " << player1 << "You broke the rules. See how to play section and try again." << '\n';
                    cout << player1 << "! it's your turn! type a block number between (1-7) and type 'o'." << '\n';
                    continue;
                }
                if (moves(block_sign))
                    break;
            }

            print_board();
            cout << '\n';
            if (check())
            {
                cout << player1 << " won! GG :)" << '\n'
                     << "Game over" << '\n';
                game_over = true;
                break;
            }
        }
        else
        {
            cout << player2 << "! it's turn! type a block number between (1-7) and type 'x'" << '\n';
            string block_sign;
            while (1)
            {
                getline(cin, block_sign);
                if (block_sign.size() != 2 || block_sign[1] != 'x')
                {
                    cout << "Wrong move! " << player2 << "You broke the rules. See how to play section and try again." << '\n';
                    cout << player2 << "! it's turn! type a block number between (1-7) and type 'x'." << '\n';
                    continue;
                }
                if (moves(block_sign))
                    break;
            }
            print_board();
            cout << '\n';
            if (check())
            {
                cout << player2 << " won! GG :)" << '\n'
                     << "Game over" << '\n';
                game_over = true;
                break;
            }
        }
        n--;
    }
    if (!game_over)
    {
        cout << '\n'
             << "Game Draw :'(" << '\n';
        cout << "Better luck next time" << '\n';
    }

    return 0;
}
