#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

    public:

        double getSalarioHora() const { return salarioHora; }

        std::string getNome() { return nome; }

        void setSalarioHora(double valor) { salarioHora = valor; }

        void setNome(std::string n) { nome = n; }

        const int HORAS_REGULARES = 8;

        const double FATOR_HORA_EXTRA = 0.5;

        const int MES_ANO = 12;

        double pagamentoMes(double horasTrabalhadas);

        virtual void toPrint(double valorMes) = 0;

    private:

        double salarioHora;

        std::string nome;

};

#endif
