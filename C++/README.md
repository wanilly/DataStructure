# C++ 언어 기초
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
