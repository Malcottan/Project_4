#include <iostream>
using namespace std;

void qwerty(int n);

void qwerty(int n){
    cout << "Цифри числа " << n << ": ";
    while (n != 0) {
        int digit = n % 10;
        cout << digit;
        n /= 10;
    }
}

int main() {
    int n;
    cout << "Введіть ціле число: ";
    cin >> n;
    qwerty(n);
}