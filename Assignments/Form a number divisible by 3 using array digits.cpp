class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum += arr[i];
        }
        return (sum%3==0);
    }
};
