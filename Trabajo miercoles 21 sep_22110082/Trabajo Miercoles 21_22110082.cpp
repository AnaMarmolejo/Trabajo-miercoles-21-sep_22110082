// Trabajo Miercoles 21 de septiembre_22110082.cpp 
//Ana Rosa Marmolejo Cervantes 2°O 22110082

#include <iostream>  //librerias
#include "Date.h"
using namespace std;


Date::Date(int d, int m, int y) //constructor de fecha
{
    if (CheckDate(day, month, year))
    {
        day = d;
        month = m;
        year = y;
    }
}

void Date::getDate(int& d, int& m, int& y) const //obtener la fecha
{
    d = day;
    m = month;
    y = year;
}

bool Date::CheckDate(int day, int month, int year) const
{
    bool result = true;
    int daysInMonths[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (year < 1800 || year>2100)
        result = false;
    if (isLeap(year))
    {
        daysInMonths[1] = 29;
    }
    if (month < 1 || month > 12)
    {
        result = false;
    }
    else if (day < 1 || day > daysInMonths[month - 1])
    {
        result = false;
    }
    return result;
}

bool Date::isLeap(int year) const
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return true;
    else
        return false;
}


int main()
{

        int day, month, year;

        cout << "Inserte fecha  Day/Month/Year : \n";

        cin >> day >> month >> year; 
        Date d1(day, month, year); //instanciando la clase creando un objeto
        d1.CheckDate();

        return 0;

}

       /* if (1000 <= year <= 3000)
        {
            if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 0 && day <= 31)
                cout << "Valid";
            else
                if (month == 4 || month == 6 || month == 9 || month == 11 && day > 0 && day <= 30)
                    cout << "Valid";
                else
                    if (month == 2)
                    {
                        if ((year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) && day > 0 && day <= 29)
                            cout << "Valid";
                        else if (day > 0 && day <= 28)
                            cout << "Valid";
                        else
                            cout << "Invalid";
                    }
                    else
                        cout << "Invalid";
        }
        else
            cout << "Invalid";
            */
