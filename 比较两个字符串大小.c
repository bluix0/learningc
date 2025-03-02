#include<stdio.h>
#define num 20
int main()

{
    char arr1[num];
    char arr2[num];
    fgets(arr1,sizeof(arr1),stdin);
    fgets(arr2,sizeof(arr2),stdin);
    for(int i=0; i<num; i++)
        if(arr1[i]!=arr2[i])
        {
            printf("%d",arr1[i]-arr2[i]);
            break;
        }
    return 0;
}