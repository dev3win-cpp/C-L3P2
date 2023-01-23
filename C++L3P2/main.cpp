//
//  main.cpp
//  C++L3P2
//
//  Created by Tadeusz Potoniec on 23/01/2023.
//  Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo

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
/*
 In C++, "while" and "do-while" are both loops, but they behave slightly differently.

 A "while" loop repeatedly executes a block of code as long as a given condition is true. The loop starts by testing the condition, and if it is true, the block of code is executed. Then the condition is tested again, and the process repeats. If the condition is false, the loop stops.

 A "do-while" loop is similar, but the block of code is executed first, before the condition is tested. If the condition is true, the loop continues, and the block of code is executed again. If the condition is false, the loop stops.

 In simple terms, while loop will check the condition before the execution of the loop, and if the condition is false it will never enter the loop. Do while loop will execute the loop first and then check the condition.
 */
