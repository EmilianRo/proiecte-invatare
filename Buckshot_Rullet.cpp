#include <iostream>
#include <ctime>
using namespace std;

string p1, p2, aux;
int lives1 = 1, lives2 = 4;
string gloante[] = {"live", "blank"};
int i, j, g;
bool ok = true;
int nr_gloante;
string chamber_type[7];
int chamber[7];
int live, blank;
char op;
int glont = 0;
bool P1 = true, loop_checker = true;
int temp_lives;
// int size;
int main()

{
    g = 0;                //
    i = (rand() % 4) + 3; // nr glonte 3-7
                          // cout << i << '\n';
    j = i;
    live = 0;
    blank = 0;
    srand(time(NULL));
    // size = sizeof(chamber) / sizeof(int);
    cout << "***********************************************\n";
    cout << "Enter player 1 and 2 names to continue\n";
    cout << "***********************************************\n";

    cin >> p1 >> p2;
    int p1_p2 = (rand() % 2);
    if (p1_p2 == 1)
    {
        aux = p1;
        p1 = p2;
        p2 = aux;
    }
    // lives1 != 0 && lives2 != 0
    while (lives1 != 0 && lives2 != 0)
    {
        if (loop_checker)
        {

            do
            {
                for (i; i > 0; i--)
                {
                    // cout << "/";
                    nr_gloante = (rand() % 2);
                    if (nr_gloante == 0)

                    {
                        chamber_type[g] = "Live";
                        live++;
                        // cout << chamber_type[g] << " ";
                    }
                    else
                    {
                        chamber_type[g] = "Blank";
                        blank++;
                        // cout << chamber_type[g] << " ";
                    }
                    chamber[g] = nr_gloante;
                    g++;
                    // cout << chamber[g] << '\n';
                }
            } while ((live == 0) || (blank == 0));
            cout << '\n';

            cout << "live x" << live << '\n';
            cout << "blank x" << blank << '\n';
            loop_checker = false;
        }
        cout << "***********************************************\n";

        if (P1)
        {
            cout << "Is's " << p1 << " turn\n";
        }
        else
        {

            aux = p1;
            p1 = p2;
            p2 = aux;
            cout << "Is's " << p1 << " turn\n";
            temp_lives = lives1;
            lives1 = lives2;
            lives2 = temp_lives;
        }
        cout << temp_lives << " " << lives1 << " " << lives2 << "\n";
        cout << "***********************************************\n";
        cout << "                Chose one action\n";
        cout << "***********************************************\n";

        cout << "1: Shoot " << p2 << '\n'
             << "2: Shoot yourself\n";
        // while (g >= glont)
        //{
        cin >> op;
        switch (op)
        {
        case '1':
            cout << chamber_type[glont] << '\n';

            if (chamber[glont] == 0)
            {
                cout << p2 << " Lost a life \n";
                P1 = false;
                lives2--;
                cout << p2 << " has " << lives2 << " lives remaining\n";
            }
            else
            {
                cout << "Nothing happens \n";
                P1 = false;
            }

            // ok = false;
            glont++;

            break;

        case '2':
            cout << chamber_type[glont] << '\n';
            if (chamber[glont] == 0)
            {
                cout << p1 << " Lost a life \n";
                P1 = false;
                lives1--;
                cout << p1 << " has " << lives1 << " lives remaining\n";
            }
            else
            {
                cout << p1 << " Goes again\n";
                P1 = true;
            }

            // ok = false;
            glont++;
            break;

        default:
            cout << "Please sellect a vallid input\n";
            break;
        }
        if (glont == g)
        {
            g = 0;                //
            i = (rand() % 4) + 3; // nr glonte 3-7
                                  // cout << i << '\n';
            j = i;
            live = 0;
            blank = 0;
            loop_checker = true;
        }
    }
    // for (int cham = 0; cham <= sizeof(chamber) / sizeof(chamber[0]); cham++)
    // {
    //      chamber[cham] = 10;
    // }
    //}
    if (lives1 == 0)
    {
        cout << p1 << " is dead\n";
        cout << p2 << " is the winner\n";
    }
    else
    {
        cout << p2 << " is dead\n";
        cout << p1 << " is the winner\n";
    }

    cout << "***********************************************\n";
    return 0;
}