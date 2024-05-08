#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

//int potega

int main()
{
	setlocale(LC_ALL, "");
	
	int liczba[500], n=0, i, x=0;
	
	fstream plik, plik1, plik2;
	
	plik.open("liczby.txt", ios::in | ios::app);
	plik1.open("liczby.txt", ios::in | ios::app);
	plik2.open("wyniki.txt", ios::out);
	
	while(plik>>liczba[n])
	n++;
	
	for(i=0;i<n;i++)
	{
		if(liczba[i]==1) 
		x++;
		while(liczba[i]%3==0)
		{
			liczba[i]=liczba[i]/3;
			if(liczba[i]==1)
			{
			x++;	
//			break;
			}
		}
	}
	cout<<x<<endl;
	int cyfra, iloczyn, suma, lp, c, j;
	for(i=0;i<500;i++)
	{
		plik1>>liczba[i];
		lp=liczba[i];
		suma=0;
		
		while(liczba[i]>=10)
		{
//			liczba[i]=z;
//			if(iloczyn<liczba[i])
			
				cyfra=liczba[i]%10;
				liczba[i]=liczba[i]/10;	
				iloczyn=1;
			if(cyfra>0)
			{
				for(c=cyfra;c>=1;c--)
				{	
					iloczyn=iloczyn*c;
//					cyfra--;
//					cout<<iloczyn<<endl;
				}
			suma=suma+iloczyn;
			}
			if(cyfra==0)
			suma++;
		}
		iloczyn=1;
		for(j=liczba[i];j>1;j--)
		iloczyn=iloczyn*j;
		suma=suma+iloczyn;
		
		if(suma==lp)
		cout<<lp<<endl;
	}
}
