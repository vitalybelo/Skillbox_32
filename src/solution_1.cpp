#include <iostream>
#include <fstream>
#include "use_lib.h"
#include "nlohmann/json.hpp"

using namespace std;
using json = nlohmann::json;

/**
 * записываем информацию о фильме в формате Json в текстовый файл
 */
void solution_1()
{
    setlocaleUTF8();
    cout << "\n::::::::::::::::: SOLUTION 1 ::::::::::::::::::\n";

    json movie_get_shorty
            {
                    {"Название", "Достать коротышку"},
                    {"Страна",   "США"},
                    {"Год",      1995},
                    {"Режиссер", "Барри Зонненфельд"},
                    {"Сценарий", "Скотт Фрэнк, Элмор Леонард"},
                    {"Продюсер", "Дэнни ДеВито, Майкл Шамберг, Стейси Шер"},
                    {"Оператор", "Дональд Питермен"},
                    {"В главных ролях",
                                 {
                                         {"1", {"Chili Palmer", "Джон Траволта"}},
                                         {"2", {"Martin Weir", "Дэнни Девито"}},
                                         {"3", {"Harry Zimm", "Джин Хэкмен"}},
                                         {"4", {"Karen Flores", "Рене Руссо"}},
                                         {"5", {"Ray «Bones» Barboni", "Деннис Фарина"}}
                                 }
                    }
            };
    movie_get_shorty.push_back({"Сборы в США","$30 250 000"});

    ofstream file("../../data/record.json");
    if (file.is_open()) {
        file << movie_get_shorty.dump(4) << endl;
        file.flush();
        file.close();
        cout << "JSON file successfully created in CMAKE_SOURCE_DIR\\DATA\n";
    } else {
        cerr << "ERROR WRITING JSON FILE\n";
    };
    cout << endl << movie_get_shorty.dump(2) << endl;

}