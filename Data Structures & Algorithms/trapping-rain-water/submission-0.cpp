class Solution {
public:
    
    int trap(vector<int>& arr) {
        int total=0, leftMax=0, rightMax=0, low=0, high=arr.size()-1;
        while(low<high){
            if(arr[low]<=arr[high]){
                if(leftMax>arr[low]){
                    total+=leftMax-arr[low];
                }
                else{
                    leftMax=arr[low];
                }
            low++;
            }
            else{
                if(rightMax>arr[high]){
                    total+=rightMax-arr[high];
                }
                else rightMax=arr[high];
                high--;
            }
            
        }
        return total;
    }
};
