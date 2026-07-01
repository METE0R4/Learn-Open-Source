#include<bits/stdc++.h>
using namespace std;

class TELHOME{
    private:
    public:
    int mintime(int dist, int maxtele){
            return dist>maxtele? dist-maxtele:0;
    }
};
int main(){
TELHOME t;
int result = t.mintime(63,62);
cout<<result<<endl;
}