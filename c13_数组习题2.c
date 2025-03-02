/**********************************
程序：按照一定规律转换字母
编者：bluix0
时间：2025.3.2
**********************************/
#include<stdio.h>
#include<ctype.h>
/*初版
int main()
{   
    for(char n;(n= getchar())!='\n';)
        if(isupper(n)) {
            n='A'+'Z'-n;
            printf("%c",n);
        }
        else if(islower(n)) {
            n='a'+'z'-n;
            printf("%c",n);
        }
        else
            printf("%c",n);

    return 0;
}
*/
int main()
{
char arr[100]={0};
char arr2[100]={0};
fgets(arr,sizeof(arr),stdin);
for(int i=0;arr[i]!=0;i++)
        if(isupper(arr[i])) {
            arr2[i]='A'+'Z'-arr[i];
        }
        else if(islower(arr[i])) {
            arr2[i]='a'+'z'-arr[i];
        }
        else
            arr2[i]=arr[i];
printf("密码：%s",arr);
printf("原文：%s",arr2);
return 0;
}
