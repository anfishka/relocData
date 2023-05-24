#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write_data_to_file(std::string& filename)
{
    ofstream file(filename, ios::app);
    if (file.is_open())
    {
        cin.ignore();
        cout << "\x1b[32mEnter data to write to file: \033[0m";
        string data;
        getline(cin, data);
        file << data << endl;
        file.close();
        cout << "\x1b[32mData was successfully written to file.\033[0m" << endl;
    }
    else
    {
        cout << "\x1b[31mCould not open file to write data.\033[0m" << endl;
    }
}
