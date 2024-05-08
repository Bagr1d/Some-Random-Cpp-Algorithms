#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

main()
{
	int liczba[500], i, n=0, k=0, j;
	
	fstream plik, plik2;
	
	plik.open("dane.txt", ios::in | ios::app);
	plik2.open("wyniki4_1.txt", ios::out);
	
	while(plik>>liczba[n])
	n++;
	
	for(j=0;j<n;j++)
	cout<<liczba[j]<<endl;
	
	for(i=0;i<n;i++)
	{
		if(liczba[i]%2==0 or liczba[i]%3==0 or liczba[i]%5==0 or liczba[i]%7==0)
		{
		k=k;
//		cout<<"x"<<endl;
		}
		else
		{
		k++;
//		cout<<liczba[i]<<endl;
		}
	}
//	cout<<k;
}
