#include<iostream>
#include<vector>
#include<string> 
#include<algorithm>
using namespace std;
bool ifexit(vector<vector<int>> big,vector<int> small)
{
	for(auto a:big)
		if(a==small)
		return true;
		return false;
}
  int threeSumClosest(vector<int>& nums, int target) {
         int ret=0;
         int distance=999;
        if (nums.size() < 3) return 0; 
        sort(nums.begin(),nums.end());
        auto last=nums.end();
        for(auto i=nums.begin();i<last-2;++i)
        {
            if(i>nums.begin()&&*i==*(i-1)) continue;
            auto j=i+1;
            auto k=last-1;
            while(j<k)
            {
               // cout<<"line: "<<*i<<" "<<*j<<" "<<*k<<endl;
                if(*i+*j+*k<target)
                {
                    if((abs(target-(*i+*j+*k)<distance))) 
                    {
                        distance=abs(target-(*i+*j+*k));
                        ret=*i+*j+*k;
                    }
                    ++j;
                    
                while(k<j&&*j==*(j-1)) ++j;
                }
                else if(*i+*j+*k>target)
                {
                       if((abs(target-(*i+*j+*k)<distance))) 
                    {
                        distance=abs(target-(*i+*j+*k));
                        ret=*i+*j+*k;
                    }
                    --k;
                    
                while(k<j&&*k==*(k+1)) --k;
                }
                else 
                {
                
                    return target;                    
                }
            
            }
        }      
        return ret;
        
    }

int main()
{
//	vector<string> n("haha","apple");
//	cout<<n.size()<<endl;
	vector<int> a={-12,12,-5,-4,-12,11,9,-11,13,1,12,-1,8,1,-9,-11,-13,-4,10,-9,-6,-11,1,-15,-3,4,0,-15,3,6,-4,7,3,-2,10,-2,-6,4,2,-7,12,-1,7,6,7,6,2,10,-13,-3,8,-12,2,-5,-12,6,6,-5,6,-5,-14,9,9,-4,-8,4,2,-7,-15,-11,-7,12,-4,8,-5,-12,-1,12,5,1,-5,-1,5,12,9,0,3,0,3,-14,2,-4,2,-4,0,1,7,-13,9,-1,13,-12,-11,-6,11,-1,-10,-5,-3,10,3,7,-6,-15,-4,10,1,14,-12};
	threeSumClosest(a,3);
	
	return 0;
} 
