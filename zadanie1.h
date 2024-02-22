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
    // Przeszteń nazw dla stosu
    namespace stos {
        template<typename T>
        void displayStack(const stack<T>& s);

        template<typename T>
        void operateOnStack(stack<T>& myStack);
    }
    // Przeszteń nazw dla kolejki
    namespace kolejka {
        template<typename T>
        void displayQueue(const queue<T>& q);

        template<typename T>
        void operateOnQueue(queue<T>& myQueue);
    }
    // Przeszteń nazw dla wektora
    namespace wektor {
        template<typename T>
        void displayVector(const vector<T>& v);

        template<typename T>
        void operateOnVector(vector<T>& myVector);
    }
}
/**
     * @brief Funkcje dla zadania pierwsze
     *
     *  Przestrzeń nazw zad1 zawiera menu, oraz przestrzenie nazw dla stosu, kolejki i wektora
     *  Menu zawiera prosty interfejs tekstowy, gdzie użytkownik wybiera jaką zmienną chce zrobić
     *  między wektorem, kolejką i stosem. Następnie mam podział na przestrzenie nazw:
     *  stos
     *  kolejka
     *  wektor
     *  Każda z przestrzeni nazw ma podobne funkcje displayNAZWA_STRUKTURY_DANYCH
     *  i operateOnNAZWA_STRUKTURY_DANYCH
     */
