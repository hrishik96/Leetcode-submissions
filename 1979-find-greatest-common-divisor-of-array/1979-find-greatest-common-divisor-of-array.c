int findGCD(int* nums, int numsSize) {
    int max=nums[0];
    int min=nums[0];

    for(int i=1;i<numsSize;i++){
        if(nums[i]<min){
            min=nums[i];
        }
        if(nums[i]>max){
            max=nums[i];
        }
    }
int gcd=0;
    for(int i=1;i<max+min;i++){
        if(max%i==0 && min%i==0){
            gcd=i;
        }

    }
    return gcd;
    
}