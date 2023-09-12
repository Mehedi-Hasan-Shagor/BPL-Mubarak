
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    string s[t];
    for(int i=0;i<t;i++){
        cin>>s[i];

    }
    for(int i=0;i<t;i++){
            int over=0;

        for(int j=0;j<s[i].length();j++){
            if(s[i][j]=='o'||s[i][j]=='O'||s[i][j]=='0'|| s[i][j]=='1'|| s[i][j]=='2'|| s[i][j]=='3'|| s[i][j]=='4'|| s[i][j]=='5'|| s[i][j]=='6')
                {over++;

                }

        }
        if(over<6){
                if(over<=1)
            cout<<over<<" BALL"<<endl;
            else
                cout<<over<<" BALLS"<<endl;

        }

        else if(over%6!=0)
                {
                    if(over/6==1)
            cout<<over/6<<" OVER ";
            else
                cout<<over/6<<" OVERS ";
                if(over%6<=1)
            cout<<over%6<<" BALL"<<endl;
            else
                cout<<over%6<<" BALLS"<<endl;

                }


        else{
                if(over/6==1)
            cout<<over/6<<" OVER"<<endl;
            else
                cout<<over/6<<" OVERS"<<endl;
        }

    }

return 0;
}
