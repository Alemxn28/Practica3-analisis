#include<iostream>
#include<cstdlib>
#include<fstream>
int Cociente_uno(int n,int div, int res,int *ct);
int Cociente_dos(int n,int div, int res,int *ct);
int Cociente_tres(int n,int div,int *ct);
int Cociente_tresp(int n,int div,int &ct);
void peor_caso(int a,int *ct);
void peor_casop(int a);
void mejor_caso(int a,int *ct);
using namespace std;
//Funcion principal
int main(){
	int *ct,cont=0;
	ct=&cont;
	cout<<"Peor caso"<<endl;
	peor_caso(20,ct);
	cout<<"Mejore caso"<<endl;
	mejor_caso(20,ct);
}

int Cociente_uno(int n,int div, int res,int *ct){
	*ct=0;
	int q=0;(*ct)++;
	while(n>=div){
		(*ct)++;
		(*ct)++;
		n=n-div;(*ct)++;
		q=q+1;(*ct)++;
	}
	(*ct)++;
	res=n;(*ct)++;
	return q;(*ct)++;
}

int Cociente_dos(int n,int div, int res,int *ct){
	int dd=div;(*ct)++;
	int q=0;(*ct)++;
	int r=n;(*ct)++;
	while(dd<=n){
		(*ct)++;
		(*ct)++;
		dd=2*dd;(*ct)++;
		
	}
	(*ct)++;
	while(dd>div){
		(*ct)++;
		dd=dd/2;(*ct)++;
		q=2*q;(*ct)++;
		if(dd<=r){
			(*ct)++;
			r=r-dd;(*ct)++;
			q=q+1;(*ct)++;
		}
		(*ct)++;
	return q;
	}
}
int Cociente_tres(int n,int div,int *ct){
	*ct=0;
	if(div>n){
		(*ct)++;
		(*ct)++;
		return 0;
	}
	else
	(*ct)++;
	(*ct)++;
	(*ct)++;
		return 1 + Cociente_tres(n-div,div,ct);
}
void peor_caso(int a,int *ct){
	//ofstream archivo;//Declaracion de archivo
	//archivo.open("grafica_Cociente3.csv",ios::out);//Creacion de archivo csv
	int div=1;
	int res;
	for(int i=1;i<a;i++){
		cout<<"Dividendo: "<<i<<endl;
		cout<<"Divisor: "<<div<<endl;
		cout<<"Cociente:"<<Cociente_uno(i,div,res,ct)<<endl;//Cociente_tres(i,div,ct)<<endl;
		cout<<"contador: "<<*ct<<endl;
		//archivo<<i<<",";
		//archivo<<*ct<<endl;
	}
	//archivo.close();//Cierre del archivo csv
}
void mejor_caso(int a,int *ct){
	int res;
	
		for(int i=1;i<a;i++){
		cout<<"Dividendo: "<<i<<endl;
		cout<<"Divisor: "<<i<<endl;
		cout<<"Cociente:"<<Cociente_uno(i,i,res,ct)<<endl;//Cociente_tres(i,div,ct)<<endl;
		cout<<"contador: "<<*ct<<endl;
		//archivo<<i<<",";
		//archivo<<*ct<<endl;
	}
}

int Cociente_tresp(int n,int div,int &ct){
	ct=0;
	if(div>n){
		ct++;
		ct++;
		return 0;
	}
	else
	ct++;
	ct++;
	ct++;
		return 1 + Cociente_tresp(n-div,div,ct);
}

void peor_casop(int a ){
	//ofstream archivo;//Declaracion de archivo
	//archivo.open("grafica_Cociente3.csv",ios::out);//Creacion de archivo csv
	int div=1;
	int res;
	int con=0;
	for(int i=1;i<a;i++){
		cout<<"Dividendo: "<<i<<endl;
		cout<<"Divisor: "<<div<<endl;
		cout<<"Cociente:"<<Cociente_tresp(i,div,con)<<endl;//Cociente_tres(i,div,ct)<<endl;
		cout<<"contador: "<<con<<endl;
		//archivo<<i<<",";
		//archivo<<*ct<<endl;
	}
	//archivo.close();//Cierre del archivo csv
}
