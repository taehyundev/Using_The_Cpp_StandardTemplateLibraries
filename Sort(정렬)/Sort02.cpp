#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<pair<int,string>> v(5);
	v[0].first = 30;
	v[0].second = "taehyun";
	v[1].first = 17;
	v[1].second = "gildong";
	v[2].first = 20;
	v[2].second = "AAA";
	v[3].first = 22;
	v[3].second = "CCCC";
	v[4].first = 23;
	v[4].second = "DDDD";
	cout << "[ 정렬 전 ] " << endl;
	for (int i = 0; i < 5; i++) {
		cout <<"Name : " <<v[i].second<<endl;
		cout <<"Age : "<< v[i].first<<endl<<endl;
	}
	cout << endl;

	sort(v.begin(), v.end());

	cout << "[ 정렬 후 ] "<<endl;
	for (int i = 0; i < 5; i++) {
		cout << "Name : " << v[i].second << endl;
		cout << "Age : " << v[i].first << endl << endl;
	}
}