#ifndef _EMPRESA_H_
#define _EMPRESA_H_

#include <vector>
#include <string>

using std::string;
using std::vector;

class Funcionario{
private:
    string nome;
    string cpf;
    double salario;
    string dataAdmissao;

public:
    Funcionario(string _nome, string _cpf, double _salario, string _dataAdmissao);

    string getNome();
    void setNome(string _nome);

    string getCpf();
    void setCpf(string _cpf);

    double getSalario();
    void setSalario(double _salario);

    string getDataAdmissao();
    void setDataAdmissao(string _dataAdmissao);

    friend std::ostream& operator <<(std::ostream &_ostream, Funcionario &_funcionario);
    friend bool operator ==(const Funcionario _funcionario1, const Funcionario _funcionario2);
};

class Empresa{
private:
    string nome;
    string cnpj;
    vector<Funcionario*> funcionarios;
public:
    Empresa(string _nome, string _cnpj);

    string getNome();
    void setNome(string _nome);

    string getCnpj();
    void setCnpj(string _cnpj);

    bool addFuncionario(Funcionario* _funcionario);
    int getQtdDeFuncionarios();

    void coutTodosOsFuncionarios();
    void coutFuncionariosEmExperiencia();
    
    friend std::ostream& operator <<(std::ostream &_ostream, Empresa &_empresa);
};

#endif
