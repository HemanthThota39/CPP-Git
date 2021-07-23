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
    int array[] = {12,23,3,65,81};
    selectionsort(array,5);
    for (int i=0; i<5; i++)
    {
        cout<<array[i]<<" ";
    }
}