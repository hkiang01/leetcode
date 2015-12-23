#include <algorithm>
#include <cmath>
#include <iostream>
#include <climits>
#include <vector>

using namespace std;

class Solution {
    
private:
    
public:
    void printVector(vector<int>& v) {
        cout << "[";
        for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
            cout << *it << ",";
        }
        cout << "]" << endl;
    }

    int threeSumClosest(vector<int>& nums, int target) {
        //brute force:
        int diff, best, test, testDiff;
        diff = INT_MAX; //test against
        best = INT_MIN; //the sum
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums.size(); j++) {
                for(int k = 0; k < nums.size(); k++) {
                    if(i != j && i != k && j != k) {
                        //cout << "testing: [" << nums[i] << "," << nums[j] << "," << nums[k] << "]" << endl;
                        test = nums[i] + nums[j] + nums[k];
                        testDiff = abs(target - test);
                        //cout << "diff: " << testDiff << endl;
                        if(testDiff < diff) {
                            best = nums[i] + nums[j] + nums[k];
                            //cout << "new best: [" << nums[i] << "," << nums[j] << "," << nums[k] << "]" << endl;
                            //cout << "new best sum: " << best << endl;
                            diff = testDiff;
                            //cout << "new best diff: " << diff << endl;
                        }
                    }
                }
            }
        }
        return best;
    }
};

int main(int argc, char* argv[]) {
    Solution* sol = new Solution;
    int array[3] = {0,0,0};
    vector<int> vec;
    for(int i = 0; i < 3; i++) {
        vec.push_back(array[i]);
    }
    cout << sol->threeSumClosest(vec, 1) << endl;
    vec.clear();
    int array1[4] = {-1, 2, 1, -4};
    for(int i = 0; i < 4; i++) {
        vec.push_back(array1[i]);
    }
    cout << sol->threeSumClosest(vec, 1) << endl;
    delete sol;
}