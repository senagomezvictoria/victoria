#include <iostream>
using namespace std; 
int main()
{
int aux, numeros1[5],numeros2[5],numeros3[10];
 int i,j;
for (i=0;i<5;i++){
 cout<<"Escriba un n�mero"<<endl;
 scanf("%d",&numeros1[i]);
 }
 
for(i=0;i<5;i++)
{
 numeros2[i]=numeros1[i]*2;
}
for(i=0;i<5;i++)
{
 numeros3[i]=numeros1[i];
}
for(i=0;i<5;i++)
{
 numeros3[5+i]=numeros2[i];
}
for (i=0;i<10;i++){
 printf("%d\n",numeros3[i]);
}
 
system("PAUSE"); 
 return 0;
}
