#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void dice();
void dice_vote(int a, int b);

void dice_vote(int a, int b)
{
    if (a == b)
    {
        if (a == 1){
            cout << " _____" <<  " _____" << endl;
            cout << "|     |" << "|     |" <<  endl;
            cout << "|  *  |" << "|  *  |" << endl;
            cout << "|_____|" << "|_____|" << endl;
            cout << endl;
        } if (a == 2){
            cout << " _____" <<  " _____" << endl;
            cout << "|*    |" << "|*    |" <<  endl;
            cout << "|     |" << "|     |" << endl;
            cout << "|____*|" << "|____*|" << endl;
            cout << endl;
        } if (a == 3){
            cout << " _____" <<  " _____" << endl;
            cout << "|*    |" << "|*    |" <<  endl;
            cout << "|  *  |" << "|  *  |" << endl;
            cout << "|____*|" << "|____*|" << endl;
            cout << endl;
        } if (a == 4){
            cout << " _____" <<  " _____" << endl;
            cout << "|*   *|" << "|*   *|" <<  endl;
            cout << "|     |" << "|     |" << endl;
            cout << "|*___*|" << "|*___*|" << endl;
            cout << endl;
        } if (a == 5){
            cout << " _____" <<  " _____" << endl;
            cout << "|*   *|" << "|*   *|" <<  endl;
            cout << "|  *  |" << "|  *  |" << endl;
            cout << "|*___*|" << "|*___*|" << endl;
            cout << endl;
        } if (a == 6){
            cout << " _____" <<  " _____" << endl;
            cout << "|* * *|" << "|* * *|" <<  endl;
            cout << "|     |" << "|     |" << endl;
            cout << "|*_*_*|" << "|*_*_*|" << endl;
            cout << endl;
        }
    }
    else {
        if (a == 1 or b == 1)
        {
            cout << " _____" << endl;
            cout << "|     |" << endl;
            cout << "|  *  |" << endl;
            cout << "|_____|" << endl;
            cout << endl;
        } if (a == 2 or b == 2)
        {
            cout << " _____" << endl;
            cout << "|*    |" << endl;
            cout << "|     |" << endl;
            cout << "|____*|" << endl;
            cout << endl;
        } if (a == 3 or b == 3)
        {
            cout << " _____" << endl;
            cout << "|*    |" << endl;
            cout << "|  *  |" << endl;
            cout << "|____*|" << endl;
            cout << endl;
        } if (a == 4 or b == 4)
        {
            cout << " _____" << endl;
            cout << "|*   *|" << endl;
            cout << "|     |" << endl;
            cout << "|*___*|" << endl;
            cout << endl;
        } if (a == 5 or b == 5)
        {
            cout << " _____" << endl;
            cout << "|*   *|" << endl;
            cout << "|  *  |" << endl;
            cout << "|*___*|" << endl;
            cout << endl;
        } if (a == 6 or b == 6)
        {
            cout << " _____" << endl;
            cout << "|* * *|" << endl;
            cout << "|     |" << endl;
            cout << "|*_*_*|" << endl;
            cout << endl;
        } 
    }
}
void dice()
{
    int a = 0, b = 0, c = 0, comp = 0, hum = 0;
    srand(time(nullptr)); // Сід (або зерно)
    if ((c = rand() % 1) == 0)
    {
        cout << "The first move of the computer" << endl;
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        dice_vote(a, b);
        comp = comp + a + b;
        cout << ".";
        _sleep(300);
        cout << ".";
        _sleep(300);
        cout << "." << endl;
        _sleep(300);
        cout << "Your move, hit enter";
        cin.get(); // Press enter
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        dice_vote(a, b);
        hum = hum + a + b;
        cout << "Score: Copm = " << comp << " You = " << hum << endl;
    }
    if ((c = rand() % 1) == 1)
    {
        cout << "The first move is yours, hit enter" << endl;
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        cin.get();
        cout << ".";
        _sleep(300);
        cout << ".";
        _sleep(300);
        cout << "." << endl;
        _sleep(300);
        dice_vote(a, b);
        hum = hum + a + b;
        cout << "Now the computer throws the dice" << endl;
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        dice_vote(a, b);
        comp = comp + a + b;
        cout << "Score: Copm = " << comp << " You = " << hum << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        if (c == 0)
        {
            cout << "The first move of the computer" << endl;
            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            dice_vote(a, b);
            comp = comp + a + b;
            cout << ".";
            _sleep(300);
            cout << ".";
            _sleep(300);
            cout << "." << endl;
            _sleep(300);
            cout << "Your move, hit enter";
            cin.get(); // Press enter
            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            dice_vote(a, b);
            hum = hum + a + b;
            cout << "Score: Copm = " << comp << " You = " << hum << endl;
        }
        else
        {
            cout << "The first move is yours, hit enter" << endl;
            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            cin.get();
            cout << ".";
            _sleep(300);
            cout << ".";
            _sleep(300);
            cout << "." << endl;
            _sleep(300);
            dice_vote(a, b);
            hum = hum + a + b;
            cout << "Now the computer throws the dice" << endl;
            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            dice_vote(a, b);
            comp = comp + a + b;
            cout << "Score: Copm = " << comp << " You = " << hum << endl;
        }
    }
    if (comp > hum)
    {
        cout << "You lost, but don't get upset, better luck next time!" << endl;
        cout << "Your scope is " << hum << ", the computer had a scope of " << comp << endl;
    }
    else if(comp < hum)
    {
        cout << "You won, well done!" << endl;
        cout << "Your scope is " << hum << ", the computer had a scope of " << comp << endl;
    } else {
        cout << "A draw? Nothing will be lucky the second time ;)" << endl;
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