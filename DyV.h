#include<vector>


                   

template <typename T>
int BusquedaBinaria(T X, T V[], int ini, int fin){
	int medio=(ini+fin)/2;
        if(ini > fin){ 
return -1;
	}
        if(V[medio] == X){
                 return medio;
	} 
	else if(V[medio] > X){ 
                 return BusquedaBinaria(X, V, ini, medio-1);
	}
	else{
                 return BusquedaBinaria(X, V, medio+1, fin);
	}
}
template <typename B>
int Partition(B V[], int ini, int fin){
         B x = V[fin];
         B aux;
         int i = ini;
         for(int j = ini;j<=fin - 1;j++){
               if(V[j] <= x){
                       aux=V[i];
                       V[i]=V[j];
                       V[j]=aux;
                     i++;
               }
         }
         aux=V[i];
         V[i]=V[fin];
         V[fin]=aux;
         return i;
}

template <typename B>
int QuickSort( B V[], int ini, int fin){
	if(ini < fin){
                 int pivot = Partition(V, ini, fin);
                 QuickSort(V, ini, pivot - 1);
                 QuickSort(V, pivot + 1, fin);
	}
	return ini;
}
/*
template <typename B>
int Partition(B V[], int ini, int fin){
         B x = V[fin];
	 B aux;
         int i = ini;
         for(int j = ini;fin - 1;i++){
               if(V[j] <= x){
		       aux=V[i];
		       V[i]=V[j];
		       V[j]=aux;
                     i = i + 1;
	       }
	 }
	 aux=V[i];
         V[i]=V[fin];
         V[fin]=aux;
         return i;
}*/
