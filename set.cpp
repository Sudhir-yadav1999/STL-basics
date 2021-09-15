
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
    
     
    --------------
    Unordered_set - (unordered but unique),hashtable,o(n).
    -------------
    int n;
    unordered_set<int> s1;
    
    for(int i=0;i<5;i++)
    {
        cin>>n;
        s1.insert(n);
    }

    cout<<"The results are :::"<<endl;
    
    unordered_set<int>::iterator itr;
    
    for(itr=s1.begin();itr!=s1.end();itr++)
    {
        cout<<*itr<<endl;
    }
    -----------------------------------------------------------------
    -----------------------------------------------------------------
     
     
    --------
    multiset -(multiple values),ordered
    --------
     
    int n;
    multiset<int> s1;
    
    for(int i=0;i<5;i++)
    {
        cin>>n;
        s1.insert(n);
    }

    cout<<"The results are :::"<<endl;
    
    multiset<int>::iterator itr;
    
    for(itr=s1.begin();itr!=s1.end();itr++)
    {
        cout<<*itr<<endl;
    }
    ----------------------------------------------------------------- 
    -----------------------------------------------------------------
     
     
     ------------------
     unordered_multiset -[(multivalued ),unordered,hashtable o(n)]
     ------------------
     
     int n;
    unordered_multiset<int> s1;
    
    for(int i=0;i<5;i++)
    {
        cin>>n;
        s1.insert(n);
    }

    cout<<"The results are :::"<<endl;
    
    unordered_multiset<int>::iterator itr;
    
    for(itr=s1.begin();itr!=s1.end();itr++)
    {
        cout<<*itr<<endl;
    }
    -------------------------------------------------------------------
     
     
     
     
     
     
     
     
     
     
