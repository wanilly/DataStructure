//
#include <iostream>
using namespace std;

void permutation(char data[], int dep, int n, int r);

void swap(char &a, char &b);



int main() {
    char arr[] = {'a', 'b', 'c', 'd'};
    permutation(arr, 0, 4, 3);

    return 0;
}


void swap(char &a, char &b) {

    char temp = a;
    a = b;
    b = temp;
}

void permutation(char data[], int dep, int n, int r) {
    
    if (dep == r) {
        
        for(int i=0; i<r; i++) {
            cout << data[i] << " ";

        }
        cout << endl;
        
    }

    for (int i=dep; i<n; i++) {
        swap(data[dep], data[i]);

        permutation(data, dep +1, n, r);
        swap(data[dep], data[i]);
    }
}
