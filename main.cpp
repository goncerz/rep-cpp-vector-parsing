#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
	int num;
	char c;
	vector<int> ints;

	while (ss) {
		ss >> num >> c;
		ints.push_back(num);
	}

	return ints;
}

int main() {
	string str = "123,745,9855,5,15,11,15,15,12355";

	vector<int> integers = parseInts(str);
	for (vector<int>::iterator it = integers.begin(); it != integers.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}
