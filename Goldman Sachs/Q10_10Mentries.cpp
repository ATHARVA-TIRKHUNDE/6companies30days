//problem statement:  Find max 10 numbers in a list having 10M entries.
//below is a function which takes size of array,array elements and k,where k=10 largest element are to be printed 
class Solution
{
    public:
    
    vector<int> Largest(int arr[], int n, int k)
    {
        
        vector<int> ans;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            if(pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
        return ans;
    }
};
