---------
Map - ordered values , binary tree
---------
---------
map<int,int> mp;

int n;

for(int i=0;i<5;i++)
{
    cin>>n;
   mp[n]++; // adding into map 
    
}

map<int,int>::iterator itr; //iterator 


cout<<"The Result ::"<<endl;



for(itr=mp.begin();itr!=mp.end();itr++) //iterator printing
{
    cout<<itr->first<<" "<<itr->second<<endl;
}

    return 0;
}
------------------------------------------------
================================================

  
---------------
Unordered_map()-unordered ,hash table 
---------------

unordered_map<int,int> mp;

int n;

for(int i=0;i<5;i++)
{
    cin>>n;
   mp[n]++;
    
}

unordered_map<int,int>::iterator itr;


cout<<"The Result ::"<<endl;



for(itr=mp.begin();itr!=mp.end();itr++)
{
    cout<<itr->first<<" "<<itr->second<<endl;
}

    return 0;
}
----------------------------------------------
==============================================
  
---------
Multimap()-ordered map,multiple keys same and diff values and keys can be same too 
---------

#include <bits/stdc++.h>

using namespace std;

int main()
{

multimap<int,int> mp;

int n;
int val;
for(int i=0;i<5;i++)
{
    cin>>n;  //enter the key name 
    cin>>val; // enter the value of the key 
   mp.insert(pair<int,int>(n,val));  // inserting into multimap it does not support mp[n]++ operator.
    
}

multimap<int,int>::iterator itr;


cout<<"The Result ::"<<endl;


for(itr=mp.begin();itr!=mp.end();itr++)
{
    cout<<itr->first<<" "<<itr->second<<endl;
}

    return 0;
}
------------------------------------------------
================================================
 
------------------
unordered_multimap-unordered multiple values 
------------------
#include <bits/stdc++.h>

using namespace std;

int main()
{

unordered_multimap<int,int> mp;

int n;
int val;
for(int i=0;i<5;i++)
{
    cin>>n;  //enter the key name 
    cin>>val; // enter the value of the key 
   mp.insert(pair<int,int>(n,val));  // inserting into multimap it does not support mp[n]++ operator.
    
}

unordered_multimap<int,int>::iterator itr;


cout<<"The Result ::"<<endl;


for(itr=mp.begin();itr!=mp.end();itr++)
{
    cout<<itr->first<<" "<<itr->second<<endl;
}

    return 0;
}

---------------------------------------------
=============================================


  
  
  
  
