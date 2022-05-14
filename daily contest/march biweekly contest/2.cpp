long long int n = nums.size();
long long int prefix[100000];
long long int sum = 0;
long long int ans = 0;

for (long long int i = 0; i < n; i++)
{
    sum += nums[i];
}
prefix[0] = nums[0];
for (long long int i = 1; i < n; i++)
{
    prefix[i] = nums[i] + prefix[i - 1];
}

for (long long int i = 0; i < n - 1; i++)
{
    if (prefix[i] >= sum - prefix[i])
    {
        ans++;
    }
}
return ans;