#include <stdio.h>
#include "arith.h"
int main(int argc, char const *argv[])
{
    printf("friend addition is %d\n",add(30,20));
    printf("friend subtraction is %d\n",sub(40,20));
    return 0;
}