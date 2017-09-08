#include <iostream>
#include "aluno.h"

Aluno::Aluno(){
    nome = "";
    matricula = "";
}

Aluno::~Aluno(){

}

Aluno::Aluno(std::string _matricula, std::string _nome){
    matricula = _matricula;
    nome = _nome;
}

std::string
Aluno::getNome(){
    return nome;
}

std::string
Aluno::getMatricula(){
    return matricula;
}


std::ostream& operator<< (std::ostream &_ostream, Aluno &_aluno){
    _ostream << _aluno.nome;
    return _ostream;
}

AlunoTurma::AlunoTurma(){
    discente = NULL;
    faltas = 0;
    nota = 0;
}

AlunoTurma::~AlunoTurma(){
    delete discente;
}

AlunoTurma::AlunoTurma(Aluno* _discente, int _faltas, double _nota){
    discente = _discente;
    faltas = _faltas;
    nota = _nota;
}

Aluno*
AlunoTurma::getDiscente(){
    return discente;
}

int
AlunoTurma::getFaltas(){
    return faltas;
}

double
AlunoTurma::getNota(){
    return nota;
}

std::ostream& operator<< (std::ostream &_ostream, AlunoTurma &_aluno){
    _ostream << *(_aluno.discente)
             << " - Na turma: {Faltas: " << _aluno.faltas 
             << " | Nota: " << _aluno.nota << "}" ;
    return _ostream;
}
