#include <iostream>
#include <fstream>

using namespace std;

fstream plik, plik2;

int main()
{
	plik.open("palindromy.txt", ios::in);
	plik2.open("wynik4_1.txt", ios::out);
	
	int liczba[2526], x=0, y, n=0, pal[5];
	
	while(plik>>liczba[n])
	n++;
	
	bool palindrom=false;
	
	for(int i=0;i<2526;i++)
	{
		int bin=liczba[i];
		while(bin>0)
		{
//			x=0;
			y=bin%10;
			bin=bin/10;
			x++;
		}
//		cout<<x<<endl;

		pal[5]=liczba[i];
		cout<<pal[5]<<endl;
			
			for(int j=0;j<5;j++)
			{
				while(j!=x)
				{
					if(pal[j]==pal[x])
					{
						x--;
						palindrom=true;
					}
					else
					{
						palindrom=false;
						break;
					}
				}
			}
		if(palindrom==true)	
			cout<<liczba[i]<<endl;
		x=0;
	}
	
}
