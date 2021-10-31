#include <stdlib.h>  /* qsort() */
#include <stdio.h>  
// using qsort for sorting an intarray
 
int intcmp(const void *aa, const void *bb)
{
    const int *a = aa, *b = bb;
    return (*a < *b) ? -1 : (*a > *b);
}
 
int main()
{
    int nums[5] = {6,5,2,1,3};
    qsort(nums, 5, sizeof(int), intcmp);
    printf("result: %d %d %d %d %d\n",
      nums[0], nums[1], nums[2], nums[3], nums[4]);
    return 0;
}
