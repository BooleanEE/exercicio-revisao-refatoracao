#ifndef VENDEDOR_HPP_INCLUDED
#define VENDEDOR_HPP_INCLUDED

#include "Empregado.hpp"

class Vendedor : public Empregado {

    public:

        double getQuotaMensalVendas() const { return quotaMensalVendas; }

        void setQuotaMensalVendas(double venda) { quotaMensalVendas = venda; }

        double quotaTotalAnual();

        void toPrint(double valorMes) override;

    private:

        double quotaMensalVendas;

};

#endif
