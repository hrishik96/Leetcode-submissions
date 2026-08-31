void rotate(int* nums, int numsSize, int k) {
    int *arr=(int*)malloc(numsSize*sizeof(int));

    k=k%numsSize;
    if(k==0){
        return;
    }

    for(int i=0;i<numsSize-k;i++){
        arr[i]=nums[i];

    }
int t=0;
    for(int i=numsSize-k;i<numsSize;i++){
        nums[t++]=nums[i];
    }
int l=0;

    for(int i=t;i<numsSize;i++){
        nums[i]=arr[l++];
    }
    free(arr);
}


