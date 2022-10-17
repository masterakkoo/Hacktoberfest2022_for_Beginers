#include<iostream>
#include<experimental/unordered_map>
#include<vector>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
    int a[n];
    unordered_map<int, int>us;
    int str = 0;
    int end = 0;
    int sum = 0;
    int len = -1;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
     for (int i = 0; i < n; ++i)
     {
     	sum=sum+a[i];

     	if(sum - k == 0)
     	{
     		str = 0;
     	    end = i;
     	   len = max(len ,end - str +1 );
     	}
     	if(us.find(sum - k) != us.end())
     	{
     		str = us[sum-k];
     		end = i;
     		len = max(len ,end - str +1 );

     	}
     	else
     	us[sum] = i;

     }
     if(len == -1)
     	cout<<"subarray of given sum not find";
     else
     {
     for (int i = str; i <=end; ++i)
     {
     	cout<< a[i] << " ";
     }
     cout<<endl;
     cout<<len<<endl;
 }
	return 0;
}