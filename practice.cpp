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


    void solve(){
        // if (fopen("angry.in", "r")) {
        // 	freopen("angry.in", "r", stdin);
        // 	freopen("angry.out", "w", stdout);
        // }
        


        
    }
    int main(){
        int t;
        cin>>t;
        while(t--){
            solve();
        }
        return 0;
    }