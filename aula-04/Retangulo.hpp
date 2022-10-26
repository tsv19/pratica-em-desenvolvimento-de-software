#ifndef RETANGULO_HPP
#define RETANGULO_HPP

    class Retangulo {
        public:
            Retangulo();
            Retangulo(double novoL, double novoB);

            double calcularArea(double lado, double base);
            double calcularPerimetro(double lado, double base);            

            
            double getLados();
                void setLados(double novoL);

            double getBases();
            void setBases(double novoB);

        private:
            double lados;
            double bases;
    };

#endif
