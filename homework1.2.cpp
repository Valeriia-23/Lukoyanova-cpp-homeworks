#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userName;
    
    cout << "Пожалуйста, введите ваше имя: ";
    getline(cin, userName);
    
    cout << "Привет, " << userName << "! Рад тебя видеть!" << endl;
    
    return 0;
}
