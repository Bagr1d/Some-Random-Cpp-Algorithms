#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

main()
{
	setlocale(LC_ALL, "");
	
	int zmienna; 
	double l, n;
	
	cout<<"Podaj liczbê rzeczywist¹ l: ";
	cin>>l;
	cout<<endl;
		
	cout<<"Podaj liczbê rzeczywist¹ n: ";
	cin>>n;
	cout<<endl;

	cout<<"Co mam zrobiæ?\n1. wyliczyæ n-t¹ potêgê liczby l?\n2. wyliczyæ n-ty pierwiastek z liczby l?\n0. czy zakoñczyæ dzia³anie?"<<endl;

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
		cout<<"Spróbuj ponownie :))";
	}
}
