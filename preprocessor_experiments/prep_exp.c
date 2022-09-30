#include <stdio.h>
#include "prep_head.h"

int main(void)
{
    int a = 25;
    debug_print("a = %d\n", a);
//    printf("LINE=%d FUNCTION=%s FILE=%s DATE=%s TIME=%s\n", __LINE__, __FUNCTION__, __FILE__, __DATE__, __TIME__);
    return 0;
}
