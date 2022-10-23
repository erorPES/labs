#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    const unsigned ML = 255;

    // Ввод строки.
    char S[ML];
    puts("Enter string\n"); //Функция puts() выводит передаваемый ей аргумент на экран
    fgets(S, ML, stdin);    // stdin стандартное устройство ввода,fgets считает символы

    S[strlen(S) - 1] = 0; // strlen(s)-1
    //Длина строки - 1 - индекс конца строки (с учетом того, что начинается с 0)
    // char *s
    // s - имя указателя на символьную строку.

    char *current_word = strtok(S, " "); //Функция strtok выполняет поиск лексем в строке string.
    char *pattern = current_word;
    cout << "Первое слово: " << pattern << endl;

    while (current_word != nullptr)
    {
        current_word = strtok(0, "' ' . ");
        if (strcmp(pattern, current_word) == 0) // strcmp сравнивает символы двух строк
        {
            cout << "Слово совпадающее с первым словом: " << current_word << endl;
        }
    }

    system("pause");
    return 0;
}