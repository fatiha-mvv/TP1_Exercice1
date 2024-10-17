#include "Complexe.h"
#include <iostream>
#include <cmath>
using namespace std;

//----> implementation de constructeur avec params (sans initilized list)
/*
Complexe::Complexe(double re, double im)
{
this->Re=re;
this->Img=im;
}
*/

//----> implementation de constructeur avec params (avec initilized list)
Complexe::Complexe(double re, double im):Re(re),Img(im)
{}

//----> implementation de constructeur de recopie (sans initilized list)
/*
Complexe::Complexe(const Complexe& c)
{
	this->Re = c.Re;
	this->Img = c.Img;
}
*/

//----> implementation de constructeur de recopie (avec initilized list)
Complexe::Complexe(const Complexe& c)
	:Re(c.Re),Img(c.Img)
{}

//----> Fonction d'affichage
void Complexe::afficher() const
{
	if(this->Img >=0)
	  cout << this->Re << " +i" << this->Img << endl;
	else
	  cout << this->Re << " -i" << -this->Img << endl;
}

//----> Fonction qui calcule le module
double Complexe::module() const
{
	double z = sqrt(pow(this->Re,2)+pow(this->Img,2));
	return z;
}

//----> Fonction qui retourne le conjugué
Complexe Complexe::conjugue() const
{
	return Complexe(this->Re, -this->Img);;
}

//----> Surcharge de l'operateur + (premier cas)
Complexe& Complexe::operator+(const Complexe& c) const
{
	Complexe* nouveau = new Complexe();
	nouveau->Re = this->Re + c.Re;
	nouveau->Img = this->Img + c.Img;
	return *nouveau;
}

//----> Surcharge de l'operateur + (deuxieme cas)
Complexe& Complexe::operator+( double d) const
{
	Complexe* nouveau = new Complexe();
	nouveau->Re = this->Re + d;
	nouveau->Img = this->Img + 0;
	return *nouveau;
}

//----> Surcharge de l'operateur + (troisieme cas)
Complexe& operator+(double d,const Complexe& c)
{
	Complexe* nouveau = new Complexe();
	nouveau->Re = d + c.Re;
	nouveau->Img = c.Img;
	return *nouveau;
}


//----> Surcharge de l'operateur '-' (premier cas)
Complexe& Complexe::operator-(const Complexe& c) const
{
	Complexe* nouveau = new Complexe();
	nouveau->Re = this->Re - c.Re;
	nouveau->Img = this->Img- c.Img;
	return *nouveau;
}

//----> Surcharge de l'operateur '-' (deuxieme cas)
Complexe& Complexe::operator-(double d) const
{
	Complexe* nouveau = new Complexe;
	nouveau->Re = this->Re - d;
	nouveau->Img = this->Img;
	return *nouveau;
}


//----> Surcharge de l'operateur '-' (troisieme cas)
Complexe& operator-(double d, const Complexe&c)
{
	Complexe* nouveau = new Complexe();
	nouveau->Re = d - c.Re;
	nouveau->Img = c.Img;
	return *nouveau;
}


//-----> Surcharge de l'operateur '*' (premier cas)
Complexe& Complexe::operator*(const Complexe& c) const
{
	Complexe* nouveau = new Complexe();
	nouveau->Re = (this->Re * c.Re) - (this->Img * c.Img);
	nouveau->Img = (this->Re * c.Img) + (this->Img * c.Re);
	return *nouveau;
}


//-----> Surcharge de l'operateur '*' (deuxieme cas)
Complexe& Complexe::operator*(double d) const
{
	Complexe* nouveau = new Complexe();
	nouveau->Re = this->Re * d;
	nouveau->Img = this->Img * d;
	return *nouveau;
}

//-----> Surcharge de l'operateur '*' (troisieme cas)
Complexe& operator*(double d, const Complexe& c)
{
	Complexe* nouveau = new Complexe();
	nouveau->Re = d * c.Re;
	nouveau->Img = d * c.Img;
	return *nouveau;
}

//-----> Surcharge de l'operateur '/'
Complexe& Complexe::operator/(const Complexe& c) const
{
	double dinominateur = pow(c.Re, 2) + pow(c.Img, 2);
	if (dinominateur == 0) {
		cout << "Division par zéro" << endl;
		exit;
	}
	Complexe* nouveau = new Complexe();
	nouveau->Re = ((this->Re * c.Re) + this->Img * c.Img) / dinominateur;
	nouveau->Img= ((this->Img * c.Re) - this->Re * c.Img) / dinominateur;
	return *nouveau;
}

//----> Surcharge de l'operateur ==
bool Complexe::operator==(const Complexe& c) const
{
	return (this->Re==c.Re)&&(this->Img == c.Img);
}


//-----> le destructeur
Complexe::~Complexe()
{
	//cout << "Appel de destructeur " << endl;
}


