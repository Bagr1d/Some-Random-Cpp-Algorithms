#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

main()
{
	setlocale(LC_ALL, "");
	
	int zmienna; 
	double l, n;
	
	cout<<"Podaj liczb� rzeczywist� l: ";
	cin>>l;
	cout<<endl;
		
	cout<<"Podaj liczb� rzeczywist� n: ";
	cin>>n;
	cout<<endl;

	cout<<"Co mam zrobi�?\n1. wyliczy� n-t� pot�g� liczby l?\n2. wyliczy� n-ty pierwiastek z liczby l?\n0. czy zako�czy� dzia�anie?"<<endl;

	cin>>zmienna;
	
	switch(zmienna)
	{
	case 0:
		cout<<"Oki to pa :**";
		break;
	case 1:
		cout<<pow(l,n);
		break;
	case 2:
		if(l<0)
		cout<<"Oj no nie da rady :((";
		else
		cout<<pow(l,1/n);
		break;
	default:
		cout<<"Spr�buj ponownie :))";
	}
}
