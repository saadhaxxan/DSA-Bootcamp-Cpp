	#include <bits/stdc++.h>
	using namespace std;
	
 int isPossible(int N, int arr[]) {
 	int sum = 0;
 	for(int i=0; i<N; i++){
 		sum+=arr[i];
 	}
 	if(sum%3 == 0)
 		return 1;
    return 0;
}

int main(){
		int arr[3] = {40,50,90};
		
		cout << isPossible(3, arr);
	;
		return 0;
}