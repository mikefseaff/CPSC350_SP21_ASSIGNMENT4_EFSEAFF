#include "FileProcessor.h"
//class that writes the dna sequence to a file

//default constructor
FileProcessor::FileProcessor(){
    
}
//destructor
FileProcessor::~FileProcessor(){

}
 //writes the dna sequences to a new file
void FileProcessor::writeToFile(string dnaSequencesFilePath){
    // I found it easier to do the file writing and processing in the DNAComplement class so this function just calls the function in that class
    sequenceSolver.createComplements(dnaSequencesFilePath);
}

