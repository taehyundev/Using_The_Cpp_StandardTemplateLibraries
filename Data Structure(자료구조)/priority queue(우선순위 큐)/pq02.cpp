#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	priority_queue<int, vector<int>, greater<int>> pq;
//	priority_queue<int, vector<int>, less<int>> pq;

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