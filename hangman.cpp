#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void my_ftn(char arr[], int);
int printarr(char array[], int num);
void check(int, int);
int main()
{
    string character;
    do
    {
        int y, alpha = 0, counts1 = 0;
        char arr[100];

        srand(time(0));

        int z = rand() % 7 + 1;

        if (z == 1)
        {
            char arr[] = {"fast\0"};
            y = sizeof(arr) / sizeof(char);
        }
        else if (z == 2)
        {
            char arr[] = {"programmer\0"};
            y = sizeof(arr) / sizeof(char);
        }
        else if (z == 3)
        {
            char arr[] = {"student\0"};
            y = sizeof(arr) / sizeof(char);
        }
        else if (z == 4)
        {
            char arr[] = {"are\0"};
            y = sizeof(arr) / sizeof(char);
        }
        else if (z == 5)
        {
            char arr[] = {"lazy\0"};
            y = sizeof(arr) / sizeof(char);
        }
        else if (z == 6)
        {
            char arr[] = {"hangmen\0"};
            y = sizeof(arr) / sizeof(char);
        }

        int num = y - 2;
        cout << "              ";
        cout << "\\---------------------------------\\" << endl;
        cout << "              ";
        cout << "\\----------Hangmen Game-----------\\" << endl;
        cout << "              ";
        cout << "\\---------------------------------\\" << endl;

        alpha++;

        check(50, alpha);
        alpha++;
        cout << endl
             << "             ";
        cout << "\\----------------------------------\\" << endl;

        cout << "                          ";
        cout << "PLAY GAME ";
        cout << endl
             << "             ";
        cout << "\\----------------------------------\\" << endl;
        check(50, alpha);
        char array[15] = {'_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_'};
        cout << "                   ";
        if (num == 4)
        {
            cout << "      ";
        }
        else if (num == 3)
        {
            cout << "       ";
        }
        else if (num == 7)
        {
            cout << "  ";
        }

        for (int i = 0; i < num; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
        my_ftn(arr, y);

        cout << "Do you wish to play again: type \"yes\" or \"Yes\": ";
        cin >> character;

    } while (character == "Yes" || character == "yes");
}

void my_ftn(char arr[], int y)
{
    char ch;
    int ftn, alphas = 0, counts1 = 0;
    int count = 0;
    char array[15] = {'_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_'};
    int lmp = 0;
    while (true && lmp != 1)
    {
        lmp = 0;
        int num = y - 2, j = 1;
        ftn = printarr(array, num);
        if (ftn == num)
        {
            cout << endl
                 << '\t' << '\t' << "You won the game \"Congratulations\"" << endl;
            break;
            lmp = 1;
        }

        cout << endl
             << "ENTER a character: ";
        cin >> ch;
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {

            if (ch == arr[0] || ch == arr[1] || ch == arr[2] || ch == arr[3] || ch == arr[4] || ch == arr[5] || ch == arr[6] || ch == arr[7] || ch == arr[8] || ch == arr[9] || ch == arr[10] || ch == arr[11] || ch == arr[12] || ch == arr[13])
            {
                count;
                char arrays[15];

                alphas++;
                check(count, alphas);
                for (int i = 0; i < 15; i++)
                {
                    if (arr[i] == ch)
                    {
                        array[i] = ch;
                    }
                }
                cout << "                   ";
                if (num == 4)
                {
                    cout << "      ";
                }
                else if (num == 3)
                {
                    cout << "       ";
                }
                else if (num == 7)
                {
                    cout << "  ";
                }

                for (int i = 0; i < num; i++)
                {
                    cout << array[i] << " ";
                }
                cout << endl;

                cout << endl;
                j++;
                if (num == j)
                {
                    break;
                }
                continue;
            }

            else
            {
                char character;
                count++;
                check(count, 50);
                if (count == 5)
                {
                    cout << "Do you wish to tak hint type \"h\" or \"H\" otherwise print \"N\", \"n\"  : ";
                    cin >> character;

                    if (character == 'h' || character == 'H')
                    {
                        cout << "Type one of the following Character (Last Chance: ): " << endl;
                        for (int i = 0; i < num; i++)
                        {
                            for (int k = 1; k <= 6 * i; k++)
                            {
                                cout << " ";
                            }
                            if (array[i] == '_')
                            {
                                counts1++;

                                cout << endl;
                                cout << "                         ";

                                cout << "o, p ";
                                cout << arr[i];
                                cout << ", b, g, k, q";
                                cout << endl
                                     << endl;
                                break;
                            }
                        }
                    }
                }
                if (count == 6)
                {

                    cout << endl
                         << '\t' << '\t' << "You loses the match" << endl
                         << endl;
                    cout << endl
                         << "The correct hangmen word is: " << endl
                         << endl;
                    cout << "                          ";
                    for (int i = 0; i < y; i++)
                    {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                    break;
                }
                cout << "                        ";
                if (counts1 == 1)
                {
                    cout << "      ";
                }
                for (int i = 0; i < num; i++)
                {

                    cout << array[i] << " ";
                }
            }
        }
        else
        {
            cout << "Only Characters are allowed \"Try Again: \"" << endl;
        }
    }
}

int printarr(char array[], int num)
{
    int countfi = 0;
    for (int i = 0; i < num; i++)
    {
        if (array[i] != '_')
        {
            countfi++;
        }
    }
    return countfi;
}

void check(int count, int alpha)
{
    char a, b, c, d, e, f, h;

    if (alpha == 1 && count == 50)
    {
        a = '|', b = 'O', c = '|', d = '/', e = '\\', f = '/', h = '\\';
    }
    else if (alpha == 2 && count == 50)
    {
        a = '|', b = ' ', c = ' ', d = ' ', e = ' ', f = ' ', h = ' ';
    }

    if (count == 0)
    {
        a = '|', b = ' ', c = ' ', d = ' ', e = ' ', f = ' ', h = ' ';
    }

    if (count == 1)
    {
        a = '|', b = 'O', c = ' ', d = ' ', e = ' ', f = ' ', h = ' ';
    }
    else if (count == 2)
    {
        a = '|', b = 'O', c = '|', d = ' ', e = ' ', f = ' ', h = ' ';
    }
    else if (count == 3)
    {
        a = '|', b = 'O', c = '|', d = ' ', e = ' ', f = '/', h = ' ';
    }
    else if (count == 4)
    {
        a = '|', b = 'O', c = '|', d = ' ', e = ' ', f = '/', h = '\\';
    }
    else if (count == 5)
    {
        a = '|', b = 'O', c = '|', d = '/', e = ' ', f = '/', h = '\\';
    }
    else if (count == 6)
    {
        a = '|', b = 'O', c = '|', d = '/', e = '\\', f = '/', h = '\\';
    }
    for (int i = 1; i <= 8; i++)
    {
        cout << "                        ";
        if (i >= 1 && i <= 3)
        {
            for (int j = 1; j <= 3; j++)
            {
                cout << " ";
            }
        }
        else if (i == 4 || i == 5)
        {
            for (int j = 1; j <= 2; j++)
            {
                cout << " ";
            }
        }
        if (i == 1)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j == 1)
                {
                    cout << '+';
                }
                else if (j == 5)
                {
                    cout << '+';
                }
                else
                {
                    cout << '-';
                }
            }
            cout << endl;
            continue;
        }
        else if (i == 2)
        {

            cout << a << "   " << '|';
            cout << endl;
            continue;
        }

        else if (i == 3)
        {

            cout << b << "   " << '|';
            cout << endl;
            continue;
        }
        else if (i == 4)
        {

            cout << d << c << e << "  " << '|';
            cout << endl;
            continue;
        }
        else if (i == 5)
        {

            cout << f << ' ' << h << "  " << '|';
            cout << endl;
            continue;
        }
        else if (i == 6)
        {

            cout << "       " << '|';
            cout << endl;
            continue;
        }
        else if (i == 7)
        {
            cout << " ======" << '|';
            cout << endl;
            continue;
        }
        else
        {
            cout << endl;
            break;
        }
    }
}
