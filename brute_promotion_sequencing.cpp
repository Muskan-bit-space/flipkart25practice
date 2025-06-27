#include<bits/stdc++.h>
using namespace std;
// worst case: O(P*N) -
vector<bool> solve(int n, int p){
    //make manager arr
    vector<int> manager(n+1,0); /// 0 ko bhi count krna h in promo toh same index rkhne ke liye
    //input manager;
    for (int i = 1; i < manager.size(); i++) /// 0 ko apna manager bna do
    {
        cin>>manager[i];
        /* code */
    }
    

    //make pw arr
    vector<int> pw(p,0);
    //input pw;
    for (int i = 0; i < pw.size(); i++)
    {
        cin>>pw[i];
        /* code */
    }
    
    //output manager arr
    //vector<int> manager(n,0);
    //output manager;
    cout<<"\nmanager arr\n";
    for (int i = 1; i < manager.size(); i++)
    {
        cout<<manager[i]<<" ";
        /* code */ 
    }
    

    // pw arr
    //vector<int> pw(n,0);
    //output pw;
    cout<<"\nproject worker arr\n";

    for (int i = 0; i < pw.size(); i++)
    {
        cout<<pw[i]<<" ";
        /* code */
    }
    //real code:
    //prom initialisation
    vector<bool>prom(n+1,false);
    prom[0]=true;
    for (int i = 0; i < pw.size(); i++)
    {
        // cout<<": "<<pw[i]<<"\n";
        int receiver=pw[i];
        cout<<"\nproj worker: "<<receiver<<"\n";
        // receiver is the same ele only in the start
     
        for (; prom[manager[receiver]]==false; receiver=manager[receiver] )
        {
            cout<<"hey: "<<receiver;
        }
        
        prom[receiver]=true;
        cout<<"prom[receiver]=true for "<<receiver<<'\n';
        
    }
    
    // cout<<"\nprom arr after computation:\n";
    // for (int i = 1; i <= n ; i++)
    // {
    //     if(prom[i]==false)cout<<i<<" ";
    // }
    // cout<<"\nprom[6] "<<prom[6]<<"\n";
    // cout<<"\n"<<prom.size()<<" is prom.size()\n";

    return prom;
    
}



int main(){
    int n, p;
    cin>>n>>p;
    vector<bool> ans=solve(n,p);
    for (int i = 1; i <=n; i++)
    {
        if(  ans[i]==false)
        cout<<i<<" ";
    }
    
    return 0;
}
/*
8 4
0 1 1 2 2 3 4 4
8 4 6 5

*/