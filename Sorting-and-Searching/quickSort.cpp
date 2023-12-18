class Solution {
public:
    int partition(vector<int> &arr, int s, int e) {
        int pivot = arr[e];
        int i = s - 1;
        for (int j = s; j < e; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[e]);
        return i + 1;
    }

    void quicksort(vector<int> &arr, int s, int e) {
        if (s < e) {
            int p = partition(arr, s, e);
            quicksort(arr, s, p - 1);
            quicksort(arr, p + 1, e);
        }
    }

    vector<int> sortArray(vector<int> &nums) {
        int n = nums.size();
        quicksort(nums, 0, n - 1);

        for (int x : nums) {
            cout << x << " ";
        }

        return nums;
    }
};
