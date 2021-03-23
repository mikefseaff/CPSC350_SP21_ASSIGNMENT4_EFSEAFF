//class that writes the dna sequence to a file
#ifndef FILEPROCESS_H
#define FILEPROCESS_H
#include "DNAComplement.h"
class FileProcessor{
    public:
        //default constructor
        FileProcessor();
        //destructor
        ~FileProcessor();
        //writes the dna sequences to a new file
        void writeToFile(string dnaSequencesFilePath);
    private:
        //DNA handler object
        DNAComplement sequenceSolver; 
};
#endif