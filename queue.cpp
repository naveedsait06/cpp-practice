#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int choice, value;

    while(true) {
        cout << "\n1.Enqueue 2.Dequeue 3.Front 4.Display 5.Exit\nChoice: ";
        cin >> choice;
        if(choice == 1) {
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.push(value);
        } else if(choice == 2) {
            if(q.empty()) cout << "Queue is empty!";
            else {
                cout << "Dequeued: " << q.front();
                q.pop();
            }
        } else if(choice == 3) {
            if(q.empty()) cout << "Queue is empty!";
            else cout << "Front element: " << q.front();
        } else if(choice == 4) {
            if(q.empty()) cout << "Queue is empty!";
            else {
                queue<int> temp = q;
                cout << "Queue elements: ";
                while(!temp.empty()) {
                    cout << temp.front() << " ";
                    temp.pop();
                }
            }
        } else break;
    }
    return 0;
}
