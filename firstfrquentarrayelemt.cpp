#include<iostream>
using namespace std;
int main(){
   int num[10]={1,2,2,3,2,4,6,2,10,20};
    int count;
    for(int i=0;i<sizeof(num);i++){
        for(int j=i;j<sizeof(num);j++){
            if(num[i]==num[j]){
                count++;
                continue;
            }
        }
    }
    cout<<"most frequent number is:"<<count;
    return 0;
}