//
// Created by naima on 22.02.2024.
//

#include "zadanie2.h"

using namespace std;
#include <iostream>
#include <stack>

using namespace std;

namespace zad2 {
    // Funkcja pokazująca stosy
    void displayStack(stack<int>& s) {
        if (s.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        stack<int> tempStack = s;

        cout << "Elements in the stack:" << endl;
        while (!tempStack.empty()) {
            cout << tempStack.top() << " ";
            tempStack.pop();
        }
        cout << endl;
    }
    // Ta funkcja pokazuje wszystkie wieże hanoi za pomocą funkcji displayStack
    void displayHanoiTowers(stack<int>& towerA,  stack<int>& towerB,  stack<int>& towerC) {
        cout << "Tower A: ";
        zad2::displayStack(towerA);
        cout << "Tower B: ";
        zad2::displayStack(towerB);
        cout << "Tower C: ";
        zad2::displayStack(towerC);
    }
    // Funkcja pomocnicza do przenoszenia dysków między stosami
    void moveDisk(stack<int> &from, stack<int> &to, char fromTower, char toTower) {
        int topDisk = from.top();
        from.pop();
        to.push(topDisk);
        cout << "Move disk " << topDisk << " from Tower " << fromTower << " to Tower " << toTower << endl;
    }

    // Funkcja pozwalająca użytkownikowi na ręczne rozwiązywanie łamigłówki Wieży Hanoi
    void hanoi() {
        int n;
        cout << "Enter number of disks: ";
        cin >> n;

        stack<int> towerA, towerB, towerC;

        // Wypełnij pierwszą wieżę dyskami w kolejności malejącej
        for (int i = n; i >= 1; --i) {
            towerA.push(i);
        }

        cout << "Initial configuration:" << endl;
        cout << "Tower A: ";
        zad2::displayStack(towerA);
        cout << endl << "Tower B: " << endl << "Tower C: " << endl;
        // Wartość logiczna wskazująca, czy użytkownik chce kontynuować grę
        bool continueGame = true;

        while (continueGame) {
            // Wybór wież
            char from, to;
            cout << "Enter tower to move from (A, B, C): ";
            cin >> from;
            cout << "Enter tower to move to (A, B, C): ";
            cin >> to;
            if(from=='a') from='A';
            if(from=='b') from='B';
            if(from=='c') from='C';
            if(to=='a') to='A';
            if(to=='b') to='B';
            if(to=='c') to='C';
            // Wykonanie ruchu
            switch (from) {
                case 'A':
                    switch (to) {
                        case 'B':
                            moveDisk(towerA, towerB, 'A', 'B');
                            break;
                        case 'C':
                            moveDisk(towerA, towerC, 'A', 'C');
                            break;
                        default:
                            cout << "Invalid move" << endl;
                            break;
                    }
                    break;
                case 'B':
                    switch (to) {
                        case 'A':
                            moveDisk(towerB, towerA, 'B', 'A');
                            break;
                        case 'C':
                            moveDisk(towerB, towerC, 'B', 'C');
                            break;
                        default:
                            cout << "Invalid move" << endl;
                            break;
                    }
                    break;
                case 'C':
                    switch (to) {
                        case 'A':
                            moveDisk(towerC, towerA, 'C', 'A');
                            break;
                        case 'B':
                            moveDisk(towerC, towerB, 'C', 'B');
                            break;
                        default:
                            cout << "Invalid move" << endl;
                            break;
                    }
                    break;
                default:
                    cout << "Invalid tower" << endl;
                    break;
            }

            // Wyświetlenie aktualnej konfiguracji wież
            cout << "Current configuration:" << endl;
            cout << "Tower A: ";
            zad2::displayHanoiTowers(towerA, towerB, towerC);

            // Sprawdzenie, czy użytkownik chce kontynuować grę
            char choice;
            cout << "Continue? (Y/N): ";
            cin >> choice;
            continueGame = (choice == 'Y' || choice == 'y');
        }
    }
}

