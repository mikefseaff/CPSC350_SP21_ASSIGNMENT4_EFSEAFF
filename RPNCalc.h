#ifndef RPNCALC_H
#define RPNCALC_H
#include "GenStack.h"
//class that calculates the answer to equations using a stack
class RPNCalc{
    public:
        //default constructor
        RPNCalc();
        //destructor
        ~RPNCalc();
        //equation solver if final operator is addition
        int Add();
        //equation solver if final operator is subraction
        int Subtract();
        //equation solver if final operator is multiplication
        int Multiply();
        //equation solver if final operator is division
        int Divide();
        //equation solver if final operator is Mod
        int Mod();
        //calculates the answer to the equation
        int Calculate(string equation);
    private:
        //stack for the rpn calculator 
        GenStack<string> *myStack = new GenStack<string>;
};
#endif