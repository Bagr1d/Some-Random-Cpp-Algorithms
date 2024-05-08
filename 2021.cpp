#include <iostream>
#include <fstream>

using namespace std;
fstream plik;
struct g{
	string kraj = "";
	string miasto = "";
	int x[70]={0};
	int y[70]={0};
};
g galerie[50];

void otworzPlik(){
	plik.open("galerie.txt", ios::in);
	for(int i=0;i<50;i++) {
		plik>>galerie[i].kraj;
		plik>>galerie[i].miasto;
		for(int j=0;j<70;j++){
			plik>>galerie[i].x[j];
			plik>>galerie[i].y[j];
		}
		
	}
	plik.close();
	
}

void wypiszDane(){
	for(int i=0;i<50;i++) {
		cout<<galerie[i].kraj<<" "<<galerie[i].miasto;
		for(int j=0;j<70;j++){
			cout<<" "<<galerie[i].x[j]<<" ";
			cout<<galerie[i].y[j];
		}
		cout<<endl;
	}
}

void zadanie1(){
	string kraj[70];
	int liczba[70]={0};
	int licznik=-1;
	bool wyst;
	for(int i=0;i<50;i++){
		wyst=false;
		for(int j=0;j<licznik;j++){
			if(galerie[i].kraj==kraj[j]){
				liczba[j]++;
				wyst=true;
			}
		}
		if(!wyst){
			licznik++;
			kraj[licznik]=galerie[i].kraj;
			liczba[licznik]=1;
		}
	}
	plik.open("wynik4_1.txt",ios::out);
	for(int j=0;j<=licznik;j++){
		plik<<kraj[j]<<" "<<liczba[j]<<endl;
	}
	plik.close();
}

void zadanie2(){
	plik.open("wynik4_2a.txt",ios::out);
	int suma, licznik;
	for(int i=0;i<50;i++){
		suma=0;
		licznik=0;
		for(int j=0;i<70;j++){
			suma+=galerie[i].x[j]*galerie[i].y[j];
			if(galerie[i].x>0)
			licznik++;
			else
			break;
		}
		plik<<galerie[i].miasto<<" "<<suma<<" ";
		cout<<licznik<<endl;
	}
	plik.close();
}

int main()
{
	otworzPlik();
//	wypiszDane();
//	zadanie1();
//	zadanie2();
}
