#include "../../include/Tratador.h"

Tratador::Tratador(int id, std::string nome, std::string cpf, short idade, std::string tipo_sanguineo, char fator_rh, std::string especialidade, int nivel_de_seguranca){
    m_id = id;
    m_nome = nome;
    m_cpf = cpf;
    m_idade = idade;
    m_tipo_sanguineo = tipo_sanguineo;
    m_fator_rh = fator_rh;
    m_especialidade = especialidade;
    m_nivel_de_seguranca = nivel_de_seguranca;

}
Tratador::Tratador(std::string nome, std::string cpf, short idade, std::string tipo_sanguineo, char fator_rh, std::string especialidade, int nivel_de_seguranca): Funcionario(nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade){
    m_nivel_de_seguranca = nivel_de_seguranca;
}

//DAO
std::string Tratador::printInFile(int id){
    std::stringstream ss;
    ss<<id<<';'<<"Tratador"<<';'<<m_nome<<';'<<m_cpf<<';'<<m_idade<<';'<<m_tipo_sanguineo<<';'<<m_fator_rh<<';'<<m_especialidade<<';'<<';'<<m_nivel_de_seguranca<<std::endl;
    std::string s = ss.str();
    return s;
}

//getters
int Tratador::getNivelDeSeguranca(){
    return m_nivel_de_seguranca;
}

//setters
void Tratador::setNivelDeSeguranca(int nivel_de_seguranca){
    m_nivel_de_seguranca = nivel_de_seguranca;
}

std::ostream& Tratador::print(std::ostream& os) const{
    return os<<std::endl
        <<"================= Tratador ==================="<<std::endl
        <<"ID                    | "<<m_id<<std::endl
        <<"Nome                  | "<<m_nome<<std::endl
        <<"CPF                   | "<<m_cpf<<std::endl
        <<"Idade                 | "<<m_idade<<std::endl
        <<"Típo Sanguíneo        | "<<m_tipo_sanguineo<<std::endl
        <<"Fator RH              | "<<m_fator_rh<<std::endl
        <<"Especialidade         | "<<m_especialidade<<std::endl
        <<"Nível de Segurança    | "<<m_nivel_de_seguranca<<std::endl;
}

std::istream& Tratador::read(std::istream& is){
    std::cout << "Nível de Segurança: ";
    is>>m_nivel_de_seguranca;
    return is;
}

// std::ostream& operator << (std::ostream& os, Tratador& tratador){
    // os<<std::endl
    //     <<"Tratador: "                <<tratador.getNome()<<std::endl
    //     <<"   => CPF: "               <<tratador.getCpf()<<std::endl
    //     <<"   => Idade: "             <<tratador.getIdade()<<std::endl
    //     <<"   => Típo Sanguíneo: "    <<tratador.getIdade()<<std::endl
    //     <<"   => Fator RH: "          <<tratador.getFatorRh()<<std::endl
    //     <<"   => Especialidade: "     <<tratador.getEspecialidade()<<std::endl
    //     <<"   => Nível de Segurança: "<<tratador.getNivelDeSeguranca()<<std::endl
    //     <<std::endl;
        
//     return os;
// }

