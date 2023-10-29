#include <iostream>
#include <vector>
using namespace std;

int main() {
	class Queue {
	private:
		vector<int>arr;

	public:
		void Enqueue(int val) {
			arr.push_back(val);
		}

		void Dequeue() {
			if (!empty())
			{
				arr.erase(arr.begin());
			}
		}

		bool empty() {

			return arr.empty();
		}
		int front() {

		}
		int back() {

		}
	};
}