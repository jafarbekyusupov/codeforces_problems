#include <iostream>
using namespace std;

int main(){
	int n, k;
    cin >> n >> k;
    int cnt = 0, min=0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a<=0)	continue;
        cnt++;
        if(cnt == k){   min = a;}
        if(cnt > k && a!=min){  
            cnt--;
            break;
        }    
    }
    cout << cnt;
}
