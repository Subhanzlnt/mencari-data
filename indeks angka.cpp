#include <iostream>
#include <conio.h>
using namespace std;


int main () {
	int x[10]={22,23,23,76,45,34,44,52,64,6};
	int i,j,num;
	int index [5];
	cout << "angka : 22,23,23,76,45,34,44,52,64,6" << endl;
	cout << "Masukkan angka yang ingin anda cari: ";
	cin >> num;
	
	j=0;
	for (i=0; i<10; i++){
		if (x[i]==num){
			index [j]=i;
			j++;
		}
	}
	
	cout << "menampilkan angka " << num << " sebanyak : " << j << endl;
	cout << "data " << num << " terdapat pada indeks ke : ";
	for (int i=0; i<j; i++){
		cout << index[i]+1<< " , ";
	}  
	return 0 ;
}