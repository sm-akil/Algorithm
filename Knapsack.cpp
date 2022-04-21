

#include<bits/stdc++.h>

using namespace std;

typedef struct{
       int profit;
       int weight;
       float R;
}item;

bool comp(item i1, item i2)
{
    return i1.R > i2.R;
}

void knapsack(item it[],int N, int capacity)
{
    int max_profit=0, max_weight =0;
    for(int i=0;i<N;i++)
        it[i].R = it[i].profit / it[i].weight;

    sort(it, it+N, comp);

    for(int i=0;i<N;i++)
    {
        if(max_weight + it[i].weight < capacity)
        {
            max_weight += it[i].weight;
            max_profit += it[i].profit;
        }

        else
        {
            int remaining_weight =capacity - max_weight;
            max_profit += remaining_weight * it[i].R;
            max_weight += remaining_weight;
            break;
        }
    }
    cout<<max_profit<<endl;
}

int main()
{
    int capacity,N;
    cout<<"Enter Capacity:  :";
    cin>>capacity;
    cout<<endl;
    cout<<"Enter number of items: ";
    cin>>N;
    item it[N];

    for(int i=0;i<N;i++)
    {
        cout<<"Enter weight and profit for item "<<i+1<<": "<<endl;
        cin >>it[i].weight;
        cin >>it[i].profit;

    }
    knapsack(it,N,capacity);

}
 
/** for(int i=0;i<N;i++)
{
 cout<<"item "<<i+1<<":  "<<it[i].weight<<" "<<it[i].proft<<" "<<it[i].R<<endl;
}**/
