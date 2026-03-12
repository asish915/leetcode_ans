class Solution {
public:
     void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> temp;
        int i = left;
        int j = mid + 1;

        while(i <= mid && j <= right) {
            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while(j <= right) {
            temp.push_back(nums[j]);
            j++;
        }

        for(int k = left; k <= right; k++) {
            nums[k] = temp[k - left];
        }
    }

    void mergeSort(vector<int>& nums, int left, int right) {
        if(left >= right) return;

        int mid = left + (right - left) / 2;

        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
//     vector<int> sortArray(vector<int>& nums) {

//         /* Brute-force approach, Time= O(N*N), space= O(1) 
//         int temp=0;
//         int i,j;

//         for(i=0;i<nums.size();i++){
//             for(j=i+1;j<nums.size();j++){
//                 if(nums[j]<nums[i]){
//                     temp=nums[i];
//                     nums[i]=nums[j];
//                     nums[j]=temp;
                    
//                 }
//             }
//         }
//         return nums;*/

//         // Optimal  Merge-sort


        
//     }
// };