#include <iostream>
#include <fstream>
#include "use_lib.h"
#include "nlohmann/json.hpp"

using namespace std;
using json = nlohmann::json;

void solution_2()
{
    setlocaleRus();
    cout << "\n::::::::::::::::: SOLUTION 2 ::::::::::::::::::\n";

    ifstream file("../../data/record.json");
    json data;
    if (file.is_open())
    {
        data = json::parse(file);
        file.close();
    }
    cout << data.dump(4) << endl;
    cout << data["Год"] << endl;
    cout << data["В главных ролях"] << endl;

}