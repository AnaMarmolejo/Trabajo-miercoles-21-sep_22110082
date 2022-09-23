#pragma once

#include <iostream>

class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date();
	Date(int m, int d, int y);  //nombre de los argumentos

	
	void setDate(int m, int d, int y); // metodo para cambiar objeto


	void getDate(int& m, int& d, int& y) const;  // obtener fecha
	void showDate() const; 

	bool isLeap(int y) const; //es el argumento un año bisiesto?
	bool CheckDate(int m, int d, int y) const;  // es el argumento una fecha valida?
};

