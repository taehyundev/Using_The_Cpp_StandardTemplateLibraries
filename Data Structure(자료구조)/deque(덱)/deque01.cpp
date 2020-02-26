#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> d;
	d.push_front(4);
	d.push_front(12);
	d.push_front(5);
	d.push_front(1);
	cout << "size : " << d.size() << endl;
	d.push_back(2);
	d.push_back(3);
	cout << "size : " << d.size() << endl;

	cout << endl;
	cout << "<front>" << endl;
	while (!d.empty()) {
		cout << d.front() << endl;
		d.pop_front();
	}

	d.push_front(4);
	d.push_front(12);
	d.push_front(5);
	d.push_front(1);
	d.push_back(2);
	d.push_back(3);
	cout << "<back>" << endl;
	while (!d.empty()) {
		cout << d.back() << endl;
		d.pop_back();
	}
}