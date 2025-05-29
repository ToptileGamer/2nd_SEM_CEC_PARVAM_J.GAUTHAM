#include<iostream>
#include <fstream>
#include<string>

using namespace std;

int main()
{
    ofstream outFile("data.txt");
    outFile << "Hello, World!" ;
    outFile.close();

    std::ifstream inFile("data.txt");
    std::string context;
    inFile >> context;
    inFile.close();

    std::cout << "Read from file: " << context << std::endl;
    return 0;
    
}