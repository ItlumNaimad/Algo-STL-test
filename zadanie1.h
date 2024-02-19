// Plik: zadanie1.h
#pragma once

#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;
namespace zad1 {
    // Deklaracje funkcji dla zadania 1
    void menu();

    // Wewnątrz przestrzeni nazw zad1 można utworzyć kolejną przestrzeń nazw
    namespace stos {
        template<typename T>
        void displayStack(const stack<T>& s);

        template<typename T>
        void operateOnStack(stack<T>& myStack);
    }
}
