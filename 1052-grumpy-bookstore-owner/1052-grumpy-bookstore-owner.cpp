class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int prev_sum = 0;
        int curr_sum = 0;
        int window_idx = 0;

        // First window: count only grumpy customers
        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1)
                prev_sum += customers[i];
        }

        int max_sum = prev_sum;

        int i = 1;
        int j = minutes;

        while (j < customers.size()) {

            curr_sum = prev_sum;

            if (grumpy[j] == 1)
                curr_sum += customers[j];

            if (grumpy[i - 1] == 1)
                curr_sum -= customers[i - 1];

            if (curr_sum > max_sum) {
                max_sum = curr_sum;
                window_idx = i;
            }

            prev_sum = curr_sum;
            i++;
            j++;
        }

        // Make chosen window non-grumpy
        for (int k = window_idx; k < window_idx + minutes; k++) {
            grumpy[k] = 0;
        }

        int satisfaction = 0;

        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0)
                satisfaction += customers[i];
        }

        return satisfaction;
    }
};