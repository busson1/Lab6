/*
 Jake Busson
 Computer Science
 Due: Dec. 3, 2024
 Lab Name: Lab 6 Binary Conversion
 Lab Description: In lab 6 it asked to convert the number inputs to the binary converion of the input using 1's and 0's while any other vlaues or charcaters inputed would be thrown out. With these bad digits, it would continue to run to the next vaild input. If the input starts with spaces or 0's it forwards to the first 1. I had to make BinaryIn.dat file to input the values and thread it into my lab 6 project. I had some troubles with getting it to work and getting into the when running the lab.
 */
#include "Lab6.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    BinaryConverter Converter; // Creats object called Converter
    
    // Header for formatting to console
    cout << setw(30) << left << "Binary Number" << setw(15) << right << "Decimal" << '\n';
    
    ifstream inFile("/Users/jakebusson/Desktop/Lab6/Lab6/BinaryIn.dat.txt");


    // Opens file and checks to make sure it opens
    if (!inFile.is_open()) {
        std::cout << "Error opening file.\n";
        return 1;
    }

    Converter.decimalConverter(inFile);

    inFile.close();

    return 0;
}
