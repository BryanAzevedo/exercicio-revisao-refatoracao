#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  private:   
     
    double salarioHora; 
	
  public:
    double quotaMensalVendas;

    double getSalario(){
      return salarioHora;
    }

    void setSalario(double salario){
     salarioHora = salario; 
    }

 

    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double extra = horasTrabalhadas - 8;
        t += extra / 2;
      }
	  return t * salarioHora;
    }
	
};

#endif