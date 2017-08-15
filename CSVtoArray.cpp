//
//  CSVtoArray.cpp
//  
//
//  Created by Jared Bourgeois on 8/12/17.
//
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <streambuf>
#include <iterator>

using namespace std;

int main () {
    cout << "===========================================\nCreated by Jared M. Bourgeois, 2017\n===========================================\n\n";

    ifstream csvFile ("M_BMI_3_0-20yrs_COMBO.txt");
    ofstream csvOutput ("M_BMI_3_0-20yrs_VECTOR.txt", ios::trunc);
    if (csvFile.is_open() && csvOutput.is_open()) {
        
        stringstream csvStream;
        csvStream << csvFile.rdbuf();
        string csvString = csvStream.str();
        
        
        string::const_iterator aChar = csvString.begin();
        for (int i = 0; i < csvString.length(); i++) {
            if (i == 0) {
                csvOutput << "{\n{";
                csvOutput << *aChar;
            }
            else if (i == csvString.length() - 1) {
                csvOutput << *aChar;
                csvOutput << "}\n}";
            }
            else {
                if (*aChar == '\n') {
                    csvOutput << "},\n{";
                }
                else if (*aChar != '\r') {
                    csvOutput << *aChar;
                }
            }
            aChar++;
           
        }
        csvOutput.close();
        csvFile.close();
    }
    else {
        cout << "Unable to open files";
    }
    
    return 0;
}
