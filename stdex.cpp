#include<iostream>
#include<fstream>
#include<string>
#include<limits>

using namespace std;

void logError(const string & message) {
    ofstream errorFile("error_log.txt",ios::app):
    
