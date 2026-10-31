#include<iostreame>
using namespace std;
{
    int a[100], n, i, j, key;
    cout<<"enter the number of elements: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
 
    }
    cout<<"sorted array: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}