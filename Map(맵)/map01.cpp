#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(void) {

    map<int, string> m;
    //파이썬 딕셔너리와 매우 유사
    //m[4] = 103; 이런식으로 넣을 수 있음

    m.insert(pair<int, string>(40, "me"));
    m.insert(pair<int, string>(35, "Show"));
    m.insert(pair<int, string>(10, "Dok2"));
    m.insert(pair<int, string>(90, "6"));
    m.insert(pair<int, string>(65, "money"));
    m.insert(pair<int, string>(20, "ZICO"));
    m.insert(pair<int, string>(50, "the"));

    //map 의 iterator를 만들어줌 하나의 포인터 역할
    map<int, string>::iterator iter;
    //map<T,T>::iterator Name

    //접근방법 1  Arrow 연산자로 접근
    for (iter = m.begin(); iter != m.end(); iter++) {
        cout << "[" << iter->first << ", " << iter->second << "]" << " ";
    }
    cout << endl;

    //접근방법 2  (*iter)로 포인터로 참조하여 들어간다.
    for (iter = m.begin(); iter != m.end(); iter++) {
        cout << "[" << (*iter).first << ", " << (*iter).second << "]" << " ";
    }


    return 0;
}
