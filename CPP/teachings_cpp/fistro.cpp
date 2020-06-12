

#include <iostream> // Flujo de entrada-salida, escribe cosas y recupera datos.

//POO = Programation oriente a objets

// cout n'est pas une fonction, c'est un flux, un truc nouveau de C++

// Tous les mots cles de la librairie standard utilisent le prefix std:: , mais on peut eviter ca en
// usant [ using namespace std;]

// Les lignes de c++ se lisent a l'envers, de droite a gauche. Ca veut dire que on insere end of the line a "Hello world" et apres on l'imprime

// Les chevrons sont acordes a le sens "<<" du programme au output, ">>" de l'input au programme.

using namespace std;

int main()
{
    int age = 0;
    cout << "QUel age avez-vous ?" << endl;
    cin >> age;
    cout << "Ah! Vouz avez donc" << age << "ans !" << endl;
    return 0;
}
