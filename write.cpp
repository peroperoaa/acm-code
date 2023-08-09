#include <stdio.h>
#include <stdlib.h>
//int a[20]={0};
//int i=1;
//int main()
//{
//	while(scanf("%d",&a[i])!=EOF)
//	{
//		i++;
//	}
//	int cnt=0;
//	for(int t=1;t<i-1;t++)
//	{
//		for(int u=1;u<i-1;u++)
//		{
//			if(a[u]==2*a[t])cnt++;
//		}
//	}
//	printf("%d", cnt);
//}

//#include <stdio.h>
//int arr[1010];
//int tp=2;
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for(int i =1;i<=n;i++)scanf("%d", &a[i]);
//	for(int sch=1;sch<n;sch++)
//	{
//		while(tp<=n)
//		{
//			if(a[tp]>)
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//char begin[25][25]={0};
//char end[25][25]={0};
//int max(int a, int b)
//{
//	if(a>b)return a;
//	else return b;
//}
//int main()
//{
//	int rnd;
//	scanf("%d",&rnd);
//	for(int i=1;i<=rnd;i++)scanf("%s%s",&begin[i][1],&end[i][1]);
//	for(int i=1;i<=rnd;i++)
//	{
//			int x=abs(begin[i][1]-end[i][1]);
//		int y=abs(begin[i][2]-end[i][2]);
//		if(x==0&&y==0)
//		{
//			printf("0 0 0 0\n");
//			continue;
//		}
//		printf("%d ",max(x,y));
//		if(x==y||x==0||y==0)printf("1 ");
//		else printf("%2 ");
//		if(x==0||y==0)printf("1 ");
//		else printf("2 ");
//		if(x==y)printf("1\n");
//		else if((y-x)%2==0)printf("2\n");
//		else printf("Inf\n");
//	}
//	return 0;
//}

#include <stdio.h>
const int M=60;
int scan[M][M]={0},mes[M][M]={0},room[2510]={0};//scan保存读取内容
int m,n,rct=1,space,num;//mes保存每个方块的房间号
int main()//room保存每个房间的方块个数
{
	scanf("%d\n%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d", &scan[i][j]);
			if((scan[i][j]%8)/4!=1)
			{
				mes[i][j]=rct;
				room[rct]++;
			}
			else
			{
				mes[i][j]=rct;
				room[rct]++;
				rct++;
			}
		}
	}
	for(int j=1;j<=m;j++)
	{
		for(int i=1;i<=n;i++)
		{
			if(scan[i][j]/8!=1&&mes[i][j]!=mes[i+1][j])
			{
				room[mes[i][j]]+=room[mes[i+1][j]];
				room[mes[i+1][j]]=0;		
				int test=mes[i+1][j];
				for(int reti=1;reti<=n;reti++)
				{
					for(int retj=1;retj<=m;retj++)
					{
						if(mes[reti][retj]==test)
						mes[reti][retj]=mes[i][j];
					}
				}

			}
		}
	}
	for(int cnt=1;cnt<=rct-1;cnt++)
	{
		if(room[cnt]!=0)
		{
			num++;
			if(room[cnt]>space)space=room[cnt];
		}
	}
	printf("%d\n%d",num,space);
	return 0;
}














































































































