#include <iostream>
#include "todo.h"
using namespace std;
int main()
{
    do {
    int n = MainMenu();

    if( n == 1) {
        ReadTasksFromFile();
    }else if( n ==  2) {
        AddTaskToFile();
    }else if( n != 0) {
      cout << "Noto'g'ri tanlov\n";
    }

    }while(true);

}