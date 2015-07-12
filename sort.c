#include <stdio.h>
#include <string.h>

void exchange(int *data1, int *data2)
{
    assert(data1);
    assert(data2);
}

int *bubbleSort(int array[], unsigned int len)
{
    assert(array);
    int i = 0;
    int j = 0;

    for (i = 0; i < len - 1; i++) {
        for(j = 0; j < len - i - 1; j++) {
            /*ascending order*/
            if (array[j + 1] < array[j]) {
                exchange(&array[j], &array[j + 1]);
            }
        }
    }
}

int *insertSort(int array[], int len)
{
    assert(array);
    int i = 0;
    int j = 0;
    int key = 0;
    
    for (i = 0; i < len - 1; i++) {
        key = array[i];
        for (j = 0; j < len - i - 1; j++) {

        }
    }

}

int partition(int array[], unsigned int start, unsigned int end)
{
    unsigned int i = 0;
    unsigned int index = start;
    unsigned int key = array[end]; 
    for (i = start; i < end; i++) {
        if (array[i] < key) {
            exchange(&array[i], &array[index++]);
        }
    } 
    exchange(&array[index], &array[end]);
    return index;
}
int *quickSort(int array[], unsigned int start, unsigned int end)
{
    unsigned int middle = 0;
    assert(array);
    middle = partition(array, start, end);
    quickSort(array, start, middle - 1); 
    quickSort(array, middle, end); 
}

