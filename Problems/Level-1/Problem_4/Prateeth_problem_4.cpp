#include<iostream>
using namespace std;

void Converting(int n){

    int day=0;
    int hour=0;
    int min=0;

    day=n/86400;
    n=n%86400;
    cout<<day<<" day, ";

    hour=n/3600;
    n=n%3600;
    cout<<hour<<" hour, ";

    min=n/60;
    n=n%60;
    cout<<min<<" min, ";

    cout<<n<<" sec"<<endl;
}

int main(){

    int n;
    cin>>n;
    
    Converting(n);
}