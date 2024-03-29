#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
std::vector<std::vector<T> > threeSum(std::vector<T>& nums) {
    std::vector<std::vector<T> > result;
    if (nums.size() < 3)
        return result;

    std::sort(nums.begin(), nums.end());

    for (size_t i = 0; i < nums.size() - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        size_t left = i + 1;
        size_t right = nums.size() - 1;
        T target = -nums[i];

        while (left < right) {
            T sum = nums[left] + nums[right];
            if (sum == target) {
                std::vector<T> triplet;
                triplet.push_back(nums[i]);
                triplet.push_back(nums[left]);
                triplet.push_back(nums[right]);
                result.push_back(triplet);
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    std::vector<int> nums;
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(-1);
    nums.push_back(-4);

    std::vector<std::vector<int> > triplets = threeSum(nums);

    for (size_t i = 0; i < triplets.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < triplets[i].size(); ++j) {
            std::cout << triplets[i][j];
            if (j != triplets[i].size() - 1)
                std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}

