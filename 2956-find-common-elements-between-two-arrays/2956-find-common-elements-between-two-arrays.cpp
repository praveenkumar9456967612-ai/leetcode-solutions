class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        int count1 = 0;
        int count2 = 0;

        // nums1 ke elements nums2 mein check
        for (int i = 0; i < nums1.size(); i++) {

            for (int j = 0; j < nums2.size(); j++) {

                if (nums1[i] == nums2[j]) {
                    count1++;
                    break;
                }
            }
        }

        // nums2 ke elements nums1 mein check
        for (int i = 0; i < nums2.size(); i++) {

            for (int j = 0; j < nums1.size(); j++) {

                if (nums2[i] == nums1[j]) {
                    count2++;
                    break;
                }
            }
        }

        return {count1, count2};
    }
};