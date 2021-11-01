#include <iostream>


using namespace std;

class node {
    
    public:
    string bookname;
    int pages;
    int price;
    node *link;
    void set_data(string s, int p, int d);

};

class book {
    node *head;
    node *tail;
    public:
        book();
        void addhead(node n);
        void addtail(node n);
        node deletehead();
        int nodeNum();
        bool listEmpty();
        int removeNode(string s);
        int priceSum();
        int numNodes();
        int getPrice(string s);
        int getPages(string s);


};

book::book() {
    head = NULL;
    tail = NULL;

}

void node::set_data(string s, int p, int d) {
    bookname = s;
    pages = p;
    price = d;
}

void book::addhead(node t) {
    node *p;

    p = new node;
    (*p) = t;
    p->link = head;
    head = p;

    if (tail == NULL) {
        tail = p;  // null이면 첫 노드는 tail
    }

}

void book::addtail(node t) {
    node *p;

    p = new node;
    (*p) = t;

    p->link = NULL;

    if (tail != NULL) {
        tail->link = p;
    }

    else {
        head = p;
    }
    tail = p;
}


bool book::listEmpty() {
    if ( head == NULL) {
        return true;
    }
    else return false;
}


int book::removeNode(string s) {
    node *t;
    node *prev;
    
    prev = NULL;
    t = head;


    while(t != NULL &&  t->bookname != s) {
        prev = t;
        t = t->link;
    }

    if (t == NULL) {
        return 0; // Fail
    }

    if (prev) {
        prev->link = t->link;
    }
    else {
        head = t->link;
    }

    if (head == NULL) {
        tail = NULL;
    }

    if (t == tail) {
        tail = prev;
    }
    delete t;
    return 1;

}

int book::numNodes() {
    node *n;
    int count = 0;

    for (n =head; n != NULL; n = n->link) {
        count ++;
    }
    return count;
}


node book::deletehead() {
    node tmp;
    node *n;
    n = head;
    //tmp = *head;
    //head = head->link;
    tmp = *head->link;
    if (head == NULL) {
        tail = NULL;
    }
    return tmp;
}


int book::priceSum() {
    node *n;
    int s;
    int sum = 0;
    

    for (n = head; n != NULL; n = n->link) {
        s = n->price;
        sum += s;
    }
    return sum;
}

int book::getPages(string s) {
    node *n;
    int pages;

    for (n= head; n != NULL; n = n->link) {
        if (n->bookname == s) {
            pages = n->pages;
        }
    }
    
    return pages;
}

int book::getPrice(string s) {
    node *n;
    int price;

    for (n=head; n != NULL; n = n->link) {
        if (n->bookname == s) {
            price = n->price;
        }
    }
    return price;
}

int main() {
    node tmp;
    book b;
    string s;
    char term;
    int pages;
    int price;

    tmp.set_data("C++Programming", 534, 35000);
    b.addhead(tmp);
    cout << b.numNodes() << " : 책 값은 총 "  << b.priceSum() << "원" << "\n";
    tmp.set_data("MachineLearning", 634, 63000);
    b.addhead(tmp);
    cout << b.numNodes() << " : 책 값은 총 " << b.priceSum() << "원" << "\n";
    tmp.set_data("Logic Design", 532, 44000);
    b.addtail(tmp);
    cout << b.numNodes() << " : 책 값은 총 " << b.priceSum() << "원" << "\n";
    tmp = b.deletehead();
    cout << tmp.bookname << " is delete\n";
    cout << b.numNodes() << " : 책 값은 총 "  << b.priceSum() << "원" << "\n";
    tmp.set_data("DataStructure", 621, 42000);
    b.addhead(tmp);
    cout << b.numNodes() << " : 책 값은 총 "  << b.priceSum() << "원" << "\n";
    tmp.set_data("JAVAProgramming", 532, 44000);
    b.addhead(tmp);
    cout << b.numNodes() << " : 책 값은 총 "  << b.priceSum() << "원"<< "\n";
    tmp.set_data("OperatingSystem", 453, 50000);
    b.addhead(tmp);
    cout << b.numNodes() << " : 책 값은 총 "  << b.priceSum() << "원"<< "\n";

    cout << "삭제할 책 목록을 입력하시오 : ";
    cin >> s;
    pages = b.getPages(s);
    price = b.getPrice(s);

    if (b.removeNode(s) == 1) {
       // printf("삭제할 목록은 %s이며, 이 책의 정보는 다음과 같습니다.\n", s);
        printf("이 책은 %d이며, 가격은 %d입니다.\n", pages, price);
        cout << "삭제하시겠습니까?(y/n) ";
        cin >> term;
        if (term == 'y') {
            cout << s << "가 리스트에서 삭제되었습니다." << endl;
            cout << b.numNodes() << " : 책 값은 총 "  << b.priceSum() << "원"<< "\n";
        }
        else if (term == 'n') {
            cout  << "삭제되지 않았습니다." << endl;
        }
        else {
            cout << "잘못 입력하였습니다." << endl;
        }
    }
    return 0;
}

// name, page, 

/*
int main()
{
        my_queue  a;
        element  tmp;
 
        tmp.set_data("C++ Programming", 534, 35000);
        a.insert_q(tmp);
        tmp.set_data("Data Structure", 621, 42000);
        a.insert_q(tmp);
        tmp.set_data("JAVA Programming", 485, 38000);
        a.insert_q(tmp);
        tmp.set_data("Logic Design", 532, 44000);
        a.insert_q(tmp);
        
        while (!a.empty() ) {
                tmp = a.delete_q();
                cout << tmp.s_title << " : " << tmp.npages  << " : " << tmp.price << "\n";
        }
        return 0;
}
*/