// 1-n 정수 합
#include <iostream>

using namespace std;

int sum(int n) {

    if (n <=0 ) return 0;
    return (n+ sum(n-1));
}

int oddSum(int n) {
    int total =0;
    if (n < 0) return 0;

    if (n %2 == 0) {
        n = n -1;
    }
    return total = n + oddSum(n-2);
}

int evenSum(int n) {
    int t =0;
    
    if (n<0) return 0;

    if (n %2 ==1) {
        n = n-1;
    }
    return t = n + evenSum(n-2);
}

int main() {
    int num;
    cout << "n :  ";

    cin >> num;
    cout << "sum : " << oddSum(num) << endl;
    cout << "sum odd: " << oddSum(num) << endl;
    cout << "sum even : " << evenSum(num) << endl;

    return 0;

}
