#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> allSubsets;

void generate(vector<int> &subset, int i, vector<int> &nums)
{

    // Base condition
    if (i == nums.size())
    {
        allSubsets.push_back(subset);
        return;
    }

    // Not considering ith element
    generate(subset, i + 1, nums);

    // Considering ith element
    subset.push_back(nums[i]);

    generate(subset, i + 1, nums);

    subset.pop_back();
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    vector<int> empty;
    generate(empty, 0, nums);

    for (auto subset : allSubsets)
    {
        for (auto ele : subset)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}