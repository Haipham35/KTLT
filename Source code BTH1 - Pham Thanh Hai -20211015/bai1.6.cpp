void reversearray(int arr[], int size){

    
    for( int i=0; i< size/2;i++){
        
        int tmp =arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=tmp;
    }
}

    
    
void ptr_reversearray(int *arr, int size){

    int *start=arr;
    int *end= arr+size -1;
    while(start<end){
        int tmp= *start;
        *start=*end;
        *end=tmp;
        start++;
        end--;
    }
}
