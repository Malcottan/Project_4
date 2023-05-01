#include <iostream>
using namespace std;

void avg (int a, int b);

void avg (int a, int b){
    cout << "(" << a << " + " << b << ")/2 = " << (a+b)/2; 
}

int main(){
    int a,b;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    avg(a,b);
    return 0;
}