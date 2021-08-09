#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void selectionsort(int *array, int len)
{
    
    for (int i=0; i<len-1 ; i++)
    {
        for(int j = i+1; j<len; j++)
        {
            if(array[j]<array[i])
                swap(array[i],array[j]);
        }
        
    }
}

int main()
{
    int array[] = {11,23,43,55,64,32,22,333,43,4,5,67,89,32,12,44,55,65,21};
    int size  = sizeof(array)/sizeof(array[0]);
    selectionsort(array,size);
    for (int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
}