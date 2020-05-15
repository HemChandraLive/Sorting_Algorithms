#include<stdio.h>
int main()
{
    int array[]={12,32,43,5445,52,32,34,23,454};
    int total_element=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<total_element;i++)
    {
        for(int j=0;j<total_element-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
for(int i=0;i<total_element;i++)
printf("%d ",array[i]);
}
