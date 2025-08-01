#include <iostream>

int main()
{
    int a[50],i,n,max;
    std::cout<<"Enter number of element:";
    std::cin>>n;
    std::cout<<"Enter element:";
    for(int i=0;i<n;i++){
    std::cin>>a[i];
}
    max=a[0];
    for(int i=1;i<n;i++){
    if(a[i]>max)
    max=a[i];
}
  std::cout<<"Largest element:"<<max;
  return 0;
}