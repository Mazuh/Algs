/**
* @brief Comporta as implementações dos utilitários da questão 1.
*/
#include <iterator>
#include <numeric>
#include <cmath>

/**
* @brief Localiza o valor mais próximo da média aritmética dos elementos
* cujo índice está em [first, last).
* @param[in] first Inicio do intervalo.
* @param[in] last Fim do intervalo.
* @return Iterador para o elemento mais próximo da média encontrado.
*/
template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last) {
    double sum = std::accumulate(first, last, 0);
    double qtt = std::distance(first, last);
    double mean = sum / qtt;

    auto closestIt = first;
    for (auto it = first; it != last; it++){
        if (std::abs(*it - mean) < std::abs(*closestIt - mean)){
            closestIt = it;
        }
    }

    return closestIt;
}