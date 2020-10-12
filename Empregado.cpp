#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {

    if (horasTrabalhadas > HORAS_REGULARES) {

        double extra = horasTrabalhadas - HORAS_REGULARES;

        horasTrabalhadas += FATOR_HORA_EXTRA * extra;

    }

    return  horasTrabalhadas * getSalarioHora();

}
