// lcdiscsn_1_brute_1.cpp
#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/discuss/post/4102340/flipkart-oa-grid-intern-by-anonymous_use-l5sq/


int main(){
    int m,n; cin>>m>>n;
    vector<vector<int>>msg_grid(m,vector<int>(n));


    //take input of grid:

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>msg_grid[i][j];
        }
    }

    vector<int>maxcounter(n,0); // to count the number of times each number appears
    vector<int>avg(m,0);   // for each sequence in nsg_grid
    for (int msg_seq = 0; msg_seq < m; msg_seq++)
    {
        //avg 
        for (int server = 0; server < n; server++){
            int num=msg_grid[msg_seq][server];
            avg[msg_seq]+=num;
            maxcounter[server]=max(maxcounter[server],num);   
        }
        avg[msg_seq]/=n; // average for this sequence
    }
    

    //max_msg_in_this_seq
    vector<int>max_msg_in_this_seq(m,0);
    int desired_seq_count=INT_MIN;
    for(int seq=0;seq<m;seq++){

        // this checks completely kinne mei max count aaya for 1 sequence
        for(int server=0;server<n;server++){
            if(msg_grid[seq][server]==maxcounter[server]){
                max_msg_in_this_seq[seq]++;
                
            }

        
        }

        if(desired_seq_count<max_msg_in_this_seq[seq]){
            desired_seq_count =max_msg_in_this_seq[seq];
        }
    }


    for (int i = 0; i < m; i++)
    {
        cout<<max_msg_in_this_seq[i]<<" "; // for debugging
        /* code */
    }

    cout<<"\n"; cout<<desired_seq_count<<"\n"; // for debugging
    
    //jo last mei update kregi desired_seq_count ko tha'll be one of the desired seq

    //find the seq id with max average
    int g_avg=INT_MIN;
    int ans=-1;
    for(int seq=0;seq<m;seq++){
        if(max_msg_in_this_seq[seq]==desired_seq_count and avg[seq]>g_avg ) 
             // this checks if the average is greater than the global average
        {
            g_avg=avg[seq];
            ans=seq;
        }
    }

    cout<<ans<<"\n";
    return 0;
}

/*
3 3
1 2 3
3 2 1
2 2 2

2

4 2
1 3
2 4
3 3
4 4

3
*/
