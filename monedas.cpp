#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;


int cambio(int v[][10], int N, int M, int monedas[][10]){
	if(monedas[N][M]<0){
	
		if(M==0&&N==0){
			monedas[N][M]=v[N][M];
		}
		else{
			if(N==0){
			monedas[N][M]=v[N][M]+cambio(v,N,M-1,monedas);
			}
			else if(M==0){
				monedas[N][M]=v[N][M]+cambio(v,N-1,M,monedas);
			}
			else{
				monedas[N][M]=max(v[N][M]+ cambio(v,N-1,M,monedas),v[N][M]+ cambio(v,N,M-1,monedas));
			}
	}}
	return monedas[N][M];
}



int main(){
	int N=10, M=10;	
	int b[10][10];
	srand(time(NULL));
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			b[i][j]=rand()%20;
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	int monedas[10][10];
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			monedas[i][j]=-1;
		}
	}

	int ncambio=cambio(b,N-1,M-1,monedas);
	cout << "El numero de monedas es: " << ncambio << endl;
	return 0;
}
