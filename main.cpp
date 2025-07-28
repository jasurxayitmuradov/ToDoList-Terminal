#include <iostream>
#include "todo.h"
using namespace std;
int main()
{
    cout << "TO DO LISTINGIZGA XUSH KELIBSIZ !👇" << endl;
    cout << "Vazifalarni ko'rish (1)" << endl;
    cout << "Yangi vazifa qo'shish (2)" << endl;
    cout << "Chiqish (0)" << endl;
    cout << "Kiriting: ";
    
    int n;
    cin >> n;

    if( n == 1)
    {
        ReadTasksFromFile();
    }else if( n ==  2)
    {
        
    }






}