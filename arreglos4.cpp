//arreglos4.cpp
//Giorgini Disalvatore Pacci Perez

#include <iostream>
using namespace std;
void multiplo(int, int);
int main(){
    double n,mul;
    	cout<<"Digite los numeros que desea generar: ";cin>>n;
		cout<<"Digite el multiplo: ";cin>>mul;
   		multiplo(mul,n);
	return 0;
}

void multiplo(int mul,int n){
    int A[50];
    cout<<endl;
    cout<<"El arreglo quedaria asi: ";
    for(int i=1; i<=n;i++){
        A[i]=mul*i;
        cout<<A[i]<<", ";
	}
}