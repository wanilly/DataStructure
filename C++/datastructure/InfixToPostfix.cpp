/*
Infix experssion을 postfix으로 변환하는 프로그램 작성...

수식의 3가지 표현
    1. infix 두 opreand 사이 operator 위치함..
    2. prefix 두 opreand 앞 operator 위치함..
    3. postfix 두 opreand 뒤 operator 위치


infix -> prefix 
    잠점 괄호를 모두 고려, (a+(b*c)) 
    여는 괄호 위치에 그 괄호에 의해 ass된 operator 가져옴...
    (a+(b*c)) -> +a*bc

infix -> postfix
    Operator 잠정 괄호를 모두 고려, (a+(b*c))
    닫는 괄호 위치에 그 활호에 의해 ass된 operator 가져옴...
    (a+(b*c)) -> abc*+

알고리즘 
    입력 : string의 예 
    출력 : postfix 표현

    <가정> 
    1. 5가지 operator만을 고려
    2. Operand 영문자 단일 문자를 사용함을 가정
    3. 괄호 사용 가능 ...
    4. EOS 문자는 "$"을 고려...
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#define SIZE 100

using namespace std;

// pop, push, isEmpty 
class Stack{
    int top;
    char op[SIZE];

    public:
    void stack_init();
    void push(char op);
    char pop();
    bool isEmpty();
    bool isFull();
    void dispayStack();

};

void Stack::stack_init() {
    top = -1;
}

void Stack::push(char l) {
    if (isFull()) {
        cout << "Full" << endl;
    }
    else {
        top++;
        op[top] = l;
    }
}

// 하나씩 꺼냅니다. 
char Stack::pop() {
    if (isEmpty()) {
        cout <<  "Empty" << endl;
        return -1;
    }
    else {
        return (op[top--]);
    }
}

bool Stack::isFull() {
    return (top == SIZE-1);
}
// 빈공간인지 확인하기
bool Stack::isEmpty() {
    return (top == -1);
}
//
void Stack::dispayStack() {
    cout << "stakc:" << endl;
    for (int i=top; i>=0; i--) {
        cout << op[i] << endl;
    }
}

// operand 인지 확인하는 함수 
bool isOperand(char el) {
    if (el == '+' || el == '-' || el == '*' ||
        el == '%' || el == '/' || el == '$' ||
        el == '(' || el == ')') {
        return true;
    }
    else return false;
    
}
// opeator 우선순위 함수 : % * / -> 2, + - -> 1, $ -> 0
int opeator_get(char o) {

    if (o == '$' || o == '(') {
        return 0;
    }
    else if (o == '-' || o == '+') {
        return 1;
    }
    else if (o == '*' || o == '/' || o == '%') {
        return 2;
    }

    return 0;
}



// convert
void convert_postfix(char *infix, char *postfix) {
    Stack st;
    char c;
    int j=0;
    for (int i=0; i<strlen(infix); i++) {
        c = infix[i];
        if (c == '(') continue;
        else if (c == '+' || c == '-' || c == '*' || c == '%' || c == '/') {
            st.push(c);
        }
        else if (c == ')') {
            postfix[j++] = st.pop();
        }
        else { //
            postfix[j++] = c;
        }
    }
    while (!st.isEmpty()) {
        postfix[j++] = st.pop();
    }
    postfix[j] = '\n';
}

int main() {
    
    char *infix;
    char *postfix;
    cout << "Infix 입력 >> ";
    cin.getline(infix, 100);

    convert_postfix(infix, postfix);
    cout << "convert infix" << postfix << endl;
  
    return 0;
}


