#include <iostream>
#include <ctime>
using namespace std;

void PlayerMove(char *tile);
void ComputerMove(char *tile);
void Board(char *tiles);
bool PlayerWin(char *tile);
bool Draw(char *tile);
// string WhoWins(char *tile);

int main()

{
    int quit;
    bool running = true;
    char arr[9];
    fill(arr, arr + 9, ' ');
    while (running)
    {
        Board(arr);
        PlayerMove(arr);
        if (PlayerWin(arr))
        {
            // cout << WhoWins(arr) << " Won\n";
            cout << "Game Over";
            running = false;
            break;
        }
        if (Draw(arr))
        {
            running = false;
            break;
        }
        Board(arr);
        ComputerMove(arr);
        if (PlayerWin(arr))
        {
            // cout << WhoWins(arr) << " Won\n";
            cout << "Game Over";
            running = false;
            break;
        }
        if (Draw(arr))
        {
            running = false;
            break;
        }
    }
    Board(arr);
    cin >> quit;
    return 0;
}

void PlayerMove(char *tile)
{
    int i;
    do
    {
        cout << "Player one, make your move,chose a number between 1 and 9 for a spot: ";
        cin >> i;
    } while (tile[i - 1] == 'X' || tile[i - 1] == 'O');
    tile[i - 1] = 'X';
}

void ComputerMove(char *tile)
{
    int i;
    do
    {
        cout << "Player two, make your move,chose a number between 1 and 9 for a spot: ";
        cin >> i;
    } while (tile[i - 1] == 'X' || tile[i - 1] == 'O');
    tile[i - 1] = 'O';
}

void Board(char *tiles)
{
    cout << "         |" << "         |" << "         \n";
    cout << "    " << tiles[0] << "    |" << "    " << tiles[1] << "    |" << "    " << tiles[2] << '\n';
    cout << "_________|" << "_________|" << "_________\n";
    cout << "         |" << "         |" << "         \n";
    cout << "    " << tiles[3] << "    |" << "    " << tiles[4] << "    |" << "    " << tiles[5] << '\n';
    cout << "_________|" << "_________|" << "_________\n";
    cout << "         |" << "         |" << "         \n";
    cout << "    " << tiles[6] << "    |" << "    " << tiles[7] << "    |" << "    " << tiles[8] << '\n';
    cout << "         |" << "         |" << "         \n";
}

bool PlayerWin(char *move)
{
    for (int i = 0; i < 3; i++)
    {
        if (move[i] == move[i + 1] && move[i] == move[i + 2] && move[i] != ' ')
        {
            return true;
            break;
        }
        else if (move[i] == move[i + 3] && move[i] == move[i + 6] && move[i] != ' ')
        {
            return true;
            break;
        }
        else if (move[i] == move[i + 3] && move[i] == move[i + 6] && move[i] != ' ')
        {
            return true;
            break;
        }
    }
    if (move[0] == move[4] && move[0] == move[8] && move[0] != ' ')
    {
        return true;
        // break;
    }
    else if (move[2] == move[4] && move[2] == move[6] && move[2] != ' ')
    {
        return true;
        // break;
    }
    return false;
}

bool Draw(char *tile)
{
    for (int i = 0; i < 9; i++)
    {
        if (tile[i] == ' ')
        {
            return false;
        }
    }
    cout << "It's a TIE\n";
    return true;
}
