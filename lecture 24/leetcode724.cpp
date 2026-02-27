#include <iostream>
#include <vector>
using namespace std; 
//1991 also same as thid
int pivotIndex(vector<int>& nums) {
int total=0;
             for(int i=0; i<nums.size();i++){
                total=total+nums[i];
        
            }
            int leftsum=0;
            for (int i=0; i<nums.size();i++){
                int rightsum=total-leftsum-nums[i];
                if(leftsum==rightsum){
                    return i;
                }
                leftsum=leftsum + nums[i];
            }
            return -1;
            }

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = pivotIndex(nums);

    cout << "Pivot Index: " << result << endl;

    return 0;
}






        
