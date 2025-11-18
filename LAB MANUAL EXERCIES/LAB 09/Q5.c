#include<stdio.h>
void SortFunction(int *arr, int *size, int order) 
{
	//pointer to first element of array
	//pointer to size of array
	//order is asc or des
    int i, j, temp;
    for (i = 0; i < *size - 1; i++) //loops from first element to secondlast. Compares each element with the rest
	{
        for (j = i + 1; j < *size; j++) //loops thru elements after current element
		{
            if ((order == 1 && *(arr + i) > *(arr + j)) || //if asc and current>next then swap
                (order == 2 && *(arr + i) < *(arr + j))) //if des and current<next then swap
			      {   //swapping
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
    }
  }
}
int main()
{
    int arr[] = {12, 4, 56, 2, 34, 1};
    int size = 6;
    int order,i;
    printf("\n\t\t\t\t\t\tSorting an Array!\n\n");
    printf("Enter 1 for Ascending or 2 for Descending order of array: ");
    scanf("%d", &order);
    SortFunction(arr, &size, order);

    printf("Sorted Array:\n");
    for (i = 0; i < size; i++) 
	  {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}