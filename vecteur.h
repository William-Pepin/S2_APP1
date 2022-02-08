#pragma once
#include <iostream>

template <class T>
class Vecteur
{
private:
    int length;
    int counter;
    T *items;
    bool estValide(int index);

public:
    Vecteur();
    ~Vecteur();
    int capacite();
    int taille();
    bool ajouter(T item);
    T retirer(int index);
    T obtenir(int index);
    void vider();
    bool estVide();
};

template <class T>
Vecteur<T>::Vecteur()
{
    length = 10;
    counter = 0;
    items = new T[length];
}

template <class T>
Vecteur<T>::~Vecteur()
{
    delete[] items;
}

template <class T>
int Vecteur<T>::capacite()
{
    return length;
}

template <class T>
int Vecteur<T>::taille()
{
    return counter;
}

template <class T>
bool Vecteur<T>::ajouter(T item)
{
    if (counter == length)
    {
        length = length * 2;
        T *newItems = new T[length];
        for (int i = 0; i < counter; i++)
        {
            newItems[i] = items[i];
        }
        delete[] items;
        items = newItems;
    }
    items[counter] = item;
    counter++;
    return true;
}

template <class T>
T Vecteur<T>::retirer(int index)
{
    if (estVide() || !estValide(index))
        return nullptr;

    T retour = items[index];
    for (int i = index; i < counter - 1; i++)
    {
        items[i] = items[i + 1];
    }
    counter--;
    return retour;
}

template <class T>
T Vecteur<T>::obtenir(int index)
{
    if (estVide() || !estValide(index))
        return nullptr;

    return items[index];
}

template <class T>
void Vecteur<T>::vider()
{
    delete[] items;
    length = 10;
    counter = 0;
    items = new T[length];
}

template <class T>
bool Vecteur<T>::estVide()
{
    if (counter == 0)
        return true;
    return false;
}

template <class T>
bool Vecteur<T>::estValide(int index)
{
    if (index < 0 || index >= counter)
    {
        return false;
    }
    return true;
}