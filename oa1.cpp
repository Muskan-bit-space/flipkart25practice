#include <bits/stdc++.h>
using namespace std;
// class compare{

//     public:
        
// };

bool comp(const pair<string,int>&a,const pair<string,int>&b){
    return a.first<b.first;
}
int main(){
    int n; cin>>n;
    vector<pair<string,int>>a(n);

    for (int  i = 0; i < n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    /* dekhle op aa  rha h */

    


    sort(a.begin(),a.end(),comp);

    cout<<"\n";
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<"\n";
    }



    return 0;

}
/*
3 
B1 59
A3 56
A2 12

*/