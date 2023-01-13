#include <iostream>
#include "use_lib.h"
#include "solutions.h"
using namespace std;


int main() {

    setlocaleUTF8();

    /**
     * записываем информацию о фильме в формате Json в текстовый файл
     */
    solution_1();

    /**
     * Вначале записывает на диск информацию о пяти фильмах
     * Загружает с диска Json файл с информацией о фильмах, парсит данные в память
     * По введенным буквам, цифрам, словам или обрывкам слов ищет все совпадения:
     * - по названию фильма - выводит информацию по найденным совпадениям
     * - по имени, фамилии актера выводит список ролей в найденных фильмах
     */
    solution_2();

    return 0;
}
