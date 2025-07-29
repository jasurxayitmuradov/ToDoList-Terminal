#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <cstdlib> 
#include "todo.h"
using namespace std;

int MainMenu()
{
    int n;
    cout <<"ToDoListga xush kelibsiz !" << endl;
    cout << "Vazifalarni ko'rish(1)" << endl;
    cout << "Vazifa qo'shish(2)" << endl;
    cout <<"Chiqish(0)" << endl;
    cout << "Tanlang (1,2,0): ";
    cin >> n;
    if( n == 0)
    {
        cout << "Dasturdan chiqilmoqda...";
        exit(0);
    }
    return n;
}

int chiqish()
{
   int n;
   do {
    cout <<"Chiqish (0)" << endl;
    cout <<">>>>";
    cin >> n;
    if(n != 0)
    {
        cout <<"Noto'g'ri tanlov! " << endl;
    }
   }while(n!=0);
   return MainMenu();
}

int ReadTasksFromFile() {
    ifstream file("storage.txt");
    string line;
    if (!file) {
        cout << "Fayl ochilmadi yoki mavjud emas!" << endl;
        return chiqish();
    }
    cout << "Vazifalar ro'yxati:" << endl;
    int count = 1;
    if(filesystem :: is_empty("storage.txt")) {
        cout << "Hozirda sizda vazifalar mavjud emas!" << endl;
        return chiqish();
    }
    while (getline(file, line)) {
        
        cout << count++ << ". " << line << endl;
    }
    file.close();
    return chiqish();
}
int AddTaskToFile() {
    cin.ignore();
    cout << "Yangi vazifa nomini kiritin\n>>>>";
    string task;
    getline(cin , task);
    ofstream file("storage.txt" ,  ios :: app);
    if(!file) {
        cout <<"File ochilmadi yoki mavjud emas !" << endl;
    }
    file << task << endl;
    file.close();
    cout << "Vazifa muvaffaqiyatli qo'shildi " << endl;
    return chiqish();
}
