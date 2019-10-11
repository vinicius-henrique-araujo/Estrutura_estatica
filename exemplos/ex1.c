#include <stdio.h>

int main(void){
    float v[10];
    for (int i = 0; i<10;i++)v[i] = 10-i;
    for (int i = 0; i<10;i++)v[i] = v[i];
}