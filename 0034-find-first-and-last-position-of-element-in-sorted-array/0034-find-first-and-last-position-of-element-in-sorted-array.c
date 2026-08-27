int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* arr=(int*)malloc(2*sizeof(int));
    *returnSize=2;
    arr[0]=-1;
    arr[1]=-1;
    if(numsSize==0){
        return arr;
    }
    int low=0;
    int high=numsSize-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            arr[0]=mid;
            high=mid-1;
        }else if(nums[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    if(arr[0]==-1){
        return arr;
    }
    low=0;
    high=numsSize-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            arr[1]=mid;
            low=mid+1;
        }else if(nums[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return arr;
}