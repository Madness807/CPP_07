#include <iostream>
#include "iter.hpp"

// Une fonction simple pour afficher un élément
void printElement(const int& elem) {
    std::cout << elem << " ";
}

// Une fonction simple pour incrémenter un élément
void increment(int& elem) {
    elem++;
}

// Une fonction pour afficher des chaînes
void printString(const std::string& str) {
    std::cout << str << " ";
}

int main() {
    // Test avec un tableau d'entiers
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Original array: ";
    iter(array, size, printElement);
    std::cout << std::endl;

    iter(array, size, increment);

    std::cout << "Incremented array: ";
    iter(array, size, printElement);
    std::cout << std::endl;

    // Test avec un tableau de chaînes
    std::string strings[] = {"Hello", "World", "C++"};
    int strSize = sizeof(strings) / sizeof(strings[0]);

    std::cout << "Strings array: ";
    iter(strings, strSize, printString);
    std::cout << std::endl;

    return 0;
}
