#include <iostream>
#include <fstream>

using namespace std;

fstream plik;

int NWD(int a,int b)
{
	if(b!=0)
	{
		return NWD(b,a%b);
	}
	return a;
}

int main()
{
	setlocale(LC_ALL,"");
	
	plik.open("liczby.txt", ios::in);
	
	int tab[500], n=0, dmaks=0;
	
	while(plik>>tab[n])
	n++;
	
	int odzielnik, opierwsza;
	
	for(int i;i<500;i++)
	{
		int pierwsza=tab[i];
		int dl=0;
		int dzielnik=tab[i];
		for(int j=i++;j<500;j++)
		{
			dzielnik=NWD(dzielnik,tab[j]);
			if(dzielnik>1)
			{
				dl++;
				if(dl>dmaks)
				{
					odzielnik=dzielnik;
					dmaks=dl;
					opierwsza=pierwsza;
				}
			}
			else
			break;
		}
	}
	cout<<odzielnik<<" "<<dmaks<<" "<<opierwsza;
}

