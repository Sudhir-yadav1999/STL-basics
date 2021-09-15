
----
Set  (Unique Values) , balanced tree , log n.
----

 int n;
    set<int,greater<int>> s1;//order greater to smaller
    
    for(int i=0;i<5;i++)
    {
        cin>>n;
        s1.insert(n); // inserting
    }

    cout<<"The results are :::"<<endl;

    set<int,greater<int>>::iterator itr; //declaring the iterator 
    
    for(itr=s1.begin();itr!=s1.end();itr++) //printing the results
    {
        cout<<*itr<<endl;
    }
    
    ----------------------------------------------------------------
    ----------------------------------------------------------------
