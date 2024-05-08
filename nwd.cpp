#include<iostream>
#include<fstream>

using namespace std;

fstream plik;


int main()
{
	int a;
	int b;
	cin>>a;
	cin>>b;
	while(a!=b)
	{
		if(a<b)
			b-=a;
		else
			a-=b;
	}
	
	cout<<a<<endl;
}
