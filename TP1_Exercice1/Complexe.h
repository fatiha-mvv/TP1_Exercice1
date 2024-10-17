#pragma once
class Complexe
{
private:
	// les attributs
	double Re;  //partie r�elle
	double Img; // partie imaginaire
public:
//fusion d'un constructor sans param�tre et d'un constructor avec param�tres
	Complexe(double re=0.0,double im=0.0);
	Complexe(const Complexe&);
	//--------------------------------------------------
	void afficher()const;
	double module()const;
	Complexe conjugue()const;
	//--------------------------------------------------
	//1 premier cas
	Complexe& operator+(const Complexe&)const;
	//2 deuxieme cas
	Complexe& operator+(double)const;
	//3 troisieme cas 
	friend Complexe& operator+(double,const Complexe&);
	//--------------------------------------------------
	//1 premier cas
	Complexe& operator-(const Complexe&)const;
	//2 deuxieme cas
	Complexe& operator-(double)const;
	//3 troisieme cas
	friend Complexe& operator-(double, const Complexe&);
	//--------------------------------------------------
	//1 premier cas
	Complexe& operator*(const Complexe&)const;
	//2 deuxieme cas
	Complexe& operator*(double)const;
	//3 troisieme cas
	friend Complexe& operator*(double, const Complexe&);
	//--------------------------------------------------
	Complexe& operator/(const Complexe&)const;
	//--------------------------------------------------
	bool operator==(const Complexe&)const;
	//--------------------------------------------------
	//le destructeur
	~Complexe();
};

// NB:  '+' est un operateur binaire 
/* on a utilis� le mot cl� friend pour indiquer que
la fonction a acc�s aux membres priv�s de la classe 
sans �tre une m�thode membre
*/