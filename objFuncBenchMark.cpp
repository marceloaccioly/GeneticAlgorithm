#include <algorithm>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float costFunc(float x[]){
    float _total = 0;
    int len;
    len = sizeof(x);
    for (int i = 0; i <= len; i++)
    {
        /* code */
        _total = pow(x[i],2);
    }


    return _total;
}