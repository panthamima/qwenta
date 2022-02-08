#ifndef CLI_H
#define CLI_H

void prepareString(); 	    // создание строки для записи в файл
void addition();		    // добавление строки в файл
int  counting();            // подсчет строк
void extradition();         // выдача информации о записи (строке)
void logging();             // создание мастер аккаунта
void removing();            // удаление записи из файла
void showTheList();         // показать все пароли из файла
void shred();               // удалить все пароли
void iToc(int n, char s[]); // int to char
void reverse(char s[]);     // reverse string
int randomPass();           // создание случайного пароля
void masterSeed();       // создание мастер пароля

#endif