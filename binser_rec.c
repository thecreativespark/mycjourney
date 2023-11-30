#include <stdio.h>

int n=1, key, high, low, mid, ind;
int binser(int *a, int key);

int main(){
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the element that you want to find: \n");
    scanf("%d", &key);
    high = n;
    mid = n/2;
    low = 0;
    if(key<a[low] || key>a[high-1]){
        printf("%d not found in the array.\n", key);
    }
    else{
        ind = binser(a,key);
    if(ind==0){
        printf("%d not found in the array.\n", key);
    }
    else{
        printf("%d is present at the %dth position of the array.\n", key, ind);
    }
    }
}

int binser(int *a, int key){
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid+1]==key){
        return mid+2;
    }
    else if(a[mid-1]==key){
        return mid;
    }
    else if(a[mid]>key){
        high = mid;
        mid = (high+low)/2;
        return (binser(a,key)+1);
    }
    else if(a[mid]<key){
        low = mid;
        mid = (high+low)/2;
        return (binser(a,key)+1);
    }
    else{
        return 0;
    }
}
