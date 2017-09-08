#include <iostream>
#include "turma.h"

int main(int argc, char const *argv[])
{
    Turma t;
    t.addAluno(AlunoTurma(new Aluno("00001.2017","Paulo"),4,7.30));
    t.addAluno(AlunoTurma(new Aluno("00002.2017","Maria Luiza"),0,5.70));
    t.addAluno(AlunoTurma(new Aluno("00005.2017","Adrina Ribeiro"),6,9.75));
    t.listaAlunos();
    Aluno* encontrado = t.buscaAlunoPorNome("Maria Luiza");
    if (encontrado) {
        std::cout << encontrado->getNome() << " encontrado." << std::endl;
    } else {
        std::cout << " Aluno nao encontrado." << std::endl;
    }
    t.removeAlunoPorNome("Maria Luiza");
    t.listaAlunos();
    encontrado = t.buscaAlunoPorNome("Maria Luiza");
    if (encontrado) {
        std::cout << encontrado->getNome() << " encontrado." << std::endl;
    } else {
        std::cout << "Aluno nao encontrado." << std::endl;
	}
    return 0;
}