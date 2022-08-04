class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low =0;
        int high = arr.size()-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(target == arr[mid]){
                return mid;
            }
            
            
            if(arr[mid]>=arr[low]){
                
                if(arr[mid]>=target && arr[low]<=target){
                    high = mid-1;
                }
                
                else{
                    low = mid+1;
                }
            }
            
            ///////
            else{
                
                if(target>=arr[mid] && target<=arr[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }

        }
        
        return -1;
    }
};