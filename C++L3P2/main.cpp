//
//  main.cpp
//  C++L3P2
//
//  Created by Tadeusz Potoniec on 23/01/2023.
//Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo

#include <iostream>
#include <unistd.h> //The library used for countdown time

using namespace std;
int population=1; int hours;

int main() {
    do{
        hours++;
        population=population*2;
        cout<<"passed hours: "<<hours<<endl;
        cout<<"number of bacteria: "<<population<<endl;
        
    }while(population<=1000000000);
    return 0;
}
