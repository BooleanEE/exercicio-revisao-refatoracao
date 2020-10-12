#ifndef ENGENHEIRO_HPP_INCLUDED
#define ENGENHEIRO_HPP_INCLUDED

#include "Empregado.hpp"

class Engenheiro: public Empregado {

    public:

        int getProjetos() const { return projetos; }

        void setProjetos(int nproj) { projetos = nproj; }

        void toPrint(double valorMes) override;

    private:

        int projetos;

};

#endif
