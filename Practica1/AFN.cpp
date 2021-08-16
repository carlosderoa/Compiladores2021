#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

list<int> crearEstados(int num)
{
    list<int> Estados;
    for(int i=0; i<numE; i++){
        Estados.push_back(i);
    };
    return Estados;
}

list<char> ingresarSimbolos(int num)
{
    list<char> Simbolos;
    char c;
    for(int i=0; i<num; i++){
        cout << "\t Simbolo " << i+1 << " : ";
        cin >> c;
        Simbolos.push_back(c);
    };
    return Simbolos;
}

class AFN{
    int num;  // Numero de estados
    int numS;  // Numero de simbolos
    list<int> Estados;
    list<char> Simbolos;
};

