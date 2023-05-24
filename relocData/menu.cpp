#include <iostream>
#include <fstream>
#include <string>
#include "write_data_to_file.h"
#include "create_file.h"
#include "delete_file.h"
#include "exchange_data.h"

using namespace std;




void menu()
{
    setlocale(LC_ALL, "");

    cout << "\x1b[33mMMMMMMMM               MMMMMMMM\nM:::::::M             M:::::::M\nM::::::::M           M::::::::M\nM:::::::::M         M:::::::::M\nM::::::::::M       M::::::::::M    eeeeeeeeeeee    nnnn  nnnnnnnn   uuuuuu   uuuuuu\nM:::::::::::M     M:::::::::::M  ee::::::::::::ee  n:::nn::::::::nn u:::u   u::::u\nM:::::::M::::M   M::::M:::::::M e::::::eeeee:::::een::::::::::::::nnu:::u   u::::u\nM::::::M M::::M M::::M M::::::Me::::::e     e:::::enn:::::::::::::nu::::u    u::::u\nM::::::M  M::::M::::M  M::::::Me:::::::eeeee::::::en:::::nnnn:::::nu::::u    u::::u\nM::::::M   M:::::::M   M::::::Me:::::::::::::::::e n::::n    n::::nu::::u    u::::u\nM::::::M    M:::::M    M::::::Me::::::eeeeeeeeeee  n::::n    n::::nu::::u    u::::u\nM::::::M     MMMMM     M::::::Me:::::: : e         n::::n    n::::nu:::::uuuu:::::u\nM::::::M               M::::::Me::::::::e          n::::n    n::::nu:::::::::::::::uu\nM::::::M               M::::::M e::::::::eeeeeeee  n::::n    n::::n u:::::::::::::::u\nM::::::M               M::::::M  ee:::::::::::::e  n::::n    n::::n  uu::::::::uu:::u\nMMMMMMMM               MMMMMMMM    eeeeeeeeeeeeee  nnnnnn    nnnnnn    uuuuuuuu  uuuu\033[0m\n";




    string filename1, filename2;
    int choice;
    do {
        cout << "\x1b[32m\n";
        cout << "   ___    __  ___\n";
        cout << "  <  /   /  |/  /____  _   __ ___\n";
        cout << "  / /   / /|_/ // __ \\| | / // _ \\\n";
        cout << " / /_  / /  / // /_/ /| |/ //  __/\n";
        cout << "/_/(_)/_/  /_/ \\____/ |___/ \\___/ \n\033[0m";
        cout << "\x1b[34m   ___      ______                    __\n";
        cout << "  |__ \\    / ____/_____ ___   ____ _ / /_ ___\n";
        cout << "  __/ /   / /    / ___// _ \\ / __ `// __// _ \\\n";
        cout << " / __/ _ / /___ / /   /  __// /_/ // /_ /  __/\n";
        cout << "/____/(_)\\____//_/    \\___/ \\__,_/ \\__/ \\___/\n\033[0m";
        cout << "\x1b[31m   _____     ____         __       __\n";
        cout << "  |__  /    / __ \\ ___   / /___   / /_ ___\n";
        cout << "   /_ <    / / / // _ \\ / // _ \\ / __// _ \\\n";
        cout << " ___/ /_  / /_/ //  __// //  __// /_ /  __/\n";
        cout << "/____/(_)/_____/ \\___//_/ \\___/ \\__/ \\___/\n\033[0m";
        cout << "\x1b[93m   __ __      ____                          __         __        __\n";
        cout << "  / // /     /  _/____   _____ ___   _____ / /_   ____/ /____ _ / /_ ____ _\n";
        cout << " / // /_     / / / __ \\ / ___// _ \\ / ___// __/  / __  // __ `// __// __ `/\n";
        cout << "/__  __/_  _/ / / / / /(__  )/  __// /   / /_   / /_/ // /_/ // /_ / /_/ /\n";
        cout << "  /_/  (_)/___//_/ /_//____/ \\___//_/    \\__/   \\__,_/ \\__,_/ \\__/ \\__,_/\n\033[0m";
        cout << "\x1b[35m    ______    ______       _  __\n";
        cout << "   / ____/   / ____/_  __ (_)/ /_\n";
        cout << "  /___ \\    / __/  | |/_// // __/\n";
        cout << " ____/ /_  / /___ _>  < / // /_\n";
        cout << "/_____/(_)/_____//_/|_|/_/ \\__/\n\033[0m";

        cout << "\n\n\x1b[96m   ______ __                                                              __   _                 \n";
        cout << "  / ____// /_   ____   ____   _____ ___     ____ _ ____     ____ _ _____ / /_ (_)____   ____   _ \n";
        cout << " / /    / __ \\ / __ \\ / __ \\ / ___// _ \\   / __ `// __ \\   / __ `// ___// __// // __ \\ / __ \\ (_)\n";
        cout << "/ /___ / / / // /_/ // /_/ /(__  )/  __/  / /_/ // / / /  / /_/ // /__ / /_ / // /_/ // / / /_   \n";
        cout << "\\____//_/ /_/ \\____/ \\____//____/ \\___/   \\__,_//_/ /_/   \\__,_/ \\___/ \\__//_/ \\____//_/ /_/(_)  \n\033[0m\n\n\n";

        cout << "\x1b[35m";
        cin >> choice;
        cout << "\033[0m";
        switch (choice) {
        case 1: {
            cout << "\x1b[32mEnter the name of the first file: \033[0m";
            cin >> filename1;
            cout << "\x1b[32mEnter the name of the second file:\033[0m";
            cin >> filename2;
            exchange_data(filename1, filename2);
            break;
        }
        case 2: {
            cout << "\x1b[34mEnter a file name to create: \033[0m";
            cin >> filename1;
            create_file(filename1);
            break;
        }
        case 3: {
            cout << "\x1b[31mEnter a filename to delete: \033[0m";
            cin >> filename1;
            delete_file(filename1);
            break;
        }
        case 4: {
            cout << "\x1b[93mEnter a file name for writing data: \033[0m";
            cin >> filename1;
            write_data_to_file(filename1);
            break;
        }
        case 5: {
            cout << "\x1b[35mExiting the program.\033[0m" << endl;
            break;
        }
        default:
            cout << "x1b[31mInvalid choice.\033[0m" << endl;
        }
    } while (choice != 5);
}

