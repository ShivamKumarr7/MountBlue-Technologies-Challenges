void staircase(int n) {
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=n-i+1;k<=n;k++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }

}
