class Solution {
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        // Vector to store union elements
        vector<int> Union;

        int i = 0, j = 0;

        while (i < n && j < m) {
            // If current element in arr1 is smaller
            if (arr1[i] < arr2[j]) {
                // Add element if union empty or different from last added
                if (Union.empty() || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++;  // Move pointer in arr1
            }
            else if (arr2[j] < arr1[i]) {
                if (Union.empty() || Union.back() != arr2[j])
                    Union.push_back(arr2[j]);
                j++;  
            }
            else {
              
                if (Union.empty() || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++; j++;  
            }
        }

        
        while (i < n) {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }

        while (j < m) {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }

        return Union;
    }
};