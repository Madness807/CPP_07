#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept> // Pour std::out_of_range

template <typename T>
class Array {
private:
	T* _array;
	unsigned int _size;

public:
	// Constructeur par défaut
	Array() : _array(NULL), _size(0) {}

	// Constructeur avec taille
	Array(unsigned int n) : _array(new T[n]()), _size(n) {}

	// Constructeur de copie
	Array(const Array& other) : _array(NULL), _size(0) {
		*this = other;
	}

	// Destructeur
	~Array() {
		delete[] _array;
	}

	// Opérateur d'affectation
	Array& operator=(const Array& other) {
		if (this != &other) {
			delete[] _array;
			_size = other._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++) {
				_array[i] = other._array[i];
			}
		}
		return *this;
	}

	// Opérateur d'accès (lecture/écriture)
	T& operator[](unsigned int index) {
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return _array[index];
	}

	const T& operator[](unsigned int index) const {
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return _array[index];
	}

	// Taille du tableau
	unsigned int size() const {
		return _size;
	}
};

#endif // ARRAY_HPP
