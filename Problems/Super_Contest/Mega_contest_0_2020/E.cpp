#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int a, b, c, d;
    cin>>a>>b;
    a=max(a,b);
    switch (a)
    {
    case 1:
        cout<<"1/1 \n";
        break;
    case 2:
        cout<<"5/6 \n";
        break;
    case 3:
        cout<<"2/3 \n";
        break;
    case 4:
        cout<<"1/2 \n";
        break;            
    case 5:
        cout<<"1/3 \n";
        break;
    case 6:
        cout<<"1/6 \n";
        break;    
    default:
        break;
    }
     
return 0;
}