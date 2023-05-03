#include <iostream>
using namespace std;

void piramidka (int side);

void piramidka (int side){
    int c = 1;
    int i;
    for(i = side; i > 0; --i){
        for(int o = i-1; o > 0; --o){
            cout << " ";
        }
        for(int p = c; p > 0; --p){
            if(p == 1){
                cout << "*" << endl;
            } else {
                cout << "*";
            }
        }
        c += 2;

    }
}
int side;
int main(){
    cin >> side;
    piramidka(side);
    return 0;
}