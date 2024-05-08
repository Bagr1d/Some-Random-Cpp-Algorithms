#include<iostream>
#include<fstream>
#include<map>
using namespace std;

fstream dane, rozw1, rozw2a, rozw2b, rozw3;
map<string,int>kraje();

int main()
{
	dane.open("galerie.txt",ios::in);
	rozw1.open("wynik4_1.txt",ios::out);
	rozw2a.open("wynik4_2a.txt",ios::out);
	rozw2b.open("wynik4_2b.txt",ios::out);
	rozw3.open("wynik4_3.txt",ios::out);
	
	string linia();
	int liczba{};
	for(int i=0;i<50;i++)
	{
		for(int j=0;j<142;j++)
		{
			if(j==0 || j==1)
			{
				dane>>linia;
				if(j==0)
				{
					auto itr=kraje.find(linia);
					if(itr!=kraje.end())
						itr->second++;
					else
						kraje.insert({linia,1});
				}
			}
			else
			{
				dane>>liczba;
			}
		}
	}
	rozw1<<"zadanie 4.1"<<endl;
	for(auto const&x:kraje)
	{
		rozw1<<x.first<<" "<<x.second<<endl;
	}
	
	dane.close();
	rozw1.close();
	rozw2a.close();
	rozw2b.close();
	rozw3.close();
}
