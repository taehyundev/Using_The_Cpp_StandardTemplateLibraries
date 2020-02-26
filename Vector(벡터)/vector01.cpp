#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<string, int>> v(n);
	for (int i = 0; i < n; i++) {
		string name;
		int age;
		cin >> name >> age;
		v[i].first = name;
		v[i].second = age;
	}
	for (int i = 0; i<v.size(); i++) {
		cout <<"name : " <<v[i].first << endl;
		cout <<"age : " <<v[i].second << endl;
	}
}