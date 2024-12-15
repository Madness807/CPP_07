#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename F>
void iter(T* array, int size, F func) {
    for (int i = 0; i < size; i++) {
        func(array[i]);
    }
}

#endif // ITER_HPP


// template <typename T, typename F> :
// T est le type des éléments du tableau.
// F est le type de la fonction ou de l'objet fonctionnel passé en paramètre.
// Boucle for :
// Parcourt tous les éléments du tableau et applique func sur chacun d'eux.