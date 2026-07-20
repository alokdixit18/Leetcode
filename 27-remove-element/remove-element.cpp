class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //ek array h 
        int k =0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if (nums[i]!=val){
                  nums[k]=nums[i];
                  k++;
           
            

            }
          

        }
        return k;
        
    }
};