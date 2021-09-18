/*

FunctionOverloading(함수 오버로딩) : C 언어에서는 같은 함수명이 있으면 컴파일 오류가 있었다.

C++에서는 같은 함수명을 가지지만, 다른 data type을 가지면 가능하다.

예를 통해 알아보자.

*/


#include <iostream>

// std를 붙여주는 이유는 namespace를 사용하겠다는 것이다. 다음부터는 std::를 쓰지 않아도 된다. 
using namespace std;


void funct(int a) {
    cout << "funct 함수가 호출됨(a)\n" << endl;
}

void funct(int a, int b) {
    cout << "funct 함수가 호출됨(a, b)\n" << endl;
}


int main() {
    funct(2);
    funct(5, 6);

    return 0;
}


/*

example)
int add(int a, int b);
float add(float a, float b);
int add(float a, float b);
int add(int a, int b, int c);

*/