bool uniformArray(int* nums1, int nums1Size) {

    int eve=0;

    if(nums1[0]%2==0){
        eve=1;
    }

    if(eve){
    for(int i=0;i<nums1Size;i++){
        if(nums1[i]%2==0){
            return true;
        }
        else{
            int j=i+1; 
            while(j<nums1Size){
                if((nums1[i]-nums1[j])%2==0){
                    return true;
                    break;
                }
                else{
                    j++;
                }

            }
            return false;
        }
     
    }
    }

    if(!eve){
    for(int i=0;i<nums1Size;i++){
        if(nums1[i]%2!=0){
            return true;
        }
        else{
            int j=i+1; 
            while(j<nums1Size){
                if((nums1[i]-nums1[j])%2!=0){
                    return true;
                    break;
                }
                else{
                    j++;
                }

            }
            return false;
        }
     
    }
    }

    return true;

}