#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();                                                           // Consume the newline character

    while(t--){
        string str, str1;
        getline(cin, str);

        for(char &c : str){
            if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
                c = c + 3;
            }
        }

        int k = str.length();
        int n = 0;

        for(int j=k-1; j>=0; j--){
            str1.push_back(str[j]);
            n++;
        }

        int l=k/2;

        for(int i=l; i<k; i++){
            str1[i] = str1[i]-1;
        }

        cout<<str1<<endl;
    }

    return 0;
}
