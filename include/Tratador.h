/* 
Class: Tratador
Author: Arnaldo Barbosa    
*/
#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include"Funcionario.h"
#include<string>
#include<iostream>
#include<fstream>

class Tratador : public Funcionario{
    protected:
        /**
         * @brief Define a forma como o texto do Tratador será armazenado no banco.
         * 
         * @param id 
         * @return std::string 
         */
        std::string printInFile(int id);
    private:
        int m_nivel_de_seguranca; /*< Define o nível de segurança do Tratador.*/
    public:
        /**
         * @brief Constrói um novo objeto do tipo Tratador.
         * 
         */
        Tratador();

        /**
         * @brief Constrói um novo objeto do tipo Tratador.
         * 
         * @param id 
         * @param nome 
         * @param cpf 
         * @param idade 
         * @param tipo_sanguineo 
         * @param fator_rh 
         * @param especialidade 
         * @param nivel_de_seguranca 
         */
        Tratador(int id, std::string nome, std::string cpf, short idade, short tipo_sanguineo, char fator_rh, std::string especialidade, int nivel_de_seguranca);
        
        /**
         * @brief Constrói um novo objeto do tipo Tratador.
         * 
         * @param nome 
         * @param cpf 
         * @param idade 
         * @param tipo_sanguineo 
         * @param fator_rh 
         * @param especialidade 
         * @param nivel_de_seguranca 
         */
        Tratador(std::string nome, std::string cpf, short idade, short tipo_sanguineo, char fator_rh, std::string especialidade, int nivel_de_seguranca);
        
        /**
         * @brief Destrói o Tratador.
         * 
         */
        ~Tratador(){};

        /**
         * @brief Retorna o membro Nivel De Seguranca do Tratador.
         * 
         * @return int 
         */
        int getNivelDeSeguranca();
        
        /**
         * @brief Define o Nivel De Seguranca do Tratador.
         * 
         * @param nivel_de_seguranca 
         */
        void setNivelDeSeguranca(int nivel_de_seguranca);
};
    
#endif