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