#include <iostream>
#include <cstdlib>
#include<time.h>
#include<unordered_set>
int main() {
    setlocale(0, "");
    using namespace std;
    //system("color CA");
    time_t currentTime = time(0);
    srand(currentTime);
    int start;
    unordered_set<int> pls;
    int pl;
    int comp1, comp2, comp3;
    cout << "УГАДАЙКА!" << endl;
    cout << "[1]Начать игру\n [2] Выйти\n"; cin >> start;
    int n1{ 0 }, n2{ 3 }, n3{ 5 }; // счетчики
    cout << "[ + ] Угаданных чисел: [0/3]" << endl;
    cout << "[ + ] Попыток: [5]" << endl;
    comp1 = rand() % 10 + 1;
    do { comp2 = rand() % 10 + 1; } while (comp1 == comp2);
    do { comp3 = rand() % 10 + 1; } while (comp3 == comp1 or comp3 == comp2);
    while (start == 1) {
        while (n3 != 0) {
                
                cout << "[ > ] Угадать число: ";  cin >> pl;

                if (pls.count(pl) > 0) {
                    cout << "Вы уже ввели это число, введите другое число." << endl;
                
                
                }
                else {
                    pls.insert(pl);
                }
            
           


            if (pl == comp1 or pl == comp2 or pl == comp3) {
                cout << "Вы угадали одно из чисел!" << endl;
                cout << "[ + ] Попыток: [" << n3 << "]" << endl;
                cout << "[ + ] Угаданных чисел: [" << ++n1 << "/" << n2 << "]" << endl;
                
                if (n1 == 3) {
                    cout << "Вы выиграли!" << endl; int _; cin >> _;
                    exit(0);
                }
            }
            else if (pl < 0 or pl > 10) {
                cout << "Нет такого числа в диапазоне" << endl;
            }
            else {
                cout << "Вы не угадали число!" << endl;
                cout << "[ + ] Попыток: [" << --n3 << "]" << endl;
                
            }
        }cout << "Вы проиграли!"; int _; cin >> _;
        exit(0);

    }
    int _; cin >> _;
}
