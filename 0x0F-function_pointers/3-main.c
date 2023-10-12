#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
    int finalRes;
    finalRes = get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]));
		
    if (argc == 4)
    {
        printf("%d\n", finalRes);
        return (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
    }
    else
    {
        return 0;
    }
    
}
