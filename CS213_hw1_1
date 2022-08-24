#include <iostream>
using namespace std;

double *takeTurnCombine(double* arr1, int n1, double* arr2, int n2){
	if((!arr1 && !arr2) || (n1 == 0 && n2 == 0)) return NULL;
	double * arrComb = new double[n1+n2];
	bool turn = true;
	int count = 0, indexArr1=0, indexArr2=0;
	for(int i=0;i<2*(n1<n2?n1:n2);i++){
		if(turn){
			arrComb[i] = arr1[indexArr1];
			indexArr1++;
			turn = false;
		}
		else {
			arrComb[i] = arr2[indexArr2];
			indexArr2++;
			turn = true;
		}
		count++;
	}
	if(n1==n2){

	}
	else if(n1<n2){
		for(int i=count;i<n1+n2;i++){
			arrComb[i] = arr2[indexArr2];
			indexArr2++;
		}
	}
	else {
		for(int i=count;i<n1+n2;i++){
			arrComb[i] = arr1[indexArr1];
			indexArr1++;
		}
	}
	return arrComb;
}

void print(string nameArr,double* arr, int n){
	if(!arr || n == 0){
		cout << nameArr <<" is NULL or size 0" << endl;
	}
	else {
		cout << nameArr << " of size " << n << endl;
			for(int i=0;i<n;i++){
				cout << *arr;
				if(i<n-1) cout << ", ";
				arr++;
			}
		cout << endl;
		}
	}

int main() {
	double arr1[] = {1, 3, 5, 7};
	double arr2[] = {2, 4, 6, 8, 12.5, 13, 34};
	double *arr3 = takeTurnCombine(arr1, 4, arr2, 7);
	double *arr4 = takeTurnCombine(arr2, 7, arr1, 4);
	double *arr5 = takeTurnCombine(arr2, 7, arr2, 7);
	double blankA[0];
	double *blankCombine = takeTurnCombine(blankA, 0, blankA, 0);
	// ***********
	// MUST print all results. After finished before exit, deallocate all heap memories
	// ***********
	print("arr1", arr1, 4);
	print("arr2", arr2, 7);
	print("arr3", arr3, 11);
	print("arr4", arr4, 11);
	print("arr5", arr5, 14);
	print("blankA", blankA, 0);
	print("blankCombine", blankCombine, 0);
	// ** deallocate memory for all created arrays. Only one example is given here
	delete [] arr3;
	delete [] arr4;
	delete [] arr5;
	delete [] blankCombine;
	return 0;
}
