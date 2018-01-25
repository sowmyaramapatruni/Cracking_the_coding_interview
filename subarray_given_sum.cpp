#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	//code
	
	int testcases;
	cin >> testcases;
	
	while (testcases --) {
	    
	    int size,sum;
	    cin>>size>>sum;
	    int arr[size];
	    
	    for (int i = 0;i<size;i++) {
	        cin>>arr[i];
	    }
	    
	    int start,end,new_sum=0,flag = false;
	     unordered_map<int, int> map;
 
    // Maintains sum of elements so far
    int curr_sum = 0;
 
    for (int i = 0; i < size; i++)
    {
        // add current element to curr_sum
        curr_sum = curr_sum + arr[i];
 
        // if curr_sum is equal to target sum
        // we found a subarray starting from index 0
        // and ending at index i
        if (curr_sum == sum)
        {
            cout << "Sum found between indexes "
                 << 0 << " to " << i << endl;
             break;
        }
 
        // If curr_sum - sum already exists in map
        // we have found a subarray with target sum
        if (map.find(curr_sum - sum) != map.end())
        {
            cout << map[curr_sum - sum] + 1
                 << "  " << i << endl;
           break;
        }
 
        map[curr_sum] = i;
    }
    
    // If we reach here, then no subarray exists
    cout << " -1"<<endl;
 
	  /*  for(int i =0;i<size;i++){
	        start =i+1;
	        new_sum = 0;
	        new_sum = new_sum+arr[i];
	        for(int j =i+1;j<size;j++){
	            new_sum = new_sum + arr[j];
	            
	            if(new_sum == sum){
	                end = j+1;
	                cout<<start<<" "<<end<<endl;
	                flag = true;
	                break;
	            }
	            else if (new_sum > sum){
	                continue;
	            }
	            
	        }
	        if(flag){
	            break;
	        }
	    }
	    if(!flag){
	        cout<<"-1"<<endl;
	    }*/
	}
	return 0;
}
