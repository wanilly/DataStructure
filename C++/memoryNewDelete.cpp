/*
C언어에서 malloc, free 함수를 만난적이 있을 것이다. C++에서는 그 역할을 new와 delete가 대신한다.
malloc: 메모리 공간을 사용할 수 있게 할당 / free: 공간을 전부 해제
*/

#include <iostream>

using namespace std;


//학생 점수를 입력하여 평균을 출력하기...

int main() {
    int* studentScore;
    int studentNubmer;
    int total = 0;

    //  studentScore = (int *)malloc(sizeof(int) * studentNumber)
    studentScore = new int[studentNubmer];  // new연산자는 단일 객체를 동적할당 : new datatype, 객체의 배열을 동적할당 : new datatype[SIZE]
    // 만약 new int(3); 3의 길이를 뜻하는 것이 아니라 초기값을 3으로 한다는 의미
    

    cout << "학생 수를 입력: ";
    cin >> studentNubmer;

    for (int i=0; i<studentNubmer; i++) {
        cout << "1번 학생의 점수를 입력: ";
        cin >> studentScore[i];
        total += studentScore[i];
    }
    cout << "모든 학생들의 평균: " << total / studentNubmer << endl; 
    delete [] studentScore; // delete연산자는 할당된 객체 메모리를 해제
    // 만약 delete 포인터; 여기서 포인터는 할당으르 해제할 객체, delete [] 포인터; 여기서 포인터가 객체의 배열을 가르킨다면 []를 넣습니다.
    return 0;
}



