#include<iostream>
using namespace std;
void binarySearch(int a[] , int lb, int ub, int item) {
int beg,end,mid;
beg=lb;
end=ub;

mid=(beg + end)/2;
while((beg<=end)&& (a[mid]!= item))
{
    if (item<a[mid]) {
        end = mid - 1;
    }
else {
    beg = mid + 1;
}
mid = (beg + end)/2;
}
if(a[mid]==item)
{
    cout<<item<<"is present in " <<mid+1<<"  index"<<endl;
}
else{
    cout<<"element is not present"<<endl;
}

}
int main()
{
    int arr[10] ;
    int search;

    cout<<"enter elements of array"<<endl;
    for(int i= 0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter element to be searched"<<endl;
    cin>>search;

    binarySearch(arr,0,10,search);
    return 0;
}