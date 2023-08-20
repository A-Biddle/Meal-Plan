// meal_plan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "meal.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

int main()
{
    std::vector<std::string> ing_list;
    std::string ing;
    std::ifstream MyReadFile("ingredients_list.txt");
    while (MyReadFile >> ing) {
        ing_list.push_back(ing);
    }
    MyReadFile.close();

    for (int i=0; i < ing_list[10].size(); i++) {
        std::cout << ing_list[i];
    }


    
    //meal Marmite_Sandwhich("Marmite_Sandwhich");
    //Marmite_Sandwhich.get_name();
    //Marmite_Sandwhich.add_ingredient();
    //Marmite_Sandwhich.get_ingredients();

    //meal Beans_on_Toast("Beans on toast");
    //Beans_on_Toast.set_recipe("bread, butter, baked beans, HP sauce");



    //std::vector<char> vector1 = {'a', 'b', 'c'};
    //std::vector<char> vector2 = { 'a', 'c', 'd', 'e' };

    //for (auto& i : vector1) {
    //    for (auto& j : vector2) {
    //        if (i == j) {
    //            std::cout << "the vectors share " << i << std::endl;
    //        }
    //    }
    //}




}
