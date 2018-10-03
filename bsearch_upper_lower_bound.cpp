#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int arr[100000];
int bsearch(int arr[],int start,int end,int key)
	{
		int mid=((start+end)/2);
		if(start<=end)
			{
				if(arr[mid]==key)
					return mid;
				else if(arr[mid]>key)
					bsearch(arr,start,mid-1,key);
				else if(arr[mid]<key)
					bsearch(arr,mid+1,end,key);
			}
		else
			return start;
	}
int main()
{
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+num);
	int start=0,end=num-1;
	int key;
	cin>>key;
	int q=bsearch(arr,start,end,key);
	cout<<q<<" "<<arr[q]<<" "<<arr[q-1]<<'\n';
	return 0;
}
