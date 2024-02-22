//
// Created by naima on 22.02.2024.
//
#pragma once

#include <iostream>
#include <stack>

using namespace std;
// Przestrzeń nazw dla zadania drugiego
namespace zad2
{
    void displayStack(stack<int>& s);

    void displayHanoiTowers(stack<int>& towerA,  stack<int>& towerB,  stack<int>& towerC);
    /**
      * @brief Funkcja wyświetlająca zawartość wszystkich wież Hanoi.
      *
      * @param towerA Pierwsza wieża Hanoi.
      * @param towerB Druga wieża Hanoi.
      * @param towerC Trzecia wieża Hanoi.
      */
    void moveDisk(stack<int> &from, stack<int> &to, char fromTower, char toTower);
    /**
     * @brief moveDisk Funkcja pomocnicza do przenoszenia dysków między stosami.
     *
     * @param from Stos, z którego dysk ma zostać przeniesiony.
     * @param to Stos, na który dysk ma zostać przeniesiony.
     * @param fromTower Nazwa wieży, z której dysk ma zostać przeniesiony.
     * @param toTower Nazwa wieży, na którą dysk ma zostać przeniesiony.
     */

    void hanoi();
    /**
     * @brief Funkcja pozwalająca użytkownikowi na ręczne rozwiązywanie łamigłówki Wieży Hanoi.
     *
     * Funkcja umożliwia interaktywne rozwiązywanie łamigłówki Wieży Hanoi przez użytkownika.
     * Użytkownik wprowadza liczbę dysków, a następnie może wykonywać ruchy, przenosząc dyski
     * między wieżami, zgodnie z zasadami łamigłówki. Po każdym ruchu aktualna konfiguracja wież
     * jest wyświetlana, a użytkownik może zdecydować, czy chce kontynuować grę, czy zakończyć ją.
     *
     * Algorytm rozwiązywania łamigłówki:
     *
     * 1. Użytkownik wprowadza liczbę dysków.
     * 2. Tworzone są trzy wieże (stosy) oznaczone jako A, B i C. Pierwsza wieża (A) zawiera wprowadzoną liczbę dysków
     *    ustawionych w kolejności malejącej.
     * 3. Użytkownik może wykonywać ruchy, przenosząc dyski między wieżami, zgodnie z zasadami łamigłówki.
     * 4. Po każdym ruchu aktualna konfiguracja wież jest wyświetlana.
     * 5. Użytkownik ma możliwość kontynuacji gry lub zakończenia jej.
     *
     * Parametry:
     * - towerA, towerB, towerC: Stosy reprezentujące wieże A, B i C.
     * - from, to: Zmienne przechowujące informację o wieżach, z których i na które wykonany jest ruch.
     * - continueGame: Zmienna logiczna wskazująca, czy użytkownik chce kontynuować grę.
     * - choice: Zmienna przechowująca wybór użytkownika dotyczący kontynuacji gry.
     */
}