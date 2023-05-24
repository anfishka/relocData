#include <iostream>
#include <fstream>
#include <string>
#include "write_data_to_file.h"
#include "create_file.h"
#include "delete_file.h"
#include "menu.h"
using namespace std;


void exchange_data(std::string& filename1, std::string& filename2)
{
    ifstream file1(filename1);
    ifstream file2(filename2);
    if (!file1.is_open() || !file2.is_open())
    {
        cout << "\x1b[31mFailed to open files.\033[0m" << endl;
        return;
    }
    string data1, data2;
    string selectedData;
    cout << "\x1b[32mSelect the data to exchange (1 - data from the first file, 2 - data from the second file): \033[0m";
    int choice;
    cin >> choice;
    if (choice == 1) {
        getline(file1, data1);
        getline(file2, data2);
        selectedData = data1;
        file1.seekg(0);
    }
    else if (choice == 2)
    {
        getline(file1, data1);
        getline(file2, data2);
        selectedData = data2;
        file2.seekg(0);
    }
    else {
        cout << "\x1b[31mInvalid choice\033[0m" << endl;
        return;
    }
    ofstream tempFile("temp.txt");

    if (!tempFile.is_open()) {
        cout << "\x1b[31mFailed to create temporary file\033[0m" << endl;
        return;
    }
    tempFile << selectedData << endl;
    while (getline(file1, data1))
    {
        tempFile << data1 << endl;
    }

    tempFile.close();
    file1.close();
    file2.close();
    remove(filename1.c_str());
    rename("temp.txt", filename1.c_str());
    ifstream updatedFile(filename1);

    if (updatedFile.is_open())
    {
        cout << "\x1b[32mFile updated successfully.\033[0m" << endl;
        string line;
        while (getline(updatedFile, line)) {
            cout << line << endl;
        }
        updatedFile.close();
    }
    else {
        cout << "\x1b[31mFailed to open updated file.\033[0m" << endl;
    }
}
