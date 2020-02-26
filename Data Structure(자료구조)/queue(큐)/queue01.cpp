#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	q.push(3);
	q.push(10);
	q.push(2);
	q.push(5);
	q.push(21);
	cout << "size : " << q.size() << endl;
	cout << endl;
	while (!q.empty()) {
		cout << q.front()<<endl;
		q.pop();
	}
}