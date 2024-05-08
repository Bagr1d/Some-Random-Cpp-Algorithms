#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

fstream plik;

int main()
{
	plik.open("sort.txt", ios::in);
	
//	int tab[10] = {7, 4, 8, 10, 5, 2, 9, 3, 1, 6};
	
	int n=4, tab[n];
	for(int y=0;y<n;y++)
	{
		plik>>tab[y];
	//	cout<<tab[y]<<" ";
	}
//cout<<endl;

	int i=0;
	while(i<n-1)
	{
		int j=0;
		while(j<=n-1)
		{
			if(tab[j]>tab[j+1])
			{
				swap(tab[j],tab[j+1]);
//				cout<<tab[j];
//				cout<<endl;
			}
	   		j++;
		}
	//	i++;

	for(int x=0;x<n;x++)
	{
		cout<<tab[x]<<" ";
	}
	i++;
}
}




