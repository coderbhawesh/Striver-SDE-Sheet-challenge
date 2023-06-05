#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    vector<int> v(4,0);

    for(int i=0;i<n;i++)
    {
       v[arr[i]]++;
    }
   int c = 0;
    for(int i=0;i<3;i++)
    {
       for(int j=1;j<=v[i];j++)
          arr[c++] = i;
        
    }
    //cout<<"\n";


}