    #include<bits/stdc++.h>
    using namespace std;

    // ----------------------------------------------------------------------------------

    // Taking Input
    void takeInput(vector<int> &arr){
        for(int i=0;i<arr.size();i++) cin>>arr[i];
    }


    // Find Maximum in array
    int findMaxi(vector<int> arr){
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }

    // Find Minimum in array
    int findMini(vector<int> arr){
        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++) ans=min(arr[i],ans);
        
            return ans;

    }
    
    // Convert decimal to binary
    string convertToBinary(int n){
        string res="";
        while(n>0){
            if(n%2==1){
                res+="1";
            }
            else res+="0";
                    n=n/2;

        }
        reverse(res.begin(),res.end());
        return res;
    }

    //Convert binary to integer
    int ConvertToInteger(string s){
        int len=s.length();
        int num=0;
        int p2=1;//power of 2
        for(int i=len-1;i>=0;i--){
            if(s[i]=='1'){
                num=num+p2;
            }
            p2=p2*2;//increasing the power
        }

        return num;
    }
    // Left shift operator means x<<k means x* 2^k 
    // Right shift operator means x>>k means x/ 2^k 
    // Last bit in case of +ve number is reserved so max value if 2^32 -1 and for minimum last bit is not reserved -2^31
    // positive number is stored in its binary form but -ve number is in its 2s compliment


    // ------------------------------------------------------------------------------------


    void dpSolve(set<int> &ans,int x,vector<pair<int,string>> q,int index,int n){

        if(index==q.size()){
            ans.insert(x+1);
            return ;
        }


        int r=q[index].first;
        string dir=q[index].second[0];
        if(dir=='0'){
            x=(x+r)%n;
            dpSolve(ans,x,q,index+1,n);
        }
        else if(dir=='1'){
            x=
            dpSolve(ans,x,q,index+1,n);
        }
        else{
            int clock=(x+r)%n;
            int anti=(x-r)%n;
            if(anti<0) anti=anti+n;

            dpSolve(ans,clock,q,index+1,n);
            dpSolve(ans,anti,q,index+1,n);
        }

    }

    void solve(){
        // if (fopen("angry.in", "r")) {
        // 	freopen("angry.in", "r", stdin);
        // 	freopen("angry.out", "w", stdout);
        // }
        int n,q,k;
        cin>>n>>q>>x;
        x=x-1;
        // vector<int> arr(n);
        // for(int i=0;i<n;i++) arr[i]=i;
        vector<pair<int,string>> queries;

        while(q--){
            int r;
            cin>>r;
            string s;
            cin>>s;
            queries.push_back({r,s});
        }
        set<int> ans;
        // if n=6 then 0 1 2 3 4 5 last me add krr denge 1
        dpSolve(ans,x-1,queries,0,n);
        cout<<s.size()<<endl;
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;


        
    }
    int main(){
        int t;
        cin>>t;
        while(t--){
            solve();
        }
        return 0;
    }