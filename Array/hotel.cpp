#include<bits/stdc++.h>
using namespace std;
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    
    vector<pair<int, int> > room;
    
    // size of room 
    // choose either arrival and depart
    int n=arrive.size(); 
    for(int i=0;i<n;i++)
    {
        room.push_back(make_pair(arrive[i], 1));
        room.push_back(make_pair(depart[i],0));
    }
    
    
    //sort the vector
    sort(room.begin(), room.end());
    
    int cnt1=0, cnt2=0;
    for(int i=0;i<room.size();i++)
    {
        // if guest are arrive
        if(room[i].second==1)
        {
            cnt1++;
            cnt2 = max(cnt1, cnt2);
        }
        else
        {
            // if guest are depart
            cnt1--;
        }
    }
    return (K>=cnt2);
}
