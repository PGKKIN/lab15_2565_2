#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){


        T get;
    
    for(int x=1;x<N;x++)
    {
        for(int y=0;y<x;y++)
        {
            if(d[y]<d[x])
            {
                get =d[x];
                d[x]=d[y];
                d[y]=get;
            }
        } 
        cout<<"Pass "<<x<<":";
        for(int g =0;g<N;g++)
        {
            cout<<d[g]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}