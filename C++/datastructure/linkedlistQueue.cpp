/*
Stack을 활용한 Linked list
stack push 연산 
pop 연산
- empty check, return 위해 node 저장, delete할 node 위치 저장, Link 조정


linked list queue 구현

list 첫 원소의 위치를 front 
끝 원소의 위치를 rear

1. node 공간 확보  2. node에 주어진 값을 저장 3. link 조정

empty check , return front 원소 저징, delete 원소 저장

link 이동

*/

#include <iostream> 
#define SIZE 100
using namespace std;

class stack {
    public:
    int top;
    
    stack();

};

stack::stack() {
    top = 0;
}


class queue {
    public:
    int q[SIZE];
    int rear;
    int front;
    queue();
    void insert(int a);
    int deleteQ();
    bool isFull();
    bool isEmpty();
    
};

queue::queue() {
    rear = 0;
    front = 0;
}

bool queue::isFull() {
    // full and empty 를  명확하게 하기 위해서 rear == front 보다
    if ((rear+1)% SIZE == front) return true;
    else return false;
}

bool queue::isEmpty() {
    if (rear == front) return true;
    else return false;
}

void queue::insert(int d) {
    if(isFull()) {
        cout << "full" << endl;

    }
    else {
        q[rear] = d;
        rear = (rear+1) % SIZE;
    }
}

int queue::deleteQ() {
    int tem;

    if(isEmpty()) {
        cout << "empty" << endl;
    }
    else {
        tem = q[front];
        front = (front+1) % SIZE;
        return tem;
    }
    return tem;
}


int main() {

    queue q;
    int t;

    q.insert(1);
    q.insert(5);
    q.insert(3);
    q.insert(10);

    t = q.deleteQ();
    t = q.deleteQ();

    q.insert(2);
    q.insert(4);

    while (!q.isEmpty()) {
        t = q.deleteQ();
        cout << t << endl;
    }
    
    return 0;
}

