#include<iostream>
#include<math.h>
using namespace std;

#define MAX 1000000

void precompute(int* ranks){
    
    ranks[0] = -1;
    
    for(int i=2; i<=100; i++){
        
        if(ranks[i] != -1){
            int cube = pow(i, 3);
            for(int j = cube; j <= MAX; j += cube)
                ranks[j] = -1;
        }
    }
    
    int rank = 1;
    for(int i=0; i<=MAX; i++)
        if(ranks[i] != -1){
            ranks[i]= rank;
            rank++;
        }
}

int main(){
    
    int* ranks = new int[MAX + 1]();
    
    precompute(ranks);
    
    int t;
    cin >> t;
    
    for(int i=1; i<=t; i++){
        int num;
        cin >> num;
        
        if(ranks[num] != -1)
            cout << "Case " << i << ": " << ranks[num] << endl;
        else
            cout << "Case " << i << ": Not Cube Free" << endl;
    }
    
	return 0;
}