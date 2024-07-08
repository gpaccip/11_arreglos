//arregos3.cpp
//Giorgini Disalvatore Pacci Perez
#include <iostream>

using namespace std;
int main(){
    string Dias[]={"vacio","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    double Menor=100,T,Tmed,min[8],max[8],x;
    for(int i=1;i<=7;i++){
		cout<<"Temperatura del dia "<<Dias[i]<<": "<<endl;
    	cout<<"Digite la temperatura minima: ";cin>>min[i];
    	cout<<"Digite la temperatura maxima: ";cin>>max[i];
    	cout<<endl;
    }
    for(int i=1;i<=7;i++){
    	cout<<"Temperatura media del "<<Dias[i]<<" es: ";
   		Tmed=(min[i]+max[i])/2;
		cout<<Tmed<<endl;
		
		if(min[i]<Menor){
        Menor=min[i];
        
    }
	}
    	cout<<endl;
    	cout<<"La menor temperatura es: "<<Menor<<endl;
    	cout<<endl;
    	cout<<"Digite una temperatura maxima: ";cin>>T;
    for(int i=1;i<=7;i++){
    if(T==max[i]){
        cout<<"Esa temperatura conincide con el dia: \n";
		cout<<Dias[i]<<endl;  
	}else{
        cout<<"No hay valor igual. "<<endl;
        }
    }
	return 0;
}