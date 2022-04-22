// author : 𝘀𝗮𝗱𝗶𝗸 𝗶𝗾𝗯𝗮𝗹 𝗮𝗸𝗶𝗹

#include<bits/stdc++.h>

using namespace std;
 partition_Q(vector<int>&v, int begin_v, int last_v)
{
	int storeIndex = begin_v;

	for (int i= begin_v;i<last_v;i++)
	{
		if(v[i] <= v[last_v])
		{
			swap (v[storeIndex], v[i]);
			storeIndex++;
		}
	}
	swap(v[last_v],v[storeIndex]);
	return storeIndex;
}


void QuickSort(vector<int>&v, int begin_v, int last_v)
{
	int pivot = 0;
	if(begin_v >= last_v)
	return;
	else
	{
		pivot = partition_Q(v,begin_v,last_v);
		QuickSort(v, begin_v, pivot -1);
		QuickSort(v, pivot+1, last_v);
	}
}
int main()
{
	int n, input;
	cout <<"Enter Size : ";
	cin>>n;
	vector<int>v;

	for(int i=0;i<n;i++)
	{
		cin>>input;
		v.push_back(input);
	}

	cout<<"Sorted list : ";
	QuickSort(v, 0, n-1);
	for(int val: v)
	cout<<val<<" ";
}
