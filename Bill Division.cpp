void bonAppetit(vector<int> bill, int k, int b) {
    
    int n = bill.size();
    
    int total_bill = 0;
    int anna_bill = 0;
    
    for(int i=0;i<n;i++)
    {
        if(k != i)
        {
            anna_bill += bill[i];
        }
        total_bill += bill[i];
    }
    
    // anna should pay her anna_bill/2; 
    
    anna_bill = anna_bill/2;
    
    if(anna_bill == b)
    {
        cout<<"Bon Appetit";
    }
    else 
    {
        cout<<(b - anna_bill);
    }

}
