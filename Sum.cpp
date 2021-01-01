//#include <stdio.h>
//
//int main()
//{
//  int t,a;
//  int ans;
//  scanf("%d", &t);
//  for(int i=1; i<=t; i++)
//  {
//    scanf("%d", &a);
//    int array[a+1][a+1];
//    ans=0;
//    for(int j=1; j<=a; j++)
//    {
//      for(int k=1; k<=a; k++)
//      {
//        scanf("%d",&array[j][k]);
//      }
//    }
//    printf("Case #%d: ",i);
//    for(int l=1; l<=a; l++)
//    {
//      ans = 0;
//      for(int m=1; m<=a; m++)
//      {
//        ans = ans + array[m][l];
//      }
//      if (l==a){
// printf("%d",ans);
// }
// else
// printf("%d ",ans);
//    }
//    printf("\n");
//  }
//  return 0;
//}

#include <stdio.h>

int main()
{
  int t,a;
  int ans;
  scanf("%d", &t);
  for(int i=1; i<=t; i++)
  {
    scanf("%d", &a);
    int array[a][a];
    ans=0;
    for(int j=0; j<a; j++)
    {
      for(int k=0; k<a; k++)
      {
        scanf("%d",&array[j][k]);
      }
    }
    printf("Case #%d: ",i);
    for(int l=0; l<a; l++)
    {
      ans = 0;
      for(int m=0; m<a; m++)
      {
        ans = ans + array[m][l];
      }
      if (l==a-1){
 printf("%d",ans);
 }
 else
 printf("%d ",ans);
    }
    printf("\n");
  }
  return 0;
}
