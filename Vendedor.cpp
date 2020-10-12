#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"


double Vendedor::quotaTotalAnual() {

    return getQuotaMensalVendas() * MES_ANO;

}

void Vendedor::toPrint(double valorMes) {

    std::cout << "Nome: " << getNome() << std::endl;

    std::cout << "Salario Mes: " << pagamentoMes(valorMes) << std::endl;

    std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;

    std::cout << std::endl;

}


