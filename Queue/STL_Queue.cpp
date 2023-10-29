#include<iostream>
#include<queue>

using namespace std;

int main() {

    queue<int> que;

    for (int i = 0; i < 5; i++) {
        que.push(i);
    }

    cout << "Size : " << que.size() << "\n";

    while (!que.empty()) {
        cout << que.front() << "\n";
        que.pop();
    }


    return 0;
}