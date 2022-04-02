#include<iostream>
#include<stdlib.h> 
#include<time.h>
#include<algorithm>
using namespace std;
void generate_array_plus(int *array, int n);
void tests(int test_number,int num);
void algorithm(int a,int *arr,int num);
void sort(int *array,int n);
using namespace std;
int main(){

tests(50,4);
//algorithm(&cp,7,array);

return 0;
}

void algorithm(int a,int *arr,int num){
	int i, j,aux,top,first,mitad;
	bool flag = false;
	top=a;
	first=0;
	i=first+(top-first)/3;
	j=top-(top-first)/3;
	
	
	//cout<<aux<<endl;
	cout<<"Contador i: "<<i<<endl;
	cout<<"Contador j: "<<j<<endl;	
	while(first<i && i<j && j<top){
		cout<<"contador inicio de ciclo i: "<<i<<endl;
		cout<<"contador inicio de ciclo j: "<<j<<endl;
		if(arr[i]==num){
			cout<<"Posicion del numero: "<<i-1<<"Valor :"<<arr[i]<<endl;
			flag = true;
			break;
		}
		else if(arr[j]==num){
			cout<<"Posicion del numero: "<<j-1<<"Valor :"<<arr[j]<<endl;
			flag = true;
			break;
		}
		else if(num<arr[i]){
			j=i;
			cout<<"cambio de posicion de j a i"<<j<<endl;
			i=(first+j)/2;
		}
		else if(arr[i]<num && num<arr[j]){
			first=i;
			cout<<"Cambio de poscion de first a i"<<first<<endl;
			i=(first+j)/2;
		}
		
		else if(arr[j]<num){
			i=j;
			cout<<"Cambio de posicion de i a j"<<i<<endl;
			j=(i+top)/2;
		}
		
	}
	if(flag==false){
		cout<<"No se encuentra el elemento en el arreglo"<<endl;
	}
}
void generate_array_plus(int *array, int n){
  srand(time(NULL));
  for(int i=0; i<n; i++){
    array[i] = rand() % n;
    sort(array,n);
    cout<<"["<<i<<"]"<<": "<<array[i];
  	cout<<endl;
  } 
  cout<<endl;
}
void tests(int n,int num){

  for(int i=3; i<n; i++){
  	
    int array[i];
    generate_array_plus(array,i);
    algorithm(i,array,num);
  }
}
void sort(int *array,int n){
	int pos,aux;
	for(int i=0;i<n;i++){
		pos=i;
	aux=array[i];
		while((pos>0)&&(array[pos-1])>aux){
			array[pos]=array[pos-1];
			pos--;
		}
		array[pos]=aux;
	}
}
