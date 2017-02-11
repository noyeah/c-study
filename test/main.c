#include <stdio.h>
#include <stdlib.h>

void showElem(int * ary, int len) // show elem
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("%d ", ary[i]);
    }
    printf("\n");
}

void pswap(int * ptr1, int * ptr2) // swap func
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void bubblesort(int ary[], int len) // bubble sort
{
    int i,j,temp;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(ary[j] > ary[j+1])
            {
                pswap(&ary[j],&ary[j+1]);
            }
        }
    }
    showElem(ary, len);
}

int main()
{
    int arr1[] = {4,5,3,1,2};
    int len = sizeof(arr1)/sizeof(int); // Length
    /*
    printf("Before sorting = ");
    showElem(arr1, len);
    printf("After sorting = ");
    bubblesort(arr1,len);
    */
    void (*bbsrt)(int *, int) = bubblesort; // function pointer
    bbsrt(arr1,len);

}
