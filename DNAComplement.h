#ifndef DNACOMP_H
#define DNACOMP_H
#include "GenStack.h"
#include <fstream>
//this class calculates the complements and reverse complements of a dna sequence 
class DNAComplement{
    public:
        //default constructor
        DNAComplement();
        //destructor
        ~DNAComplement();
        //converts a single nucleotide 
        string convertNucleotide();
        //creates the complements and reverse complements of the dna in the file
        void createComplements(string dnaSequencesFilePath);
    private:
        //stack for the dna functions
        GenStack<string> *dnaStack = new GenStack<string>;
};
#endif