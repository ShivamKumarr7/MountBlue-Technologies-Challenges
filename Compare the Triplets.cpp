vector<int> compareTriplets(vector<int> a, vector<int> b) {
    
    vector<int>ans;
    
    int alice = 0;
    int bob = 0;
    
    for(int i=0;i<3;i++)
    {
        if(a[i] != b[i])
        {
            if(a[i] > b[i])
            {
                alice += 1;
            }
            else 
            {
                bob += 1;
            }
        }
    }
    
    ans.push_back(alice);
    ans.push_back(bob);
    return ans;

}
