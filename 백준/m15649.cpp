#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int v[10];
int isused[10];

void func(int k){
    if(k == M){
        for(int i=0;i<M;i++){
            cout << v[i] << ' ';
        }
        cout <<'\n';
    }
    for(int i=1;i<=N;i++){
        if(!isused[i]){
            v[k] = i;
            isused[i] = 1;
            func(k+1);
            isused[i] = 0;
        }
    }
}


int main() {
    

    cin >> N >> M;
    func(0);

    return 0;
}