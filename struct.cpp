#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct osoba{
	string imie;
	string nazwisko;
	int wiek;
};
osoba nazwa;
osoba prac[3];

int main()
{
	nazwa.imie="jan";
	nazwa.nazwisko="kowalski";
	nazwa.wiek=55;
	
	cout<<nazwa.imie;
}

