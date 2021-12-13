# Binary Search Tree


Empty 다음과 같은 내용을 만족하는 Tree

 1) 각 node는 서로 다른 key 값을 가진다. 
 2) Left subtree에 속한 모든 node의 key 값은 root의 key값보다 작다. 
 3) Right subtree에 속한 모든 node의 key 값은 root의 key값보다 크다.
 4) 모든 subtree는 binary search tree!


* 연산 
  search: 어떤 key값을 갖는 원소 조회 
  Insert Node() : 원소를 추가
  Delete Node() : 원소를 삭제 
  Size() : 현재 원소수를 조회
  Empty() : 현재 empty 여부 체크 
  
  
#### Search 
  주어진 어떤 key값을 갖는 원소를 찾는 연산
  
  * Algorithm
    1) 주어진 tree(root)가 empty면 실패처리
    2) root의 key값이 k이면, root의 data 값을 return 
    3) root의 key값보다 k가 작으면 left subtree에서 찾은 결과를 return 
    4) root의 key값보다 k가 크면, right subtree에서 찾은 결과를 return 



  
 
