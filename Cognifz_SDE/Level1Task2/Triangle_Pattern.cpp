class Solution {
  public:
    void printTriangle(int n) {
        int s=0,a='A',t=0;
        char k,p,g=n-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                s=int(a)+j;
                k=char(s);
                cout<<k;
            }
            for(int l=n-g-1;l>=1;l--){
               t=int(a)+l-1;
                p=char(t);
                cout<<p; 
            }
            g=g-1;
            
            cout<<"\n";
        }
    }
};