#include "DyV.h"
#include <iostream>
#include<chrono>

using namespace std;


int main(){

	int n=10;
	char c[n]={'a','b','c','d','e','f','g','h','i','j'};
	int i[n]={2,4,6,7,9,23,75,78,88,89};
	cout<< "Vector de enteros: ";
	for(int ni=0;ni<n;ni++){
		cout << i[ni]<< ", ";
	}
	int num=4;
	auto start = chrono::system_clock::now();
	int pos= BusquedaBinaria(num,i,0,n-1);
	auto end = chrono::system_clock::now();
	chrono::duration<float, milli> duration = end - start;
	cout << "Time: " << duration.count() << "s en busqueda binaria." << std::endl;

	start = chrono::system_clock::now();
        pos= QuickSort(i,0,n-1);
        end = chrono::system_clock::now();
        chrono::duration<float, milli> dur = end - start;
        cout << "Time: " << dur.count() << "s en QuickSort." << std::endl;


	cout<< endl << "El número " << num << " está en la posición " << pos <<"."<< endl;	

	   for(int ni=0;ni<n;ni++){
                cout << c[ni]<< ", ";
        }
	char car='c';
        int posf= BusquedaBinaria(car,c,0,n-1);


        cout<< endl << "La letra " << car << " está en la posición " << posf <<"."<< endl;



}
