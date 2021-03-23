#include "RPNCalc.h"
//class that calculates the answer to equations using a stack

//default constructor
RPNCalc::RPNCalc(){
    
}
//destructor
RPNCalc::~RPNCalc(){
    delete myStack;
}
 //equation solver if final operator is addition
int RPNCalc::Add(){
    //first node in sequence
    int first = 0;
    int second = 0;
    int total = 0;
    string tempPeek = myStack->peek();
    if (tempPeek == "+"){
        myStack->pop();
        first = Add();
    }
    else if (tempPeek == "-"){
        myStack->pop();
        first = Subtract();
    }
    else if (tempPeek == "*"){
        myStack->pop();
        first = Multiply();
    }
    else if (tempPeek == "/"){
        myStack->pop();
        first = Divide();
    }
    else if (tempPeek == "%"){
        myStack->pop();
        first = Mod();
    }
    else{
        try{
            first = stoi(tempPeek);
        }
        catch (const std::invalid_argument& e ){
            cout << "Invalid input in equation" << endl;
            cout << "THROWING EXCEPTION" << endl;
            throw;
        }
        
        myStack->pop();
    }
    //second node
    tempPeek = myStack->peek();
    if (tempPeek == "+"){
        myStack->pop();
        second = Add();
    }
    else if (tempPeek == "-"){
        myStack->pop();
        second = Subtract();
    }
    else if (tempPeek == "*"){
        myStack->pop();
        second = Multiply();
    }
    else if (tempPeek == "/"){
        myStack->pop();
        second = Divide();
    }
    else if (tempPeek == "%"){
        myStack->pop();
        second = Mod();
    }
    else{
        try{
            second = stoi(tempPeek);
        }
        catch (const std::invalid_argument& e ){
            cout << "Invalid input in equation" << endl;
            cout << "THROWING EXCEPTION" << endl;
            throw;
        }
        
        myStack->pop();
    }
    
    total = (first + second);
    
    return total;
}
//equation solver if final operator is subraction
int RPNCalc::Subtract(){
      //first node in sequence
    int first = 0;
    int second = 0;
    int total = 0;
    string tempPeek = myStack->peek();
    if (tempPeek == "+"){
        myStack->pop();
        first = Add();
    }
    else if (tempPeek == "-"){
        myStack->pop();
        first = Subtract();
    }
    else if (tempPeek == "*"){
        myStack->pop();
        first = Multiply();
    }
    else if (tempPeek == "/"){
        myStack->pop();
        first = Divide();
    }
    else if (tempPeek == "%"){
        myStack->pop();
        first = Mod();
    }
    else{
        try{
            first = stoi(tempPeek);
        }
        catch (const std::invalid_argument& e ){
            cout << "Invalid input in equation" << endl;
            cout << "THROWING EXCEPTION" << endl;
            throw;
        }
        
        myStack->pop();
    }
    //second node
    tempPeek = myStack->peek();
    if (tempPeek == "+"){
        myStack->pop();
        second = Add();
    }
    else if (tempPeek == "-"){
        myStack->pop();
        second = Subtract();
    }
    else if (tempPeek == "*"){
        myStack->pop();
        second = Multiply();
    }
    else if (tempPeek == "/"){
        myStack->pop();
        second = Divide();
    }
    else if (tempPeek == "%"){
        myStack->pop();
        second = Mod();
    }
    else{
        try{
            second = stoi(tempPeek);
        }
        catch (const std::invalid_argument& e ){
            cout << "Invalid input in equation" << endl;
            cout << "THROWING EXCEPTION" << endl;
            throw;
        }
        
        myStack->pop();
    }
    
    total = (second - first);
    
    return total;
}
//equation solver if final operator is multiplication
int RPNCalc::Multiply(){
        //first node in sequence
    int first = 0;
    int second = 0;
    int total = 0;
    string tempPeek = myStack->peek();
    if (tempPeek == "+"){
        myStack->pop();
        first = Add();
    }
    else if (tempPeek == "-"){
        myStack->pop();
        first = Subtract();
    }
    else if (tempPeek == "*"){
        myStack->pop();
        first = Multiply();
    }
    else if (tempPeek == "/"){
        myStack->pop();
        first = Divide();
    }
    else if (tempPeek == "%"){
        myStack->pop();
        first = Mod();
    }
    else{
        try{
            first = stoi(tempPeek);
        }
        catch (const std::invalid_argument& e ){
            cout << "Invalid input in equation" << endl;
            cout << "THROWING EXCEPTION" << endl;
            throw;
        }
        
        myStack->pop();
    }
    //second node
    tempPeek = myStack->peek();
    if (tempPeek == "+"){
        myStack->pop();
        second = Add();
    }
    else if (tempPeek == "-"){
        myStack->pop();
        second = Subtract();
    }
    else if (tempPeek == "*"){
        myStack->pop();
        second = Multiply();
    }
    else if (tempPeek == "/"){
        myStack->pop();
        second = Divide();
    }
    else if (tempPeek == "%"){
        myStack->pop();
        second = Mod();
    }
    else{
        try{
            second = stoi(tempPeek);
        }
        catch (const std::invalid_argument& e ){
            cout << "Invalid input in equation" << endl;
            cout << "THROWING EXCEPTION" << endl;
            throw;
        }
        
        myStack->pop();
    }
    
    total = (second * first);
    
    return total;
}
//equation solver if final operator is division
int RPNCalc::Divide(){
       //first node in sequence
    int first = 0;
    int second = 0;
    int total = 0;
    string tempPeek = myStack->peek();
    if (tempPeek == "+"){
        myStack->pop();
        first = Add();
    }
    else if (tempPeek == "-"){
        myStack->pop();
        first = Subtract();
    }
    else if (tempPeek == "*"){
        myStack->pop();
        first = Multiply();
    }
    else if (tempPeek == "/"){
        myStack->pop();
        first = Divide();
    }
    else if (tempPeek == "%"){
        myStack->pop();
        first = Mod();
    }
    else{
        try{
            first = stoi(tempPeek);
        }
        catch (const std::invalid_argument& e ){
            cout << "Invalid input in equation" << endl;
            cout << "THROWING EXCEPTION" << endl;
            throw;
        }
        
        myStack->pop();
    }
    //second node
    tempPeek = myStack->peek();
    if (tempPeek == "+"){
        myStack->pop();
        second = Add();
    }
    else if (tempPeek == "-"){
        myStack->pop();
        second = Subtract();
    }
    else if (tempPeek == "*"){
        myStack->pop();
        second = Multiply();
    }
    else if (tempPeek == "/"){
        myStack->pop();
        second = Divide();
    }
    else if (tempPeek == "%"){
        myStack->pop();
        second = Mod();
    }
    else{
        try{
            second = stoi(tempPeek);
        }
        catch (const std::invalid_argument& e ){
            cout << "Invalid input in equation" << endl;
            cout << "THROWING EXCEPTION" << endl;
            throw;
        }
        
        myStack->pop();
    }
   
    total = (second / first);
    
    return total;
}
//equation solver if final operator is Mod
int RPNCalc::Mod(){
       //first node in sequence
    int first = 0;
    int second = 0;
    int total = 0;
    string tempPeek = myStack->peek();
    if (tempPeek == "+"){
        myStack->pop();
        first = Add();
    }
    else if (tempPeek == "-"){
        myStack->pop();
        first = Subtract();
    }
    else if (tempPeek == "*"){
        myStack->pop();
        first = Multiply();
    }
    else if (tempPeek == "/"){
        myStack->pop();
        first = Divide();
    }
    else if (tempPeek == "%"){
        myStack->pop();
        first = Mod();
    }
    else{
        try{
            first = stoi(tempPeek);
        }
        catch (const std::invalid_argument& e ){
            cout << "Invalid input in equation" << endl;
            cout << "THROWING EXCEPTION" << endl;
            throw;
        }
        
        myStack->pop();
    }
    //second node
    tempPeek = myStack->peek();
    if (tempPeek == "+"){
        myStack->pop();
        second = Add();
    }
    else if (tempPeek == "-"){
        myStack->pop();
        second = Subtract();
    }
    else if (tempPeek == "*"){
        myStack->pop();
        second = Multiply();
    }
    else if (tempPeek == "/"){
        myStack->pop();
        second = Divide();
    }
    else if (tempPeek == "%"){
        myStack->pop();
        second = Mod();
    }
    else{
        try{
            second = stoi(tempPeek);
        }
        catch (const std::invalid_argument& e ){
            cout << "Invalid input in equation" << endl;
            cout << "THROWING EXCEPTION" << endl;
            throw;
        }
        
        myStack->pop();
    }
  
    total = (second % first);
    
    return total;
}
//calculates the answer to the equation
int RPNCalc::Calculate(string equation){

   
    size_t position;
    string delimiter = " ";
    string operand;
    //splits the input string into substrings and pushes to stack
    while (position != std::string::npos){
        position = equation.find(delimiter);
        operand = equation.substr(0, position);
        myStack->push(operand);
        equation.erase(0, position + delimiter.length());
    }
    if (myStack->getSize() % 2 != 1){
        cout << "too many or not enough terms in equation (5 5 + + is invalid)" << endl;
        cout << "Error code: ";
        return 1;
    }
    string startCalc = myStack->peek();
    //checks for the final operand 
    if (startCalc == "+"){
        myStack->pop();
        return Add();
    }
    else if (startCalc == "-"){
        myStack->pop();
        return Subtract();
    }
    else if (startCalc == "*"){
        myStack->pop();
        return Multiply();
    }
    else if (startCalc == "/"){
        myStack->pop();
        return Divide();
    }
    else if (startCalc == "%"){
        myStack->pop();
        return Mod();
    }
    //error check for incorrect equation input
     else{
       cout << "invalid operation or equation form" << endl;
       cout << "please ensure your equation ends with an operator and there are spaces in between each item in the equation EX: 5 4 +" << endl;
       cout << "Error code: ";
       return 0;
    }

    
}


