#include<iostream>
#include<fstream>

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
	plik.open("przyk.txt",ios::in);
	int liczba[8];
	int n, k=0, x;
	while(plik>>liczba[n])
	n++;
	int a=0;
	for(int i=0;i<8;i++)
	{
		int b=liczba[i];
		a=NWD(a,b);
		NWD(a,b);
		if(a!=1)
		k++;
		else
		break;
}
	cout<<a<<" "<<k;

}
