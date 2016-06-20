#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	     cin >> a[i];
	int nums[4] = {0};
	for(int i = 0; i < n; i++)
	{
	     if(a[i] == 1)
	          nums[0]++;
	     else if(a[i] == 2)
	          nums[1]++;
	     else if(a[i] == 3)
	          nums[2]++;
	     else
	          nums[3]++;
	}
	int ans = 0;
	ans += nums[3];
	ans += nums[1]/2;
	nums[1] %= 2;
	ans += min(nums[0], nums[2]);
	if(min(nums[0], nums[2]) == nums[0])
	{
	     nums[2] -= nums[0];
	     nums[0] = 0;
	}
	else
	{
	     nums[0] -= nums[2];
	     nums[2] = 0;
	}
	if(nums[0] == 0)
	{
	     ans += nums[1];
	     ans += nums[2];
	}
	else if(nums[2] == 0)
	{
	     if(nums[1] > 0){
	          ans++;
	          nums[0] -= 2;
	     }
	     if(nums[0] > 0)
	     {
	          ans += nums[0]/4;
	          nums[0] %= 4;
	     }
	     if(nums[0] > 0)
	          ans++;
	}
	cout << ans << endl;
	return 0;
}
