#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout<<"Podaj x"<<endl;
	cin>>x;
	if(x>=-2 && x<2)
	{
	y=(-1.5)*x;
	}
	else if(x<-2)
	{
		x+=4;
		y=(-1.5)*x;
	}
		
	else if(x>2)
	{
		x-=4;
		y=(-1.5)*x;
	}
		

	cout<<y;
}
