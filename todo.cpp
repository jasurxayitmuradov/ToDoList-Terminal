#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "todo.h"
using namespace std;

void ReadTasksFromFile() {
    ifstream file("storage.txt");
    string line;
    if (!file) {
        cout << "Fayl ochilmadi yoki mavjud emas!" << endl;
        return;
    }
    cout << "Vazifalar ro'yxati:" << endl;
    int count = 1;
    if(filesystem :: is_empty("storage.txt")) {
        cout << "Hozirda sizda vazifalar mavjud emas!" << endl;
        return;
    }
    while (getline(file, line)) {
        
        cout << count++ << ". " << line << endl;
    }
    file.close();
}
void AddTaskToFile() {
    cout << "Yangi vazifa nomini kiritin\n>>>>";
    string task;
    getline(cin , task);
    ofstream file("storage.txt");
    if(!file) {
        cout <<"File ochilmadi yoki mavjud emas !" << endl;
        return;
    }
    file << task << endl;
    file.close();
    cout << "Vazifa muvaffaqiyatli qo'shildi " << endl;
}
