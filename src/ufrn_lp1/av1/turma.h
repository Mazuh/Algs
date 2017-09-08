#ifndef _TURMA_H_
#define _TURMA_H_

#include "aluno.h"
#include <vector>

class Turma
{
private:
    std::vector<AlunoTurma*> alunos;
public:
    Turma();
    ~Turma();
    int addAluno(AlunoTurma _aluno);
    Aluno* buscaAlunoPorNome (std::string _nome);
    Aluno* buscaAlunoPorMatricula (std::string _matricula);
    int removeAlunoPorNome (std::string _nome);
    int removeAlunoPorMatricula (std::string _matricula);
	void listaAlunos();
	double media();
};

#endif