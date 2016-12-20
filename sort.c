#include <stdio.h>
#include <string.h>

#define EXCHANGE(data1, data2)  do {\
        (data1) = (data1) ^ (data2);\
        (data2) = (data1) ^ (data2);\
        (data1) = (data1) ^ (data2);\
    }while(0)


static int partition(int array[], unsigned int start, unsigned int end)
{
    unsigned int i = 0;
    unsigned int index = start;
    unsigned int key = array[end]; 
    for (i = start; i < end; i++) {
        if (array[i] < key) {
           EXCHANGE(array[i], array[index++]);
        }
    } 
    EXCHANGE(array[index], array[end]);
    return index;
}
void quickSort(int array[], unsigned int start, unsigned int end)
{
    unsigned int middle = 0;
    assert(array);
    middle = partition(array, start, end);
    quickSort(array, start, middle - 1); 
    quickSort(array, middle, end); 
}

void bubblesort(int array[], unsigned int len)
{
    assert(array);
    int i = 0;
    int j = 0;
    for (i = 0; i < len - 1; i++) {
        for(j = 0; j < len - i - 1; j++) {
            /*ascending order*/
            if (array[j + 1] < array[j]) {
                EXCHANGE(array[j], array[j + 1]);
            }
        }
    }
}

void insertsort(int array[], unsigned int len)
{
    assert(array);
    int i = 0;
    int j = 0;
    int key = 0;

    for (i = 1; i < len; i++) {
        key = array[i]
        for (j = 0; j < i + 1; j++) {
            if (key < array[j]) {
                EXCHANGE(array[j], key);
            }
        }
    }
}
