//arreglos5.cpp
//Giorgini Disalvatore Pacci Perez

#include <iostream>
using namespace std;
int main(){
    int n, npg, x=0;
    string f[50], p[50];
    	cout<<"Digite el numero de alumnos que hay en FP: ";cin>>n;
    for(int i=1;i<=n;i++){
    	cout<<"Ingrese el nombre del estudiante: ";cin>>f[i];
    }
   		cout<<endl;
    	cout<<"Digite el numero de alumnos que hay en PG: ";cin>>npg;
    for(int i=1;i<=npg;i++){
    	cout<<"Ingrese el nombre del estudiante ";cin>>p[i];
    }
    	cout<<endl;
    	cout<<"Los estudiantes repetidos son:";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=npg;j++){
            if(f[i]==p[j]){
            	cout<<endl;
            	cout<<f[i];
           		x++;
            }
    	}
	}
	cout<<"\nLa cantidad de estudiantes repetidos son: "<<x;
	return 0;
}