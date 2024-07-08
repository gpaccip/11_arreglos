//arreglos2.cpp
//Giorgini Disalvatore Pacci Perez
#include<iostream>

using namespace std;
int main(){
	int n,j=0,k=0;
	int impar[40], par[40], num[10];
		cout<<"Digite un maximo de elementos: ";cin>>n;
		
	for(int i=0; i<n; i++){
			cout<<"Digite el numero "<<i+1<<": ";cin>>num[i];
		if(num[i]%2==0){
			par[j]=num[i];
				j++;
		}
		else{
			impar[k]=num[i];
				k++;
		}
	}
	cout<<"Los numeros pares son: "<<endl;
	for(int i=0; i<j; i++){
	
		cout<<par[i]<<endl;
	}
	cout<<"Los numeros impares son: "<<endl;
	for(int i=0; i<k; i++){
	
		cout<<impar[i]<<endl;
	}
	return 0;
}