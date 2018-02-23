#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>

// digite 3 numeros y muestrelos de mayor a menos en linea distinta

using namespace std;

int main()
{
int x , y , w ,z;

cout<<"ingrese 4 numeros"<<endl;
cin>>x>>y>>w>>z;

if(x<y&&x<w&&x<z)
{
	if(y<w&&y<z)
	{
		cout<<x<<endl;
		cout<<y<<endl;
		cout<<w<<endl;
		cout<<z<<endl;
	}
	else if(w<y&&w<z)
	{
		cout<<x<<endl;
		cout<<w<<endl;
		cout<<y<<endl;
		cout<<z<<endl;
	}
	else if (z<y&&z<w)
	{
		cout<<x<<endl;
		cout<<z<<endl;
		cout<<y<<endl;
		cout<<w<<endl;
	}

}
else if(y<x&&y<w&&y<z)
{
	if(x<w&&x<z)
	{
		cout<<y<<endl;
		cout<<x<<endl;
		cout<<w<<endl;
		cout<<z<<endl;
	}
	else if(w<x&&w<z)
	{
		cout<<y<<endl;
		cout<<w<<endl;
		cout<<x<<endl;
		cout<<z<<endl;
	}
	else if(z<x&&z<w)
	{
		cout<<y<<endl;
		cout<<z<<endl;
		cout<<x<<endl;
		cout<<w<<endl;
	}

}
else if(w<x&&w<y&&w<z)
{
	if(x<y&&x<z)
	{
		cout<<w<<endl;
		cout<<x<<endl;
		cout<<y<<endl;
		cout<<z<<endl;
	}
	else if(y<x&&y<z)
	{
		cout<<w<<endl;
		cout<<y<<endl;
		cout<<x<<endl;
		cout<<z<<endl;
	}
	else if(z<x&&z<y)
	{
		cout<<w<<endl;
		cout<<z<<endl;
		cout<<x<<endl;
		cout<<y<<endl;
	}
}
	else if (z<x&&z<y&&z<w)
	{
		if(x<y&&x<w)
{


     cout<<z<<endl;
     cout<<x<<endl;
     cout<<y<<endl;
     cout<<w<<endl;
}
     else if(y<x&&y<w)
{


     cout<<z<<endl;
     cout<<y<<endl;
     cout<<x<<endl;
     cout<<w<<endl;
}
     else if(w<x&&w<y)
{


     cout<<z<<endl;
     cout<<w<<endl;
     cout<<x<<endl;
     cout<<y<<endl;
}
     }
     cout<<"fin del programa"<<endl;

system("pause");
return 0;
}
