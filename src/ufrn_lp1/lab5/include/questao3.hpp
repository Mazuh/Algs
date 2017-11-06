/**
* @brief Comporta as implementações dos utilitários da questão 3.
*/
#include <iterator>

/**
* @brief Functor para verificar se um número é primo.
*/
class isPrime{
public:
    /**
    * @brief Executa a operação predicate.
    * @param[in] num Número a ser checado
    * @return true apenas se num for 2 ou um positivo >=3 sem divisor
    */
    bool operator()(long num) {
        if (num <= 0)
            return false;
        if (num == 1)
            return false;
        
        if (num % 2 == 0){
            if (num == 2)
                return true;
            else
                return false;
        }

        for (long int i = 3; i <= num/2; i+=2){
            if (num % i == 0)
                return false;
        }

        return true;
    }
};
