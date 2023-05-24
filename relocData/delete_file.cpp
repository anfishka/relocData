#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void delete_file(std::string& filename)
{
    if (remove(filename.c_str()) == 0)
    {
        cout << "\x1b[32mFile deleted successfully.\033[0m" << endl;
    }
    else
    {
        cout << "\x1b[31mFailed to delete file.\033[0m" << endl;
    }
}