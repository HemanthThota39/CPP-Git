//repeatedly swapping the adjacent elements

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
void bubblesort(int array[], int len)
{
    int flag = 0;
    do{
        for (int i=0; i<len-1; i++)
        {   int no_of_swaps = 0;
            if (array[i]>array[i+1]){
                swap(array[i],array[i+1]);
                no_of_swaps++;
            }
            if(no_of_swaps == 0)
                flag = 1;   
        }
        
        
    }while(flag!=1);
    
}

int main()
{
    int array[] = {12,34,76,11,2,6,87};
    bubblesort(array, sizeof(array)/sizeof(array[0]));
    for (int i=0; i<sizeof(array)/sizeof(array[0]); i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}