int majorityElement(int* nums, int numsSize) {
    int count=0;
    int numb=0;

    for(int i=0;i<numsSize;i++){
        if(count==0){
            numb=nums[i];
        }

        if(nums[i]==numb){
            count++;
        }
        else{
            count--;
        }
    }


    return numb;
    
}