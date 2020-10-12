#include "Empregado.hpp"
#include "Engenheiro.hpp"

void Engenheiro::toPrint(double valorMes) {

    std::cout << "Nome: " << getNome() << std::endl;

    std::cout << "Salario Mes: " << pagamentoMes(valorMes) << std::endl;

    std::cout << "Projetos: " << getProjetos() << std::endl;

    std::cout << std::endl;

}
