#include "FileProcessor.h"
#include "RPNCalc.h"
//main file that controls the run time of the program
int main(int argc, char const *argv[])
{
    string choice = argv[1];
    //runs the RPN calculator mode
    if (choice == "RPN"){
        RPNCalc rnp;
        string equation;
        cout << "Enter the equation in RPN notation" << endl;
        getline(cin,equation);
        cout << rnp.Calculate(equation) << endl;
    }
    //runs the DNA program
    else if (choice == "DNA"){
        FileProcessor file;
        string filePath;
        cout << "Enter the file path to the DNA sequence txt file" << endl;
        getline(cin,filePath);
        file.writeToFile(filePath);

    }
    else {
        cout << "invalid command line input" << endl;
    }
    
    
    



    
}

