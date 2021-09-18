/*

namespace(네임스페이스)에 대해 공부하는 시간을 가질려고 합니다.

회사에서 다른 팀끼리 같은 이름을 공유한다면 상당히 혼란스럽고 많은 충돌이 예상됩니다. 그러나, 이러한 충돌을 방지하기 위해서 

namespace를 활용합니다. 간단한 예를 통해 명확하게 공부해봅시다!

*/

#include <iostream>

namespace A {  // nammespace 선언
    void Add() {
        printf("A's Add() function call\n"); // 
    }
}

namespace B {
    void Add() {
        printf("B's Add() function call\n");
    }
}

// using은 함수를 호출할때는 어느 네임스페이스 내에 있는 함수를 호출하겠다는 의미로 생각
using namespace A;

// A, B namespace Add() function exist. then How do we call functiomn? 
// :: 라는 연산자를 사용하여 함수를 호출합니다. 

int main() {


    A::Add();
    B::Add();
    return 0;
}
