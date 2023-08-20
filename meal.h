//#pragma once

#ifndef MEAL_H 
#define MEAL_H

#include<string>
#include<iostream>
#include<vector>

class meal {
private:
    std::string name;
    std::string recipe;
    std::vector<std::string> ingredients;
public:
    meal(std::string name_);
    void set_recipe(std::string input_string);
    void show_recipe();
    void add_ingredient();
    void get_name();
    void get_ingredients();
};
#endif 