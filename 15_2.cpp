#include<iostream>
#include<vector>
#include<string> 
#include<algorithm>
#include<map>
#include<set>
using namespace std;
bool ifexit(vector<vector<int>> big,vector<int> small)
{
	for(auto a:big)
		if(a==small)
		return true;
		return false;
}
vector<vector<int>> threeSum(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        vector<vector<int>> ret;
        map<int,vector<set<int>>> _map;
     
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++)
            {
            	
				set<int> a;
				a.clear();
				a.insert(nums[i]);
				a.insert(nums[j]); 
                _map[nums[i]+nums[j]].push_back(a);
                _map[nums[i]+nums[j]].push_back(a);
            }
            
            
            for(auto & i:_map)
            {
            	for(auto & j:nums)
            	{
					cout<<"i.first/j "<<i.first<<" "<<j<<endl;
            		if((i.first+j)==0)
            		{
            			for(auto & k:i.second)
            			{
            		    vector<int> _value(k.begin(),k.end());
                         _value.push_back(j);
                         if(!ifexit(ret,_value));
                         ret.push_back(_value);
                        } 
					}
				}
                    	
			}
        
        cout<<"inspect"<<endl;
        for(auto i:ret)
	    	{
				cout<<"ret:";
	    		for(auto j:i)
	    			cout<<j<<" ";
	    			cout<<endl;
	        }     
        
        
        return ret;
    
}

int main()
{
//	vector<string> n("haha","apple");
//	cout<<n.size()<<endl;
	vector<int> a={-1, 0, 1, 2, -1, -4};
	threeSum(a);
	
	return 0;
} 
