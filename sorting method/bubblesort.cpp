#include<iostreame>
using namespace std;
int main(){
    int arr[100],lb,ub;
    cout<<"enter value of lower bound"<<endl;
    cin>>lb;
    cout<<"enter value of upper bound"<<endl;
    cin>>ub;
    cout<<"enter elements"<<endl;
    for(int i=lb;i<ub;i++){
        cin>>arr[i];
    }
    cout<<"displaying array"<<endl;
    for(int i=lb;i<ub;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=lb;i<ub-1;i++){
        for(int j=lb;j<ub-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"\n after sorting \n";
    for(int i=lb;i<ub;i++){
        cout<<arr[i]<<" ";
    }
}