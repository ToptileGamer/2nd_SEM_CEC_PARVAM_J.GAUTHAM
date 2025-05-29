#include<iostream>
#include<fstream>
#include<string>
#include<vector>

struct student
{
    std::string name;
    int age;
    float grade;
};

void writeToFile(const std::vector<student>& students, const std::string& filename) {
    std::ofstream outfile(filename);
    if (outfile.is_open())
     {
        for (const auto& s : students) {
            outfile << s.name << "," << s.age << "," << s.grade << "\n";
        }
        outfile.close();
        std::cout << "Data written to file successfully." << std::endl;
    }
    else
    {
        std::cout << "Error opening file for writing." << std::endl;
    }
        
}

void readFromFile(const std::string& filename) {
    std::ifstream infile(filename);
    if( infile.is_open()) {
        std::string line;
        while (std::getline(infile, line)) {
            std::cout << line << std::endl;
        }
        infile.close();
    } else {
        std::cout << "Error opening file for reading." << std::endl;
    }
}

int main() {
    std::vector<student> students = {
        {"Alice", 20, 85.5},
        {"Bob", 22, 90.0},
        {"Charlie", 19, 78.5}
    };

    std::string filename = "students.txt";

    writeToFile(students, filename);
    readFromFile(filename);

    return 0;
}
