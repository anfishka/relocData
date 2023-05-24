#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void create_file(std::string& filename)
{
    ofstream file(filename);
    if (file.is_open())
    {
        cout << "\x1b[32mThe file was created successfully.\033[0m" << endl;
        file.close();
    }
    else
    {
        cout << "\x1b[31mFailed to create file." << endl;
    }
}