#include<stdio.h>
int main()
{
    int array[]={12,32,43,5445,52,32,34,23,454};
    int total_element=sizeof(array)/sizeof(array[0]);
    for(int i=1;i<total_element;i++)
    {
        int j=i-1;
        int key=array[i];
        while(j>0 && array[j]>key)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
for(int i=0;i<total_element;i++)
printf("%d ",array[i]);
}
