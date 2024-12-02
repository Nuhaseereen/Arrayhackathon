int singleNumber(int* nums, int numsSize) {
    if(numsSize==1 ){
        int m=nums[0];
        return m;
    }
   int i,j,k,count;
     for(i=0;i<numsSize;i++) {
        count=1;
        if(nums[i]==-999) {
            continue;
        }
        for(j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                count++;
                nums[j]=-999;  
            }
        }
         if(count==1){
                break;
            }
    }
    k=nums[i];
   return k;
}
