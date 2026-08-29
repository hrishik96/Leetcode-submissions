bool check(int* nums, int numsSize) {

    int k=numsSize;
    int *arr=(int*)malloc(2*k*sizeof(int));

    for(int i=0;i<numsSize;i++){
        arr[i]=nums[i];
        arr[k+i]=nums[i];
    }

    for(int i=0;i<numsSize-1;i++){
        int minind=i;
        for(int j=i+1;j<numsSize;j++){
            if(nums[j]<nums[minind]){
                minind=j;
            }
        }
         if(minind!=i){
            int temp=nums[minind];
            nums[minind]=nums[i];
            nums[i]=temp;
        }
    }

    int t=0;

    for(int i=0;i<2*k;i++){
        if(arr[i]==nums[t]){
            t++;
            if(t==numsSize){
                free(arr);
                return true;
            }
        }
        else if(arr[i]==nums[0]){
            t=1;
        }
        else{
            t=0;
        }
    }

    free(arr);
    return false;
}