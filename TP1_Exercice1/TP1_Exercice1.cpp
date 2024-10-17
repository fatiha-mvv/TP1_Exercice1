#include <iostream>
#include "Complexe.h"
using namespace std;
int main()
{
    Complexe z1(6.0, 4.0);
    Complexe z2(2.0, 1.0);
    Complexe z3; // constructeur par défaut
    cout << " z1= ";
    z1.afficher();
    cout << " z2= ";
    z2.afficher();
    cout << " z3= ";
    z3.afficher();

    //somme de 2 complexes
    Complexe somme1_2 = z1 + z2;
    cout << " z1 + z2= ";
    somme1_2.afficher();

    //ajouter un double à un complexe
    Complexe somme1_4 = z1 + 4.0;
    cout << " z1 + 4= ";
    somme1_4.afficher();

    //soustraction entre de 2 complexes
    Complexe soustraction1_2 = z1 - z2;
    cout << " z1 - z2= ";
    soustraction1_2.afficher();

    //soustraire un double d'un complexe
    Complexe soustraction1_3 = z1 - 3.0;
    cout << " z1 - 3= ";
    soustraction1_3.afficher();

    //produit de 2 complexes
    Complexe prod1_2 = z1 * z2;
    std::cout << " z1 * z2 = ";
    prod1_2.afficher();

    //multiplier un complexe par un double
    Complexe prod2 = z1 * 3.0;
    std::cout << " z1 * 3.0 = ";
    prod2.afficher();
    
    //division entre 2 complexes
    Complexe div1 = z1 / z2;
    std::cout << " z1 / z2 = ";
    div1.afficher();

    //égalité entre 2 complexes
    if (z1 == z2)
        cout << "--> z1 et z2 sont Egaux" <<endl;
    else
        cout << "--> z1 et z2 ne sont pas Egaux" <<endl; 

    //calcul de module
    cout << "--> module de z1 = " << z1.module() << std::endl;

    //retourner le conjugué
    Complexe conjuguee = z1.conjugue();
    cout << "--> conjuguee de z1 = ";
    conjuguee.afficher();


}


