int missingMultiple(int* nums, int numsSize, int k) {
    int *arr;
    arr=(int*)calloc(numsSize+2,sizeof(int));

    for(int i=0;i<numsSize;i++){
        if(nums[i]%k==0){
            long int ind=nums[i]/k;
            if(ind>=0 && ind<=numsSize){
                arr[ind]++;
            }
        }

    }
    int res;
    for(int i=1;i<=numsSize+1;i++){
        if(arr[i]==0){
            res = i*k;
            break;
        }
    }

    free(arr);
    return res;
}