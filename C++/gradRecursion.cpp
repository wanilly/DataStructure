
#include <iostream>
#include <cstring>

using namespace std;

void gadd(int x, int y);
// 최대 공약수 

int main() {
    int a, b, temp;
    char term;

    while(1) {

        cout << "------two number input------" << endl;

        cout << "number 1: ";
        cin >> a;

        cout << "number 2: ";
        cin >> b;

        if (b > a) {
            temp = a;
            a = b; 
            b = temp;
        }
        
        cout << " 최대 공약 수 : ";
        gadd(a, b);
        cout << a << endl;

        cout << "QuitInput :";
        cin >> term;
        if (term == 'q') break;
    }

    return 0;
}


void gadd(int x, int y) {
    if (y != 0) {
        int c = y;
        y = x%y;
        
        x = c;
        gadd(x, y);
    }
}
