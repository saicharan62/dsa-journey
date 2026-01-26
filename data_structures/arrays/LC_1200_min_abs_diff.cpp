//TC - O(n log n)
//SC - O(n)
//technique - we first calculate min difference and then whichever pair gives min_diff as abs. value, we store that pair 

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());

        int min_diff = INT_MAX;
        for(int i=1; i<arr.size(); i++){
            min_diff = min(min_diff, arr[i] - arr[i-1]);
        }

        for(int i=1; i<arr.size(); i++){
            if(arr[i]-arr[i-1] == min_diff){
                res.push_back({arr[i-1], arr[i]});
            }
        }
        return res;
    }
};
