#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <set>

#include "questao1.hpp"
#include "questao2.hpp"
#include "questao3.hpp"

using std::cout;
using std::endl;

void test_q1();
void test_q2();
void test_q3();

/**
 * @brief Execução principal, rodando os testes das questões.
 */
int main(){
    cout << "LAB5/LP1" << endl << endl;
    test_q1();
    cout << endl;
    test_q2();
    cout << endl;
    test_q3();
    return 0;
}

/**
 * @brief Questão 1.
 */
void test_q1(){
    cout << "Testes unitários da `closest2mean`" << endl;

    cout << "Cenário com vector... ";
    std::vector<int> v = {1, 2, 3, 30, 40, 50};
    auto rv = *closest2mean(v.begin(), v.end());
    if (rv == 30)
        cout << "OK." << endl;
    else
        cout << "Falhou. Esperava 30, obteve " << rv << "." << endl;

    cout << "Cenário com set... ";
    std::set<int> s = {50, 40, 30, 3, 2, 1};
    auto rs = *closest2mean(s.begin(), s.end());
    if (rs == 30)
        cout << "OK." << endl;
    else
        cout << "Falhou. Esperava 30. " << rs << "." << endl;

    cout << "Cenário com list... ";
    std::list<float> l = {5.5, 355, 42, 30, -1};
    auto rl = *closest2mean(l.begin(), l.end());
    if (rl == 42)
        cout << "OK." << endl;
    else
        cout << "Falhou. Esperava 42 (keep calm!), obteve " << rl << "." << endl;
}

/**
 * @brief Questão 2.
 */
void test_q2(){
    cout << "Testes de impressão da `print_numbers`" << endl;
    std::set<int> numbers;
    numbers.insert(3);
    numbers.insert(1);
    numbers.insert(4);
    numbers.insert(1);
    numbers.insert(2);
    numbers.insert(5);
    print_elements(numbers, "Set: ");
    print_elements(numbers, "CSV Set: ", ';');
}

/**
 * @brief Questão 3.
 */
void test_q3(){
    cout << "Testes de impressão com uso do predicado `isPrime`" << endl;
    
    std::vector<int> v = {0, 1, 22, 2, 3, 30, 40, 11, 50, 13, 15, 80, 101};
    isPrime isPrime;

    auto found = std::find_if(v.begin(), v.end(), isPrime);
    while (found != v.end()){
        cout << *found << ' ';
        std::advance(found, 1);
        found = std::find_if(found, v.end(), isPrime);
    }
    cout << endl;
}
