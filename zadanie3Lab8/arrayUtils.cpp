#include "arrayUtils.h"
#include <iostream>
#include <string.h>

char * resizeArray(char * array, unsigned int newSize)
{

    if (array == NULL){
        return nullptr;
    }

    char * tab = new char[newSize];

    if(strlen(array) >= newSize){
        for(unsigned i = 0; i< newSize; ++i){
            tab[i] = array[i];
        }
    }
    else{

        unsigned int i =0;
        for(i =0; i< strlen(array); ++i){
            tab[i] = array[i];
        }
        for(unsigned int j = i; j< newSize; ++j){
            tab[j] = '-';
        }
    }

    return tab;


}
