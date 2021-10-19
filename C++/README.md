# C++ 언어 기초
  ## C++ 기본구조
   #### standard Input/output
        #include <iostream>
        using namespace std; ...
   ##### Stream I/O operators
        input stream: cin 
        * >> 주어진 해당 type의 데이터로 받아들임
        
        output stream: cout, clog, cerr
        * << 주어지 데이타를 자동으로 해다 type으 형식을 출력함
        
        한 문장 내 연속으로 작성가능😊
   ##### Identifiers
        variable, function, class name of the rule: 1) 영문자, 숫자, _ 사용 2) 숫자로 시작할 수 없음 3) 여백이 올 수 없음 4) 1024문자까지 유효 5) 쓰임을 naming하기
        
        variable: 임의의 위치에서 선언 가능(C 에서는 불가)
        
        Date type: int, char, float, double, bool(True/False) - C 에서는 불가? 자유롭게 쓸 수는 없으나, 사용은 가능하다.
        
        constants: Literal (= 😏고정된 값을 의미하느 data 표현)
        
        Variable of Scope: Local, Global, Formal varameters (local variable like implements)
        
        Variable initialization: initial value in allocation, "constant" declartion.
        
   ##### Operator precedence
   <span style="color:Red">Unary operators</span> > binary operators
        
        *, /, %      >       +, -
        >, <, >=, <=      >       ==, !=
        &&      >       ||
        
        
   ##### Type conversion
         each other data type of calculate: 유효숫자가 많은 쪽으로 반환하여 일치시킴
         bool type (automatically transfer Integer 0, 1)
         white space and () use freely: readablilty 극대화
         
        
   ##### Program standard control struture
         
         별도의 control statement 지정이 없으면 쓰여진 순서대로 수행
         
         Branching mechanism(selection statements): if-else statement, switch statement
         
         Loops: while, for statement
         
         break, continue possible❤️
         
         
         
   
  ## 포인터(pointer)
    메모리의 주소값을 담고 있는 변수 or 상수
   ##### * 주소 값: 메모리 저장소 위치를 나타내는 값 (1 byte)
   ### 포인터 변수 선언
    메모리 주소 저장하는 변수 *를 넣어주면 된다. 연산자(&)를 가져오면 그 변수의 주소 값을 반환
 
   #### Code
   ![image](https://user-images.githubusercontent.com/49769190/137577230-71d04be2-d5bb-456f-821d-5fcb2803f48b.png)
   
   #### Result
   ![image](https://user-images.githubusercontent.com/49769190/137577304-a7b42e7d-48f0-4872-9c42-b7b4f3ddbdf5.png)
   
  ## 참조(Reference)
    어떤 대상을 가르키는 값(포인터와 유사)
   ### 주의!
    반드시 초기화하여야 한다는 것! 한번 초기화하고 다시 다른 변수 참조 불가능하다.
    
   #### Swap function Code
   ![image](https://user-images.githubusercontent.com/49769190/137577315-fd684735-f608-4660-bbc1-ca25432ebfc8.png)
   
   #### Result
   ![image](https://user-images.githubusercontent.com/49769190/137577333-e37c30be-f8bf-4978-982e-ed35e5f36bcf.png)
