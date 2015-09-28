#include <iostream>
using namespace std;int main(){int r,c,k=0,A[100][100];cin>>r>>c;for(int i=0;i<r;i++){for(int j=0;j<r;j++){cin>>A[i][j];if(c==A[i][j])k=1;}}if(k==1)cout<<"YES";else cout<<"NO";}