
using namespace std;
#include<iostream>
void llenar(int V[],int n);
void mostrar(int V[],int n);
void Ceroz(int V[], int n);
int main(){
	int Vec[1000];
		
    llenar(Vec,1000);
	Ceroz(Vec,1000);
	mostrar(Vec,1000);
		
}
void llenar(int V[],int n){
	for(int i=2;i<1000;i++)
	  V[i]=1;
}

void mostrar(int V[], int n){
	for(int i=0;i<1000;i++){
		if(V[i]==1)
	      cout<<i<<endl;
	}
	   
}

void Ceroz(int V[], int n){
	for(int i=2;i<1000;i++){
		if(V[i]==1){
			for(int j=i+1;j<1000;j++){
				if(j%i==0)
					 V[j]=0;
			}
		}	     
	}	     			
}
	


