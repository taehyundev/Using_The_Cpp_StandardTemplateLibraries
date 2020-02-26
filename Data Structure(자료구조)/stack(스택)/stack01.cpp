#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	s.push(3);
	s.push(10);
	s.push(2);
	s.push(5);
	s.push(21);
	cout << "size : " << s.size() << endl;
	cout << endl;
	while (!s.empty()) {
		cout << s.top()<<endl;
		s.pop();
	}
}