#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> v(5);
	v[0] = 3;
	v[1] = 7;
	v[2] = 4;
	v[3] = 9;
	v[4] = 1;
	cout << "정렬 전 [ ";
	for (int i = 0; i < 5; i++) {
		cout << v[i] << " ";
	}
	cout << " ]";

	sort(v.begin(), v.end());
	
	cout << "정렬 후 [ ";
	for (int i = 0; i < 5; i++) {
		cout << v[i] << " ";
	}
	cout << " ]";
}