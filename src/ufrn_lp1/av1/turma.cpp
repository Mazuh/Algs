#include <iostream>
#include "turma.h"

Turma::Turma() {}

Turma::~Turma() {}

int
Turma::addAluno(AlunoTurma _aluno) {
    /* Adiciona um aluno na lista de alunos */
    alunos.push_back(new AlunoTurma(_aluno.getDiscente(), _aluno.getFaltas(), _aluno.getNota()));
    return -1;
}

Aluno* 
Turma::buscaAlunoPorNome (std::string _nome) {
    /* Busca por um aluno na lista de alunos com o nome indicado. 
       Retorna um apontador para o objeto aluno se encontrado. 
       Retorna nulo, caso não encontre um aluno com o nome indicado. */
    for (auto aluno = alunos.begin(); aluno < alunos.end(); ++aluno){
        if ((*aluno)->getDiscente()->getNome() == _nome){
            return (*aluno)->getDiscente();
        }
    }
    return NULL;
}

Aluno* 
Turma::buscaAlunoPorMatricula (std::string _matricula) {
    /* Busca por um aluno na lista de alunos com a matricula indicada. 
       Retorna um apontador para o objeto aluno se encontrado. 
       Retorna nulo, caso não encontre um aluno com a matricula indicada. */
    for (auto aluno = alunos.begin(); aluno < alunos.end(); ++aluno){
        if ((*aluno)->getDiscente()->getMatricula() == _matricula){
            return (*aluno)->getDiscente();
        }
    }
    return NULL;
}

int 
Turma::removeAlunoPorNome (std::string _nome) {
    /* Remove o aluno com o nome indicado.
       Retorna 0 caso o aluno seja encontrado e removido com sucesso.
       Retorna -1 em caso contrário.
       Dica: Para remover um elemento do vetor, utilize o metodo erase().
    */
    for (auto aluno = alunos.begin(); aluno < alunos.end();){
        if ((*aluno)->getDiscente()->getNome() == _nome){
            delete *aluno;
            alunos.erase(aluno);
            return 0;
        } else{
            ++aluno;
        }
    }
    return -1;
}

int 
Turma::removeAlunoPorMatricula (std::string _matricula) {
    /* Remove o aluno com a matricula indicada.
       Retorna 0 caso o aluno seja encontrado e removido com sucesso.
       Retorna -1 em caso contrário.
       Dica: Para remover um elemento do vetor, utilize o metodo erase().
    */
    for (auto aluno = alunos.begin(); aluno < alunos.end();){
        if ((*aluno)->getDiscente()->getMatricula() == _matricula){
            delete *aluno;
            alunos.erase(aluno);
            return 0;
        } else{
            ++aluno;
        }
    }
    return -1;
}

void 
Turma::listaAlunos() {
    /* Lista os dados de todos os alunos da turma, incluindo o total de faltas e nota.
    Utilize a sobrecarga do operador de inserção para a impressão dos dados do aluno.
    Deve listar ainda a quantidade de alunos e a média das notas dos alunos nesta turma.
    */
    std::cout << "-------------------------------------" << std::endl
              << "Há " << alunos.size() << " alunos na turma." << std::endl
              << "A média geral de suas notas é " << media() << "." << std::endl
              << "Lista: " << std::endl;
    for (auto aluno = alunos.begin(); aluno < alunos.end(); ++aluno){
        std::cout << "\t" << **aluno << std::endl;
    }
    std::cout << "-------------------------------------" << std::endl;
}

double
Turma::media(){
    double somatorio = 0;
    for (auto aluno = alunos.begin(); aluno < alunos.end(); ++aluno){
        somatorio += (*aluno)->getNota();
    }
    return somatorio / alunos.size();
}
