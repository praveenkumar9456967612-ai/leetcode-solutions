class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(); int n2 = nums2.size();

        int count1 = 0;
        int count2 = 0;

        // nums1 ke elements nums2 mein check
        for (int i = 0; i < n1; i++) {

            for (int j = 0; j < n2; j++) {

                if (nums1[i] == nums2[j]) {
                    count1++;
                    break;
                }
            }
        }

        // nums2 ke elements nums1 mein check
        for (int i = 0; i < n2; i++) {

            for (int j = 0; j < n1; j++) {

                if (nums2[i] == nums1[j]) {
                    count2++;
                    break;
                }
            }
        }

        return {count1, count2};
    }
};