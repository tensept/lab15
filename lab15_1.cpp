#include <iostream>
using namespace std;

template <typename T>
/*void swap(T d[],int x,int y){
	T temp = d[x];
	d[x] = d[y];
	d[y] = temp;
}
void (moveMin2End)(T d[, int e]){
	for(int i =0;i < e-1; i++){
		if(d[i]<d[i+1]) swap(d,i+1,i);
	}
}*/
void insertionSort(T d[],int N){
	for(int i=1; i<N; i++){
	    cout << "Pass " << i << ":";
		T a = d[i];
		int j = i-1;  
	
	while(a > d[j] && j >= 0){
		d[j+1] = d[j];
		--j;
		}
	d[j+1] = a;

	for(int k=0; k <N; k++){
		cout << d[k] << " ";
	}
	cout << "\n";
}
}
	
int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
