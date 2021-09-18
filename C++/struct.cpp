/*
 struct는 c언어에서도 사용하였다. C++에서 다른 점은 구조체 정의부분에 typedef를 
 따로 선언하지 않아도 키워드 생략가능합니다. 추가로 C++에서는 접근 제어 지시자를 사용할 수 있습니다. 멤버를 접근에 제한을 할 수 있음
만약 접근 제어가 생략될 경우, 기본적으로 공용(public)멤버로 간주합니다. C++의 접근 제어 지시자에는 public, private, protected 3가지 

public: 어디서든 접근이 가능합니다.

private: 외부에서 접근이 불가능합니다.

protected: 외부에서 접근이 불가능하나, 상속된 파생 클래스에서는 접근이 허용된다.

*/

#include <iostream>

using namespace std;

struct student {
    private:
        int idNumber;
        const char *name;  // gcc 컴파일 오류 때문에 const 처리 해주면 정상적으로 컴파일 된다. 
        float grade; 
    public:
    // C언어에서는 구조체 내에 함수를 쓰는 것이 허용되지 않았지만, C++은 가능합니다.
        void show();
        void setInfo(int _idNumber, char *_name, float _grade);
};

// 이렇게 ::연산자를 활용하여 구조체 내에서 썼던 함수를 뻈음....
void student::show() {
    cout << "학번은 " << idNumber << " 입니다." << endl;
    cout << "이름은 " << name << " 입니다." << endl;
    cout << "백분율은 " << grade << " 입니다." << endl;
}

void student::setInfo(int _idNumber, char *_name, float _grade) {
    idNumber = _idNumber;
    name = _name;
    grade = _grade;
}

int main() {
    student t;

    //student t = {21911111, "김철수", 90.1};
    t.setInfo(21911111, "김철수", 90.1);
    t.show();

    return 0;
}

