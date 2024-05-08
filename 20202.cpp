#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

main()
{
	int liczba[100], i, cyfra;
	
	fstream plik, plik2;
	
	plik.open("pary.txt", ios::in | ios::app);
	plik2.open("wyniki4.txt", ios::out);
	
	string linia;
	
	do
	{
	getline(plik, linia);
	cout<<linia<<endl;
	}while(linia!="");
	
//	for(i=0;i<100;i++)
//	{
//	plik>>liczba[i];
//	cout<<liczba[i]<<endl;
//	}
	
	plik.close();
	plik2.close();
}
