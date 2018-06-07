#include<stdio.h>
int main()
{   //            0 1 2 3 4 5 6 7  8  9  10 11 12
    int arr[100]={1,1,1,2,3,4,9,10,12,12,13,13,14};
    int left =0,right =12,mid,element ;
    scanf("%d",&element);
    mid = (left+right)/2;
    if(element<=arr[0])
            printf("%d",0);
    else if(element>=arr[right])
            printf("%d",right+1);
    else 
    {   do
        {
            if(arr[mid]==element)
                break;
            if(arr[mid]>element)
                right = mid-1;
            else left = mid+1 ;
            mid =(left+right)/2 ;
        }while(left<=right);
        printf("%d",mid+1);
    }
}