#include <iostream>
using namespace std;

void dice();
void dice_vote(int a, int b);

void dice_vote(int a, int b)
{
    if (a == b)
    {
        if (a == 0){
            cout << " _____" <<  " _____" << endl;
            cout << "|     |" << "|     |" <<  endl;
            cout << "|  *  |" << "|  *  |" << endl;
            cout << "|_____|" << "|_____|" << endl;
            cout << endl;
        } if (a == 1){
            cout << " _____" <<  " _____" << endl;
            cout << "|*    |" << "|*    |" <<  endl;
            cout << "|     |" << "|     |" << endl;
            cout << "|____*|" << "|____*|" << endl;
            cout << endl;
        } if (a == 2){
            cout << " _____" <<  " _____" << endl;
            cout << "|*    |" << "|*    |" <<  endl;
            cout << "|  *  |" << "|  *  |" << endl;
            cout << "|____*|" << "|____*|" << endl;
            cout << endl;
        } if (a == 3){
            cout << " _____" <<  " _____" << endl;
            cout << "|*   *|" << "|*   *|" <<  endl;
            cout << "|     |" << "|     |" << endl;
            cout << "|*___*|" << "|*___*|" << endl;
            cout << endl;
        } if (a == 4){
            cout << " _____" <<  " _____" << endl;
            cout << "|*   *|" << "|*   *|" <<  endl;
            cout << "|  *  |" << "|  *  |" << endl;
            cout << "|*___*|" << "|*___*|" << endl;
            cout << endl;
        } if (a == 5){
            cout << " _____" <<  " _____" << endl;
            cout << "|* * *|" << "|* * *|" <<  endl;
            cout << "|     |" << "|     |" << endl;
            cout << "|*_*_*|" << "|*_*_*|" << endl;
            cout << endl;
        }
    }
    else if (a == 0 or b == 0)
    {
        cout << " _____" << endl;
        cout << "|     |" << endl;
        cout << "|  *  |" << endl;
        cout << "|_____|" << endl;
        cout << endl;
    } if (a == 1 or b == 1)
    {
        cout << " _____" << endl;
        cout << "|*    |" << endl;
        cout << "|     |" << endl;
        cout << "|____*|" << endl;
        cout << endl;
    } if (a == 2 or b == 2)
    {
        cout << " _____" << endl;
        cout << "|*    |" << endl;
        cout << "|  *  |" << endl;
        cout << "|____*|" << endl;
        cout << endl;
    } if (a == 3 or b == 3)
    {
        cout << " _____" << endl;
        cout << "|*   *|" << endl;
        cout << "|     |" << endl;
        cout << "|*___*|" << endl;
        cout << endl;
    } if (a == 4 or b == 4)
    {
        cout << " _____" << endl;
        cout << "|*   *|" << endl;
        cout << "|  *  |" << endl;
        cout << "|*___*|" << endl;
        cout << endl;
    } if (a == 5 or b == 5)
    {
        cout << " _____" << endl;
        cout << "|* * *|" << endl;
        cout << "|     |" << endl;
        cout << "|*_*_*|" << endl;
        cout << endl;
    } 
}
void dice()
{
    int a = 0, b = 0, c = 0, comp = 0, hum = 0;
    if ((c = rand() % 1) == 0)
    {
        cout << "The first move of the computer" << endl;
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        comp = a + b;
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        hum = a + b;
    }
    if ((c = rand() % 1) == 1)
    {
        cout << "The first move is yours" << endl;
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        hum = a + b;
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        comp = a + b;
    }
    for (int i = 0; i < 5; i++)
    {
        if (c == 0)
        {
            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            comp = comp + a + b;
            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            hum = hum + a + b;
        }
        else
        {
            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            hum = hum + a + b;
            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            comp = comp + a + b;
        }
    }
    if (comp > hum)
    {
        cout << "You lost, but don't get upset, better luck next time!" << endl;
        cout << "Your scope is " << hum << ", the computer had a scope of " << comp << endl;
    }
    else
    {
        cout << "You won, well done!" << endl;
        cout << "Your scope is " << hum << ", the computer had a scope of " << comp << endl;
    }
}


int main()
{
    int repeat = 1;
    cout << "Game \"DICES\"" << endl;
    while (repeat == 1)
    {
        dice();
        cout << "Do you want to play more? (Enter 1 to play again, otherwise 0) = ";
        cin >> repeat;
        if (repeat == 0)
        {
            break;
        }
        else if (repeat != 1)
        {
            cout << "Error";
            break;
        }
    }
    return 0;
}