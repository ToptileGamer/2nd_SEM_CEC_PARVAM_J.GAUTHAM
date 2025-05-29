#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<cstring>
using namespace std;

string getCurrentTime() {
    time_t now = time(nullptr);
    char *dt = ctime(&now);
    string timeStr(dt);
    timeStr.pop_back(); 
    return timeStr;
    
}

void writeLog(int userID, con)