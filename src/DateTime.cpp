//
// Created by Alexander on 06.03.2019.
//
#include "DateTime.h"
#include<ctime>
#include <string.h>
#include <math.h>
#include <iostream>


void translate_to_lower(char* data)
{
    for (int i = 0; i < strlen(data); i++)
    {
        if (isupper(data[i]))
        {
            data[i] = tolower(data[i]);
        }
    }
}

char* DateTime::getToday() {
    char * data = new char[50];
    time_t rawtime = DateTime::rawtime;
    tm *timeinfo = localtime(&rawtime);
    const char *format = "%d %B %Y, %A";
    strftime(data, 50, format, timeinfo);
    translate_to_lower(data);
    return data;
}