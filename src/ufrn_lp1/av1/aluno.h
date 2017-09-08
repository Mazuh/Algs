#ifndef _ALUNO_H_
#define _ALUNO_H_

#include <string>

class Aluno {
private:
    std::string matricula;
    std::string nome;
    int faltas;
    double nota;
public:
    Aluno();
	~Aluno();
	Aluno(std::string _matricula, std::string _nome);
    std::string getNome();
	std::string getMatricula();
	int getFaltas();
	double getNota();
	friend std::ostream& operator<< (std::ostream &_ostream, Aluno &_aluno);
};

class AlunoTurma {
private:
    Aluno* discente;
    int faltas;
    double nota;
public:
    AlunoTurma();
    ~AlunoTurma();
    AlunoTurma(Aluno* _discente, int _faltas, double _nota);
    Aluno* getDiscente();
	int getFaltas();
	double getNota();
	friend std::ostream& operator<< (std::ostream &_ostream, AlunoTurma &_aluno);
};

#endif