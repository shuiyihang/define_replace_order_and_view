
#include "define.h"
#include "stdio.h"
/*
宏定义的替换顺序及宏定义的查看
参考:https://blog.csdn.net/FJDJFKDJFKDJFKD/article/details/83385708
*/
#define PRINT_MACRO_HELPER(x) #x
#define PRINT_MACRO(x) #x"="PRINT_MACRO_HELPER(x)

int main()
{
    #pragma message(PRINT_MACRO(DT_NODE_HAS_STATUS(DT_N_ALIAS_led0, okay)))
    

    return 0;
}
