vector<int> breakingRecords(vector<int> scores) {
    
    vector<int>ans;
    
    int n = scores.size();
    
    int maxi = scores[0];
    int mini = scores[0];
    
    int maxi_break = 0;
    int mini_break = 0;
    
    for(int i=0;i<n;i++)
    {
        if(scores[i] > maxi)
        {
            maxi = scores[i];
            maxi_break += 1;
        }
        if(scores[i] < mini)
        {
            mini = scores[i];
            mini_break += 1;
        }
    }
    
    ans.push_back(maxi_break);
    ans.push_back(mini_break);
    
    return ans;

}
