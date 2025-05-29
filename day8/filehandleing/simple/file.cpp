#include<iostream>
#include<fstream>

int  main()
{
    std::ofstream outfile("example.txt");
    if(outfile.is_open())
    {
        outfile << "Hello, World!" << std::endl;
        outfile.close();
    }
    else
    {
        std::cerr << "Error opening file for writing." << std::endl;
    }
    return 0;
    
}