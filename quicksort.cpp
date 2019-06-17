#include<iostream>
using namespace std;

int partition(int *A, int start, int end) {
    int pivot = A[end];
    int pIndex = start; //Setting partition index as start initially
    for (int i=start;i<end;i++){
        if (A[i]<= pivot){
            swap(A[i],A[pIndex]);
            pIndex++;
        }
    }
    swap(A[pIndex],A[end]);
    return pIndex;
    }

void QuickSort(int *A, int start, int end)
{
    if (start < end){
        int pIndex = partition(A,start,end);
        QuickSort(A,start,pIndex-1);
        QuickSort(A,pIndex+1,end);
    }
}

int main(){
    int A[] = {4,3,2,6,5,8,9};
    QuickSort(A,0,7);
    for (int i=0;i<7;i++){
        cout<<A[i]<<" ";
    }
}
