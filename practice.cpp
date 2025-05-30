    #include<bits/stdc++.h>
    // #include<iostream>
    // #include <vector>
    // #include <unordered_map>
    // #include <ext/pb_ds/assoc_container.hpp>
    // #include <ext/pb_ds/tree_policy.hpp>
    // using namespace __gnu_pbds;
    using namespace std;

    // template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

    // #define ll long long
    #define Int long long
    #define MAX INT_MAX
    #define MIN INT_MIN
    #define yn(f) f? cout<<"YES\n" : cout<<"NO\n"
    // GCD
    // int gcd(int a, int b) {
    //     if (b == 0)
    //         return a;
    //     return gcd(b, a % b);
    // }
    // Taking Input in Vector
    template <typename T>
    void takeInput(vector<T>& vec) {
        T n=vec.size();
        for(T i = 0; i < n; ++i) {
            cin>>vec[i];
        }
    }
    template <typename T>
    void show(vector<T>& vec) {
        T n=vec.size();
        for(T i = 0; i < n; ++i) {
            // cin>>vec[i];
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }

    long long getRangeSum(long long l,long long r){
        return ((r*(r+1))/2) - ((l*(l-1))/2);
    }

    static bool comp(pair<int,int> &a,pair<int,int> &b){
        if(a.first==b.first) return a.second<b.second;
        return a.first<b.first;
    }

    #define ll long long

    long long gcd(long long int a, long long int b)
    {
    if (b == 0)
        return a;
    return gcd(b, a % b);
    }

    // Function to return LCM of two numbers 
    long long lcm(int a, int b)
    {
        return (a / gcd(a, b)) * b;
    }


    // int mod=1e9+7;
    // vector<vector<long long >> dp(1e8+1,vector<long long> (1e6+1,-1));
    int mod=998244353;
    vector<Int> dp(1e6+1,0);
    // long long ans=1e9;


    int delrowDiagonal[]={1,1,-1,-1};
    int delcolDiagonal[]={1,-1,1,-1};
    int delrow[]={1,0,-1,0};
    int delcol[]={0,-1,0,1};

    // computer xor from 1 to n in o(1)
    int computeXOR(int n)
{
  
        // If n is a multiple of 4
        if (n % 4 == 0)
            return n;

        // If n%4 gives remainder 1
        if (n % 4 == 1)
            return 1;

        // If n%4 gives remainder 2
        if (n % 4 == 2)
            return n + 1;

        // If n%4 gives remainder 3

    return 0;
}

    int areaOfTriangle(int x1,int y1,int x2,int y2,int x3,int y3){
        return (1/2)*(abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)));
    }


    // modular operations
    // Addition
void add(int &ans, int val) {
    ans = (ans + val) % mod;
}

// Subtraction
void sub(int &ans, int val) {
    ans = (ans - val + mod) % mod;
}

// Multiplication
void mul(int &ans, int val) {
    ans = (1LL * ans * val) % mod;
}

// Power (a^b % mod)
int power(int a, int b) {
    int res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1)
            res = (1LL * res * a) % mod;
        a = (1LL * a * a) % mod;
        b >>= 1;
    }
    return res;
}

// Modular Inverse using Fermat's Little Theorem (mod must be prime)
int modInverse(int a) {
    return power(a, mod - 2);
}

// Division (a / b % mod)
void divide(int &ans, int val) {
    ans = (1LL * ans * modInverse(val)) % mod;
}

    
    void solve(){
       int n,m;
       cin>>n>>m;

       vector<vector<char>> grid(n,vector<char>(m));
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
       }

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='1'){
                //now we have to traverse either left and then up
                // if we can reach out of bound then true else false

                int row=i;
                int col=j;
                bool way1=true;
                bool way2=true;
                while(row>=0){
                    if(grid[row][j]!='1'){
                        way1=false;
                        break;
                    }
                    row--;
                }
                while(col>=0){
                    if(grid[i][col]!='1'){
                        way2=false;
                        break;
                    }
                    col--;
                }
                if(way1==false && way2==false){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
       }
       cout<<"YES"<<endl;
    
    }

    int main(){
        ios::sync_with_stdio(0);
        // if (fopen("hayfeast.in", "r")) {
            //     	freopen("hayfeast.in", "r", stdin);
            cin.tie(0);
        //     	freopen("hayfeast.out", "w", stdout);
        // }

        int t=1;
        cin>>t;
        while(t--){
        // -------------------------------------------------
            solve();
        // -------------------------------------------------
            
        }
        return 0;
    }