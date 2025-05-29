#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<cstring>

void logActivity(const std::string & activity, const std::string& FILENAME)
{
    std::ofstream outFile(FILENAME, std::ios::app);
    if(outFile.is_open())
    {
        std::time_t now = std::time(nullptr);
        char *dt = std::ctime(&now);
        dt[strcspn(dt, "\n")] = 0;
        outFile << dt << " - " << activity << std::endl; 
        outFile.close();
        std::cout << "Activity logged successfully." << std::endl;
    }
    else
    {
        std::cout << "Error opening file for logging." << std::endl;
    }
}

void readLog(const std::string& FILENAME)
{
    std::ifstream inFile(FILENAME);
    if(inFile.is_open())
    {
        std::string line;
        std::cout << "Log contents:" << std::endl;
        while(std::getline(inFile, line))
        {
            std::cout << line << std::endl;
        }
        inFile.close();
    }
    else
    {
        std::cout << "Error opening file for reading." << std::endl;
    }
}

int main()
{
    const std::string FILENAME = "activity_log.txt";
    
    logActivity("Program started", FILENAME);
    
    // Simulate some activities
    logActivity("User logged in", FILENAME);
    logActivity("User performed action A", FILENAME);
    logActivity("User logged out", FILENAME);
    
    readLog(FILENAME);
    
    return 0;
}