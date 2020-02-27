#include <iostream>
#include <list>

using namespace std;

int main() {
	list<int> l;
	//이중 연결리스트
	// push_back
	l.push_back(5);
	l.push_back(6);
	l.push_back(7);
	l.push_back(8);
	l.push_back(9);
	l.push_back(10);
	//5 6 7 8 9 10

	// pop_back 
	l.pop_back();
	//pop 10

	// push_front
	l.push_front(4);
	l.push_front(3);
	l.push_front(1);
	l.push_front(0);
	//0 1 3 4 5 6 7 8 9 10

	// pop_front
	l.pop_front();
	//1 3 4 5 6 7 8 9 10

	cout << "front list : ";
	for (int i = 0; i < l.size(); i++) {
		cout << l.front() << " ";
		l.pop_front();
	}
	cout << endl;

	// back and front
	cout << "list front value : " << l.front() << '\n';
	cout << "list end value : " << l.back() << '\n';


	// size
	cout << "list size : " << l.size() << '\n';


	// empty
	cout << "Is it empty? : " << (l.empty() ? "Yes" : "No") << '\n';


	// iterator
	list<int>::iterator begin_iter = l.begin(); // auto begin_iter = l.begin()도 가능
	list<int>::iterator end_iter = l.end(); // auto end_iter = l.end()도 가능


	// insert
	begin_iter++; // 2번째를 가리키는 iterator
	l.insert(begin_iter, 2);


	// erase
	end_iter--; // 마지막 원소를 가리키는 iterator
	l.erase(end_iter);

	// *iterator : 원소 접근
	cout << "list " << distance(l.begin(), begin_iter) + 1 << " element : " << *begin_iter << '\n';
	return 0;
}
