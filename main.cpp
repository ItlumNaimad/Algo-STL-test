#include <iostream>

using namespace std;




int main() {
    int choice;

    cout << "Menu:" << endl;
    cout << "1. Stack" << endl;
    cout << "2. Queue" << endl;
    cout << "3. Vector" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            stack<int> myStack;
            int option;
            int value, index;

            do {
                cout << "\nStack Operations:" << endl;
                cout << "1. Push" << endl;
                cout << "2. Pop" << endl;
                cout << "3. Top" << endl;
                cout << "4. Get Nth element" << endl;
                cout << "5. Check if element exists" << endl;
                cout << "6. Size" << endl;
                cout << "7. Check if empty" << endl;
                cout << "8. Display elements" << endl;
                cout << "9. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> option;

                switch(option) {
                    case 1:
                        cout << "Enter value to push: ";
                        cin >> value;
                        myStack.push(value);
                        break;
                    case 2:
                        if (!myStack.empty()) {
                            myStack.pop();
                            cout << "Element popped successfully" << endl;
                        } else {
                            cout << "Stack is empty, cannot pop" << endl;
                        }
                        break;
                    case 3:
                        if (!myStack.empty()) {
                            cout << "Top element: " << myStack.top() << endl;
                        } else {
                            cout << "Stack is empty" << endl;
                        }
                        break;


                    case 6:
                        cout << "Size of stack: " << myStack.size() << endl;
                        break;
                    case 7:
                        if (myStack.empty()) {
                            cout << "Stack is empty" << endl;
                        } else {
                            cout << "Stack is not empty" << endl;
                        }
                        break;
                    case 8:
                        displayStack(myStack);
                        break;
                    case 9:
                        cout << "Exiting..." << endl;
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
            } while (option != 9);

            break;
        }
        case 2: {

            queue<int> myQueue;
            displayQueue(myQueue);
            break;
        }
        case 3: {
            vector <int> myVector;
            displayVector(myVector);
            break;
        }
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
