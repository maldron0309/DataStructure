#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> s;


	for (int i = 0; i < 5; i++) {
		s.push(i);
	}

	cout << "Size : " << s.size() << "\n";

	for (; !s.empty(); s.pop()) {

		cout << s.top() << "\n";
	}

	return 0;
}