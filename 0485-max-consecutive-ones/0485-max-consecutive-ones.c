int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int k=0;
    int maxk=0;

    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            k++;
            if(k>maxk){
                maxk=k;
            }
        }
        else{
            k=0;
        }
    }
    return maxk;
    
}