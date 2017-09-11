#include "empresa.h"

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;



Funcionario::Funcionario(string _nome, string _cpf, double _salario, string _dataAdmissao){
    nome = _nome;
    cpf = _cpf;
    salario = _salario;
    dataAdmissao = _dataAdmissao;
}

string
Funcionario::getNome(){
    return nome;
}

void
Funcionario::setNome(string _nome){
    nome = _nome;
}

string
Funcionario::getCpf(){
    return cpf;
}

void
Funcionario::setCpf(string _cpf){
    cpf = _cpf;
}

double
Funcionario::getSalario(){
    return salario;
}

void
Funcionario::setSalario(double _salario){
    salario = _salario;
}

string
Funcionario::getDataAdmissao(){
    return dataAdmissao;
}

void
Funcionario::setDataAdmissao(string _dataAdmissao){
    dataAdmissao = _dataAdmissao;
}

std::ostream&
operator<< (std::ostream &_ostream, Funcionario &_funcionario){
    _ostream << _funcionario.nome << " | "
             << _funcionario.cpf << " | "
             << _funcionario.salario << "| "
             << _funcionario.dataAdmissao;
    return _ostream;
}

bool
operator ==(const Funcionario _funcionario1, const Funcionario _funcionario2){
    return _funcionario1.cpf == _funcionario2.cpf;
}



Empresa::Empresa(string _nome, string _cnpj){
    nome = _nome;
    cnpj = _cnpj;
}

string
Empresa::getNome(){
    return nome;
}

void
Empresa::setNome(string _nome){
    nome = _nome;
}

string
Empresa::getCnpj(){
    return cnpj;
}

void
Empresa::setCnpj(string _cnpj){
    cnpj = _cnpj;
}

bool
Empresa::addFuncionario(Funcionario* _funcionario){
    for (unsigned int i = 0; i < funcionarios.size(); i++){
        if (funcionarios[i]->getCpf() == _funcionario->getCpf()){
            return false;
        }
    }
    funcionarios.push_back(_funcionario);
    return true;
}

int
Empresa::getQtdDeFuncionarios(){
    return funcionarios.size();
}

void
Empresa::coutTodosOsFuncionarios(){
    for (unsigned int i = 0; i < funcionarios.size(); i++){
        std::cout << funcionarios[i] << std::endl;
    }
}

void
Empresa::coutFuncionariosEmExperiencia(){
    for (unsigned int i = 0; i < funcionarios.size(); i++){
        std::cout << funcionarios[i] << std::endl;
    }
}

std::ostream&
operator<< (std::ostream &_ostream, Empresa &_empresa){
    _ostream << _empresa.nome;
    return _ostream;
}
