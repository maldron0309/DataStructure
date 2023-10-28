#include <iostream>
#include <vector>

using namespace std;

class Stack {
    int arr[100];
    int index = -1;

public:
    void push(int val) {
        if (index == 99)
        {
            cout << "FULL" << "\n";
        }
        else {
            arr[++index] = val;
        }
    }

    void pop() {
        if (!empty())
        {
            --index;
        }
        return;
    }

    bool empty() {
        return index == -1;
    }

    int size() {
        return index += 1;
    }

    int top() {
        if (empty())
        {
            // cout << "Stack is empty" << "\n";
            throw runtime_error("Stack is empty");
        }
        else {
            return arr[index];
        }
    }

};
int main() {
    Stack s;

    for (int i = 0; i < 5; i++) {
        s.push(i);
    }

    cout << "Size : " << s.size() << "\n";

    for (; !s.empty(); s.pop()) {

        cout << s.top() << "\n";
    }
}