#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main (){
	char kata [100];
	
	cout<<"Masukan dengan huruf kecil = ";
	gets (kata);
	strupr (kata);
	
	cout<<"Hasil dengan huruf kapital = "<<kata;
	getch ();
}
