#include <iostream>
#include "string.h"
#include "arrayUtils.h"

using namespace std;


void wyswietl(char* array){

    cout << "Utworzony lancuch znakow:" << endl;
    for (int i = 0; i < strlen(array); i++)
    {
        cout << array[i];
    }
    cout << endl;

}

void napisy(){

    unsigned int sizeOfTab = 5;
    char *array = new char [sizeOfTab];
    unsigned int index = 0;

    char c;
    char poprzedni = '\0';

    while(true){

        cout << "Wpisz znak: ";
        cin >> c;

        if(c == poprzedni){
            break;
        }
        else{
            poprzedni = c;
        }
        if (index == sizeOfTab)
        {
            char * newArray = resizeArray(array, sizeOfTab + 5);
            array = newArray;
            sizeOfTab += 5;
        }

        array[index] = c;
        index++;
    }
    resizeArray(array, index);
    wyswietl(array);
    delete []array;

}


int main()
{
    napisy();
    return 0;
}

//zmiana
