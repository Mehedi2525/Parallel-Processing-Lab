#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("/home/jahirul/Codeforces_Code_Solve/testcase.txt","r",stdin);
    string s[5],in;
    string output;
    for(int i=0; i<5; i++)
    {
        cin>>in;
        output[i]=in[0];
        int k=0;
        for(int j=1; j<in.length(); j++)
        {
            if(in[j]>='A' && 'Z'>=in[j])
            {
                s[i][k++]=in[j];
            }
        }
        s[i][k]='$';
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            int ans=0;
            if(i!=j)
            {
                for(int k=0; s[i][k]!='$'; k++)
                {
                    if(output[j]==s[i][k])
                    {
                        ans=1;
                    }
                   // cout<<output[j]<<endl;
                }
                for(int k=0; s[j][k]!='$'; k++)
                {
                    if(output[i]==s[j][k])
                    {
                        ans=1;
                    }
                }
                if(output[i]==output[j])
                {
                    ans=1;
                }
                if(ans)cout<<"p"<<i+1<<" p"<<j+1<<" Dependency"<<endl;
                else cout<<"p"<<i+1<<" p"<<j+1<<" No"<<endl;
            }
        }
    }
for(int i=0;i<5;i++){
	for(int j=0;s[i][j]!='$';j++){
		cout<<s[i][j];
	}
}
cout<<endl;
for(int i=0;i<5;i++){
	cout<<output[i]<<endl;
}

}
