#include "meal.h"

meal::meal(std::string name_) {
    name = name_;
};

void meal::set_recipe(std::string input_string)
{
    recipe = input_string;
}

void meal::show_recipe()
{
    std::cout << "The recipe is: " << recipe << std::endl;
}

void meal::add_ingredient()
{
    int n;

    std::cout << "How many ingredients would you like to add? ";
    std::cin >> n;

    //for (int i=0; i<n; ++i)
    for (int i = 0; i < n; i++) {
        std::string ing;
        std::cout << "Enter an ingredient: ";
        std::cin >> ing;
        ingredients.push_back(ing);
    }
}

void meal::get_name()
{
    std::cout << name << std::endl;
}

void meal::get_ingredients()
{
    std::cout << "The ingredients for "<< name << " are: ";

    for (auto& i : ingredients) {
        std::cout << i << " ";
     }
    std::cout << std::endl;
}