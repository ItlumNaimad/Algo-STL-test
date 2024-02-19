//
// Created by naima on 19.02.2024.
//

#include "zadanie1.h"
using namespace std;
namespace zad1 {
    void menu()
    {
        int choice;

        cout << "Menu:" << endl;
        cout << "1. Stack" << endl;
        cout << "2. Queue" << endl;
        cout << "3. Vector" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                stack<int> myStack;
                stos::operateOnStack(myStack);
                break;
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
            }
    }
    namespace stos {
        template<typename T>
        void displayStack(const stack<T> &s) {
            if (s.empty()) {
                cout << "Stack is empty" << endl;
                return;
            }

            stack<T> tempStack = s;
            cout << "Elements in the stack:" << endl;
            while (!tempStack.empty()) {
                cout << tempStack.top() << " ";
                tempStack.pop();
            }
            cout << endl;
        }

// Funkcja realizująca operacje na stosie
        template<typename T>
        void operateOnStack(stack<T> &myStack)
        {
            int option;
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

                switch (option) {
                    case 1: {
                        T value;
                        cout << "Enter value to push: ";
                        cin >> value;
                        myStack.push(value);
                        break;
                    }
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
                    case 4: {
                        int index;
                        cout << "Enter index (0-based) to get element: ";
                        cin >> index;
                        if (index >= 0 && index < myStack.size()) {
                            stack<int> tempStack = myStack;
                            for (int i = 0; i < index; ++i) {
                                tempStack.pop();
                            }
                            cout << "Element at index " << index << ": " << tempStack.top() << endl;
                        } else {
                            cout << "Invalid index" << endl;
                        }
                        break;
                    }

                    case 5: {
                        int value;
                        cout << "Enter value to check if exists: ";
                        cin >> value;
                        bool found = false;
                        stack<int> tempStack = myStack;
                        while (!tempStack.empty()) {
                            if (tempStack.top() == value) {
                                found = true;
                                break;
                            }
                            tempStack.pop();
                        }
                        if (found) {
                            cout << "Element " << value << " exists in the stack" << endl;
                        } else {
                            cout << "Element " << value << " does not exist in the stack" << endl;
                        }
                        break;
                    }
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
        }
    }
}