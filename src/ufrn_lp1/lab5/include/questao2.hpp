/**
* @brief Comporta as implementações dos utilitários da questão 2.
*/
#include <iostream>
#include <iterator>

/**
* @brief Imprime os elementos lineares de uma coleção.
* @param[in] collection Container de elementos a serem impressos
* @param[in] label String que surgirá no início da impressão
* @param[in] separator Caractere que ficará entre um elemento impresso e outro
*/
template<typename TContainer>
void print_elements(const TContainer& collection,
                    const char* label="",
                    const char separator=' ',
                    const char ending='\n'){
    std::cout << label;
    
    for (auto it = collection.begin(); it != collection.end(); it++){
        std::cout << *it;

        std::advance(it, 1);
        if (it == collection.end()){
            if (ending=='\n')
                std::cout << std::endl;
            else
                std::cout << ending;
        } else{
            std::cout << separator;
        }
        std::advance(it, -1);
    }
}
