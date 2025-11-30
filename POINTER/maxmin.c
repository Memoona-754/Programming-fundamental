#include<stdio.h>
void minMax(int arr[],int len,int *min,int *max){
    *min = *max = arr[0];
    int i;
    for(i=1;i<len;i++){
         if(arr[i]>*max){
            *max = arr[i];
         }
         else  if(arr[i]<*min){
             *min = arr[i];
         } 
    }
}
int main(){
    int a[]={22,78,55,43,23,9,6,29,76,4,234};
    int min,max;
    int len = sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("Minimun value in the array is %d and Maximum value is %d",min,max);
    return 0;
}