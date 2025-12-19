#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> stack;
    int choice, value;

    while(true) {
        cout << "\n1.Push 2.Pop 3.Peek 4.Display 5.Exit\nChoice: ";
        cin >> choice;
        if(choice == 1) {
            cout << "Enter value to push: ";
            cin >> value;
            stack.push_back(value);
        } else if(choice == 2) {
            if(stack.empty()) cout << "Stack is empty!";
            else {
                cout << "Popped: " << stack.back();
                stack.pop_back();
            }
        } else if(choice == 3) {
            if(stack.empty()) cout << "Stack is empty!";
            else cout << "Top element: " << stack.back();
        } else if(choice == 4) {
            if(stack.empty()) cout << "Stack is empty!";
            else {
                cout << "Stack elements: ";
                for(int i : stack) cout << i << " ";
            }
        } else break;
    }
    return 0;
}
