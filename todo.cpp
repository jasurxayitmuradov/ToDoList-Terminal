#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "todo.h"
using namespace std;

void ReadTasksFromFile()
{
    ifstream file("storage.txt");
    string line;
    if (!file)
    {
        cout << "Fayl ochilmadi yoki mavjud emas!" << endl;
        return;
    }
    cout << "Vazifalar ro'yxati:" << endl;
    int count = 1;
    if(filesystem :: is_empty("storage.txt")) {
        cout << "Hozirda sizda vazifalar mavjud emas!" << endl;
        return;
    }
    while (getline(file, line))
    {
        
        cout << count++ << ". " << line << endl;
    }
    file.close();
}
