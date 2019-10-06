#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// vector<int> removeDuplicate(vector<int> input)
// {
// 	set<int> s;
// 	vector<int> result;

// 	for(int i=0;i<input.size();i++)
// 	{
// 		if(s.find(input[i])==s.end())
// 		{
// 			s.insert(input[i]);
// 			result.push_back(input[i]);
// 		}
// 	}
// 	return result;
// }


// using sorting 

// vector<int> removeDuplicate(vector<int> input)
// {
// 	sort(input.begin(), input.end());
// 	vector<int> result;

// 	for(int i=0;i<input.size();i++)
// 	{
// 		if(input[i]!=input[i+1])
// 		{
// 			result.push_back(input[i]);
// 		}
// 	}
// 	return result;

// }


// Without using extra memory.


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int count=1;
        
        if(nums.empty())
        {
            return 0;
        }
        
        for(auto it1 = nums.begin(), it2 = nums.begin(); it2 != nums.end(); it2++)
        {
            if(*it1==*it2)
            {
                continue;
            }
            it1++;
            *it1 = *it2;
            count++;
        }
        
        return count;
        
    }
};



// int main()
// {
// 	vector<int> input;
// 	input.push_back(1);
// 	input.push_back(2);
// 	input.push_back(3);
// 	input.push_back(4);
// 	input.push_back(2);
// 	input.push_back(1);
// 	vector<int> result=removeDuplicate(input);
// 	for(int i=0;i<result.size();i++)
// 	{
// 		cout<<result[i]<<" ";
// 	}
// 	return 0;
// }
