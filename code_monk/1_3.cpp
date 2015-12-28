// problem: https://www.hackerearth.com/code-monk-array-strings/algorithm/prateek-and-his-friends

#include <iostream>
using namespace std;


int check_consecutive_sum(int arr[],int sum_to_be_checked)
{
    for(int k=0;k<sizeof(arr);k++)
    {
        int temp_sum = 0;
        for(int l=k;l<sizeof(arr);l++)
        {
            temp_sum += arr[l];
            if(temp_sum==sum_to_be_checked)
                return 1;
        }
    }
    return 0;       
}

int main()
{
    int t,num_friends,total_money;
    
    cin>>t;
    
    for(int i=0; i<t; i++)
    {
        num_friends=0;
        total_money=0;
        
        cin>>num_friends>>total_money;
        
        int arr[num_friends];
        
        for(int j=0; j<num_friends; j++)
            cin>>arr[j];

        if(check_consecutive_sum(arr,total_money))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}