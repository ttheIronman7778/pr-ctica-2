#include <iostream>
#include <algorithm>
using namespace std;

int Knapsack(int i, int C, int* w, int* v) {
	if (i < 0) {
		return 0;
	} else if (C < w[i]) {
		return Knapsack(i - 1, C, w, v);
	} else {
		return max(Knapsack(i - 1, C, w, v), v[i] + Knapsack(i - 1, C - w[i], w, v));
	}
}

int main() {
	int nobj = 4, capacidad = 5;
	int valor[5][4];
	int precioobj[] = {10, 20, 15, 20};
	int pesoobj[] = {1, 3, 2, 4};
	for (int i = 0; i < capacidad; i++) {
		for (int j = 0; j < nobj; j++) {
			valor[i][j] = Knapsack(j, i, pesoobj, precioobj);
		
		}
	}
	int preciototal = Knapsack(nobj - 1, capacidad, pesoobj, precioobj);
	std::cout << " el valor total es de " << preciototal << std::endl;
	return 0;
}