
## Stack/Queue/Deque

### -Stack

stack은 LIFO 형태로 나중에 넣은게 먼저 나온다.

### -Queue

queue는 FIFO 형태로 먼저 넣은게 먼저 나온다.

### -Deque

deque는 stack의 LIFO와 Queue의 FIFO의 성질을 모드 갖춘 형태이다.


```c++
#include <stack>
#include <queue>
#include <deque>
//위와 같은 형태로 라이브러리를 사용

using namespace std;
int main(){
    stack<int> s;
    queue<int> q;
    deque<int> d;
    //위와 같이 선언한다.
    //각각의 push의 형태로 값을 넣어준다.

    // if.. 만약에 값을 넣었다면

    //while(!s.empty()) !s.empty() 또는 !q.empty() 또는 !d.empty()
    //의 형태로 쓸 수 있다.
    // 비어있기 전까지 출력하고 pop으로 빼면 있는 값들을 모두 담을 수 있다.
}
```
