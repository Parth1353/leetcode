class Solution {
public:
    int rob(vector<int>& nums) {
        int evenPos_Sum=0 , oddPos_Sum=0 , max_sum=0; 
       
        for(int i=0;i<nums.size();i++){
            
            if(!(i&1)){
          evenPos_Sum+=nums[i];
           evenPos_Sum = max(evenPos_Sum,oddPos_Sum);
            }
            
            if((i&1)){
          oddPos_Sum+=nums[i];
          oddPos_Sum = max(evenPos_Sum,oddPos_Sum);
            }
}
   
        max_sum = max(evenPos_Sum,oddPos_Sum);
        return max_sum;
    }
};