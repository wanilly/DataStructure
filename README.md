# DataStructure

In the computer science, very important and intial. 

we have to obtain familiar with C++.

I'm using Java and C++. 


First,
Second, step by step...

๐ฅ 
FIRE!!

 ## summary
  
  ### STACKS
   LIFO(Last in First Out): defined basic linear list
   
   Stack application two calculate:
   
        1) Push: stack์ ์์ ์ ์ฅ
        
        2) Pop: stack์ผ๋ก๋ถํฐ ์์ ๊ฐ์ ธ์ด
        
   Stack์ผ๋ก๋ถํฐ ์์๋ฅผ popํ๋ฉด ๊ทธ ์์๊ฐ ๊ฐ์ฅ ๋ง์ง๋ง์ ๋ฃ์ ์์์์ ๋ณด์ฅ
   
  ![image](https://user-images.githubusercontent.com/49769190/137844390-ad040a84-26c3-4e6c-ac3e-1bba6553f90e.png)
  
  ๊ตฌํ ํ์: Top์์น๊ฐ ์ค์!๐๐ ๋งจ ๋ง์ง๋ง์ ๋ฃ์ ์์น๋ฅผ ์ ์ฅ(-1๋ก ์ด๊ธฐํ) 
  
  push(top ++) ํจ์: top์ ์์น๋ฅผ return ํจ
  
  pop(top --) ํจ์: top์ ์์น๋ฅผ return ํจ, ๊ทธ๋ฆฌ๊ณ  empty๋ฅผ ํตํด ๋น์๋์ง ํ์ธ 
  
  full ํจ์: ์์๊ฐ ์ฃผ์ด์ง ํฌ๊ธฐ๋ณด๋ค ํฌ๋ค๋ฉด ์์๋ฅผ ์ถ๊ฐ ํ  ์ ์๋๋ก ํ๋ค.
  
  empty ํจ์: top์ ์์น๊ฐ 0๋ณด๋ค ์์์ง๋ ๊ฒฝ์ฐ๋ผ๋ฉด ํ๋จ (top์ ์ด๋ป๊ฒ ์ด๊ธฐํ๋ฅผ ํ๋์ง์ ๋ฐ๋ผ ๋ค๋ฆ)
  
  
  ### QUEUE
    FIFO(First in First Out) 
    
    Queue application two calculate:
         
         1) Insert: queue ํ ๊ฐ ์์๋ฅผ ์ ์ฅ
         
         2) delete: ํ ๊ฐ ์์๋ฅผ ์ทจํจ
         
    ๊ตฌํ ํ์: rear์์น์์ insert, front์์ delete๊ฐ ์ด๋ฃจ์ด์ง / data: front, rear, array ์ ์ธ
  
    Insert : rear์์น์ ์์๋ฅผ ๋ฃ๊ณ  rear ++ ํ๋ค.
    
    Delete : front์ ์์น์ ์์๋ฅผ ๊ฐ์ ธ์ค๊ณ  front ++ ํ๋ค.
    
    empty ํจ์: array ์ ์์๊ฐ ์๋์ง ํ์ธ
    
    full ํจ์: array์ ์์ ๋ชจ๋ ์ฐจ์ ๊ณต๊ฐ์ด ๋ถ์กฑํ ๊ฒฝ์ฐ
    
    
   ### ์ฃผ์! โ ๏ธ 
   Circular Queue: Array ์ฌ์ฉํ์ฌ Queue ๊ตฌํ ์ ๋ฌธ์ ๊ฐ ์๊น๋๋ค.
    
      1) rear, front ๋ชจ๋ ์ฆ๊ฐํ๋ฉด array ๋์ rear๊ฐ ๋๋ฌํ๋ฉด ๋ ์ด์ฌ ์์ ์ถ๊ฐ๊ฐ ๋ถ๊ฐ๋ฅ!
         ์ ์ชฝ์ delete ์ด๋ฃจ์ด์ง ๊ณต๊ฐ์ ์ฌ์ฉ์ด ๐ฅ ๊ฐ๋ฅ. So, โญ๏ธ Queue ์ฌ์ฉ
         
      2) full, empty ๊ตฌ๋ถ์ ๋ชปํ๊ฒ ๋๋ค. array ์ ์ฒด ๊ณต๊ฐ์ด ๋ชจ๋ full๋๋ฉด front, rear๊ฐ ๊ฐ์ ์์น๊ฐ ๋์ด ์ด๊ธฐ empty์ํ์ ๋์ผํ๊ฒ ๋๋ค.
      
      
      โ๏ธ ํด๊ฒฐ: ๋ง์ง๋ง ๋จ์ ํ ๊ฐ์ ๋น ๊ณต๊ฐ์ ์ฌ์ฉํ์ง ์๋๋ก ํ๋ค. front ์ง์  ๋ง์ง๋ง ์์๊ฐ ๋น์ด์๋ ์ํ์ธ full๋ก ํ๋จํ๊ฒ ํจ
   ![image](https://user-images.githubusercontent.com/49769190/137900387-69efe293-2974-49ec-afe6-113864a9e4e2.png)
    
      rear, front ์ฆ๊ฐ๋ ์๋์ ๊ฐ์ด ๋๋จธ์ง ์ฐ์ฐ์ ์ฌ์ฉ
   ![image](https://user-images.githubusercontent.com/49769190/137900049-01dfffe4-5206-4a22-afcc-1624a2e7fb33.png)
   

  
  
  ### LINKED LIST
  
  
  ### TREE & BINARY TREE
  ์ ํ ๊ฐ์ ๋ธ๋๋ก ์ด๋ฃจ์ด์ง๋ฉฐ, Root node ํน๋ณํ ํ๋๋ง ๊ฐ์ง๋ค. 
  ![image](https://user-images.githubusercontent.com/49769190/137930123-696a6c6a-c395-4e8c-a18a-6c39ea75379d.png)
  
   Node(ํธ๋ฆฌ๊ตฌ์ฑ ๊ธฐ๋ณธ๊ตฌ์กฐ) Parent Node(๋ถ๋ชจ๋ธ๋) Siblings node(ํ์ ๋ธ๋; ๊ฐ์ ๋ถ๋ชจ) branch(node์ node๊ฐ ์ฐ๊ฒฐ)
   Edge(๊ฐ์ฅ ๊ธด ๋ธ๋๊ฐ ์ฐ๊ฒฐ) Heigh(๊ฐ์ฅ ๊ธด ๋ฃจํธ ๊ฒฝ๋ก ๊ธธ์ด) degree of a node(๊ฐ ๋ธ๋์ ์์๋ธ๋ ๊ฐ์) degree of tree(ํธ๋ฆฌ ์ต๋ ์ฐจ์)
   Leaf(terminal node)-(์์์ด ์๋ ๋ธ๋: degree 0) Internal node(degree > 0) ancestors(์์ ๊ณผ root์ path ์กด์ฌ ๋ธ๋)

   Binary Tree(์ด์งํธ๋ฆฌ): ๋ชจ๋  ๋ธ๋ ์ฐจ์๊ฐ ์ต๋ 2์ธ ํํ
   
