#include<stdio.h>
int main()
{
    int array[]={12,32,43,5445,52,32,34,23,454};
    int loc;

    int total_element=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<total_element;i++)
    {
       loc=i;
        for(int j=i+1;j<total_element;j++)
        {
            if(array[j]<array[loc])
            loc=j;
           // printf("%d\n",loc);
        }
        if(i!=loc)
        {
            int temp=array[i];
            array[i]=array[loc];
            array[loc]=temp;
        }
         printf("\n");
    }
for(int i=0;i<total_element;i++)
printf("%d ",array[i]);
}
