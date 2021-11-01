/*


Array를 사용한 Circular queue의 구현 :
 
- 도서정보 = {도서명, 페이지수, 가격} 로 이루어진 원소를 저장하는 circular queue를 구현하고,
 
다음 main function 이 수행되도록 프로그램을 완성하시오.

 
< 예상 출력 >
        C++ Programming :  534 : 35000
        Data Structure :  621 : 42000
        JAVA Programming :  485 : 38000
        Logic Design : 532 : 44000


*/


#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 100

using namespace std;
class element {
    public:
    string title;
    int price;
    int page;
    void set_data(string a, int page, int p);
};

void element::set_data(string a, int p, int pr) {
    title = a;
    page = p;
    price = pr;
}

class my_queue {
    element q[SIZE];
    int front ,rear;
    public:
        my_queue();
        void insert_q(element d);
        element delete_q();
        bool empty();
        bool full();
};

my_queue::my_queue() {
    front = 0;
    rear = 0;
}

void my_queue::insert_q(element a) {
    if(full()) {
        cout << "It's full" << endl;
        return;
    }
    q[rear] = a;
    rear = (rear+1) % SIZE;

}

element my_queue::delete_q() {
    element temp;

    if (!empty()) {
        temp = q[front];

        front = (front+1) % SIZE;
        return (temp);
    }
    else return temp;
}

bool my_queue::full() {
    if ((rear+1)%SIZE == front) {
        return true;
    }
    else return false;
}

bool my_queue::empty() {
    if (rear == front ) {
        return true;
    }
    else return false;
}


// set data , insert_q, title, page, price

int main() {
    my_queue a; //typer을 정하지 않고도 사용가능....
    element temp;
    temp.set_data("C++ Programming", 534, 35000);
    a.insert_q(temp);
    temp.set_data("Data Structure", 621, 42000);
    a.insert_q(temp);
    temp.set_data("JAVA Programming", 485, 38000);
    a.insert_q(temp);
    temp.set_data("Logic Design", 532, 44000);
    a.insert_q(temp);

    while(!a.empty()) {
        temp = a.delete_q();
        cout << temp.title << " : " << temp.page << " : " << temp.price << "\n";
    }

    return 0;
}