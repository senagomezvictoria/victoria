#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
int x,y;
for (x=0;x<8;x++)
{
for (y=0;y<8;y++)
{
//peones
if (x==1 || x==6)
{
	cout<<"P"<<endl; 
}
//torres
else if ((x==0 && y==0) ||
(x==7 && y==0) ||
(x==0 && y==7) ||
(x==7 && y==7)
)
{
	cout<<"T"<<endl; 
}
//caballos
else if ((x==0 && y==1) ||
(x==7 && y==1) ||
(x==0 && y==6) ||
(x==7 && y==6)
)
{
cout<<"C"<<endl; 
}
//alfiles
else if ((x==0 && y==2) ||
(x==7 && y==2) ||
(x==0 && y==5) ||
(x==7 && y==5)
)
{
	cout<<"A"<<endl;
}
//reina
else if ((x==0 && y==3) ||
(x==7 && y==3)
)
{
	cout<<"M"<<endl; 
}
//rey
else if ((x==0 && y==4) ||
(x==7 && y==4)
)
{
	cout<<"R"<<endl; 
}
else
{
cout<<" "<<endl;
}
}
cout<<" "<<endl;
}
system("PAUSE");
return 0;
}
