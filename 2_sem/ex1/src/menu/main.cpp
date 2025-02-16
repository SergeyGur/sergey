#include <iostream>

#include "src/menu.hpp"
#include "src/menu_func.hpp"
#include "src/menu_items.hpp"

int main () {
    std::cout << "Привет, абитуриент!" << std::endl;
    std::cout << "Выбери, что хочешь сделать:" << std::endl;
    
    const gsm::MenuItem* current = &gsm::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}