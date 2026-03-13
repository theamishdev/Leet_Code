class Solution {
public:
    vector<int> p,r;

    int f(int x){
        if(p[x]==x) return x;
        return p[x]=f(p[x]);
    }

    bool u(int a,int b){
        a=f(a); b=f(b);
        if(a==b) return false;
        if(r[a]<r[b]) swap(a,b);
        p[b]=a;
        if(r[a]==r[b]) r[a]++;
        return true;
    }

    int maxStability(int n, vector<vector<int>>& e, int k) {
        int l=0,h=1e9,ans=0;

        while(l<=h){
            int m=(l+h)/2;

            p.assign(n,0);
            r.assign(n,0);
            for(int i=0;i<n;i++) p[i]=i;

            int up=k,c=0;

            for(auto &x:e){
                int a=x[0],b=x[1],w=x[2];
                if(w>=m){
                    if(u(a,b)) c++;
                }else if(up>0){
                    if(u(a,b)){
                        up--;
                        c++;
                    }
                }
            }

            if(c==n-1){
                ans=m;
                l=m+1;
            }else h=m-1;
        }

        return ans;
    }
};