#include <iostream>
using namespace std;

const float uahTOusd = 36.85;

void convert(int where);

void convert(int where){
    float UAH, USD;
    if (where == 2){
        cout << "UAH = ";
        cin >> UAH;
        cout << "USD = ";
        cin >> USD;
        cout << "uah to usd = " << UAH / uahTOusd << endl;
        cout << "usd to uah = " << USD * uahTOusd;
    } else if (where == 1){
        cout << "UAH = ";
        cin >> UAH;
        cout << "uah to usd = " << UAH / uahTOusd;
    } else {
        cout << "USD = ";
        cin >> USD;
        cout << "usd to uah = " << USD * uahTOusd;
    }
}
int where;
int main(){
    cout << "What do you want to transfer, dollars(0) or hryvnias(1), or both(2)" << endl;
    cin >> where;
    convert(where);
    return 0;
}