#include <iostream>
#include "array.hpp"

int main() {
	try {
		// Test avec un tableau d'entiers
		Array<int> intArray(5);

		// Initialisation
		for (unsigned int i = 0; i < intArray.size(); i++) {
			intArray[i] = i * 10;
		}

		// Affichage
		std::cout << "Integer Array: ";
		for (unsigned int i = 0; i < intArray.size(); i++) {
			std::cout << intArray[i] << " ";
		}
		std::cout << std::endl;

		// Test avec un tableau de chaînes
		Array<std::string> strArray(3);
		strArray[0] = "Hello";
		strArray[1] = "World";
		strArray[2] = "C++";

		std::cout << "String Array: ";
		for (unsigned int i = 0; i < strArray.size(); i++) {
			std::cout << strArray[i] << " ";
		}
		std::cout << std::endl;

		// Test d'accès hors limites
		std::cout << "Accessing out of bounds: " << intArray[10] << std::endl;

	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
