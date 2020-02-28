#include <iostream>
#include <queue>
using namespace std;

int main() {
	priority_queue<int> pq;
	pq.push(5);
	pq.push(7);
	pq.push(8);
	pq.push(1);
	pq.push(2);
	cout << pq.size() << endl;
	cout << "[TOP]" << endl;
	while (!pq.empty()) {
		cout << pq.top()<<endl;
		pq.pop();
	}
}