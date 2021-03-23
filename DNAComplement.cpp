#include "DNAComplement.h"
//this class calculates the complements and reverse complements of a dna sequence 


//default constructor
DNAComplement::DNAComplement(){

}
//destructor
DNAComplement::~DNAComplement(){
    delete dnaStack;
}
//converts a single nucleotide 
string DNAComplement::convertNucleotide(){
    string nucleotide = dnaStack->peek();
    //pops the complement nucleotide 
    if (nucleotide == "A"){
        dnaStack->pop();
        return "T";
    }
    else if (nucleotide == "T"){
        dnaStack->pop();
        return "A";
    }
    else if (nucleotide == "G"){
        dnaStack->pop();
        return "C";
    }
    else if (nucleotide == "C")
    {
        dnaStack->pop();
        return "G";
    }
    //if not ATG or C throws error
    else{
        cout << "error in DNA sequence: " << nucleotide << endl;
        dnaStack->pop();
        return "INVALID NUCLEOTIDE ";
    }
}
//creates the complements and reverse complements of the dna in the file
void DNAComplement::createComplements(string dnaSequencesFilePath){
    ifstream inputFile (dnaSequencesFilePath);
    ofstream outputFile ("dnaoutput.txt");
    string sequence;
    string complement;
    string reverseComplement;
    int lineNumber = 1;
    string tempNucleotide;
    //check if file path is able to be opened
    if (inputFile.is_open()){   
        while (getline(inputFile,sequence)){
            //removes end space from getline that shows up when there are multiple lines in the file
            if(isspace(sequence.at(sequence.size()-1))){
                sequence.erase(sequence.size()-1,1);
            }
            //pushes sequence to stack
            for (int i = 0; i < sequence.size(); ++i){
               tempNucleotide = sequence[i];
               dnaStack->push(tempNucleotide);
                
                
            }
            //converts nucleotides 
            for (int i = 0; i < sequence.size(); ++i){
                tempNucleotide = convertNucleotide();
                //error catch from convertNucleotide
                if (tempNucleotide == "INVALID NUCLEOTIDE "){
                    cout << "File Line: " << lineNumber << endl;
                    cout << "Please ensure there are no spaces, including trailing spaces, or invalid nucleotides in the DNA sequence" << endl;
                    complement = "ERROR";
                    reverseComplement = "ERROR";
                    break;
                }
                complement.insert(0,tempNucleotide);
                reverseComplement += tempNucleotide;
            }
            //outputs to file
            outputFile << "Line: " << lineNumber << endl;
            outputFile << "Sequence: " << sequence << endl;
            outputFile << "Complement: " << complement << endl;
            outputFile << "Reverse Complement: " << reverseComplement << endl;
            outputFile << endl;
            lineNumber++;
            complement = "";
            reverseComplement = "";


        }
    }
    else{
        cout << "invalid file path" << endl;
    }
    inputFile.close();
    outputFile.close();

}



