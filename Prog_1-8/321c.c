#include <stdio.h>
#include <stdlib.h>
#include "prog1.h"


int main()
{
    string s = "20";
    int szam = atoi(s); // atoi --> átalakít egy stringet integer-é, atof --> egy lebegőpontos stringet átalakít integer-é

    printf("%d\n", szam +1);

    return 0;
}