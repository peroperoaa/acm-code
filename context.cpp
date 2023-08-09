//#include <stdio.h>			1100上升数列
//#include <math.h>
//double change(int input);
//int main()
//{
//	double x1, y1, x2, y2, x3, y3;
//	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
//	double xa = change(x1-x2);
//	double ya = change(y1-y2);
//	double length1 = sqrt(pow(xa,2)+pow(ya,2));
//	
//	double xb = change(x1-x3);
//	double yb = change(y1-y3);
//	double length2 = sqrt(pow(xb,2)+pow(yb,2));
//	
//	double xc = change(x2-x3);
//	double yc = change(y2-y3);
//	double length3 = sqrt(pow(xc,2)+pow(yc,2));
//	
//	double p = 0.5*(length1+length2+length3);
//	double s = sqrt(p*(p-length1)*(p-length2)*(p-length3));
//	printf("%.2f", s);
//	return 0;
//}
//double change(int input)
//{
//	if(input<0)
//	return -input;
//	else 
//	return input;
//}
//
//
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	long long a;
//	scanf("%lld", &a);
//	printf("%d", a);
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	bool b = a;
//	int c = (int)b;
//	printf("%d", c);
//}
//#include <stdio.h>
//int main() 
//{
//	int a = 6666666, b = 35435, c = 548643215;
//	printf("%-5d1 %d\n%d", a, b, c);
////	return 0;
//}
//
//#include <stdio.h>
//int main(void)
//{
////	int a = 0;
////	int * p = &a;
////	printf("%p\n%p\n%p\n", p, &p,&a);
//	int arr[10]= {0};
//	printf("%p\n%p\n", arr, &arr);
////	printf("sizef(int)=%d\n", sizeof(int));
////	printf("sizeof(&bcc)=%lu",sizeof(&bcc));
//	return 0;
////}
//
//
//#include <stdio.h>
//int main(void)
//{
//	char a;
//	scanf("%c", &a);
//	if(a%2==0)
//	printf("NO");
//	else
//	printf("YES");
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	long long a;
//	long long b;
//	scanf("%lld %lld", &a, &b);
//	if(a<b)
//	printf("<");
//	else if(a>b)
//	printf(">");
//	else
//	printf("=");
//	return 0;
//}

//
//#include <stdio.h>
//int main(void)
//{
//	int x;
//	scanf("%d", &x);
//	if(x%3 == 0 && x%5 == 0 && x%7 == 0)
//	printf("3 5 7");
//	else if(x%3 == 0 && x%5 == 0)
//	printf("3 5");
//	else if(x%5 == 0 && x%7 == 0)
//	printf("5 7");	
//	else if(x%3 == 0 && x%7 == 0)
//	printf("3 7");	
//	else if(x%7 == 0)
//	printf("7");	
//	else if(x%5 == 0)
//	printf("5");
//	else if(x%3 == 0)
//	printf("3");
//	return 0;
//	
//}


//#include <stdio.h>
//int main(void)
//{
//	int a[3]={0};
//	scanf("%d %d %d", &a[0], &a[1] ,&a[2]);
//	int score = 0;
//	for(int i = 0; i<3;i++)
//	{
//		if (a[i]<60)
//		{
//			score++;
//		}
//	}
//	if(score == 1)
//	printf("1");
//	else
//	printf("0");
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int day;
//	scanf("%d", &day);
//	if(day == 1 || day == 3 || day == 5)
//	printf("NO");
//	else
//	printf("YES");
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int length;
//	scanf("%d", &length);
//	double bike_time = 50+length/3.0;
//	double walk_time = length/1.2;
//	if(bike_time<walk_time)
//	printf("Bike");
//	else if(bike_time>walk_time)
//	printf("Walk");	
//	else
//	printf("All");
//	return 0;
//	
//}

//
//#include <stdio.h>
//int main(void)
//{
//	double x;
//	scanf("%lf", &x);
//	if(x >= 0 && x < 5)
//	printf("%.3f", -x+2.5);
//	else if(x >= 5 && x<10)
//	printf("%.3f", 2-1.5*(x-3)*(x-3));
//	else 
//	printf("%.3f",x/2-1.5);
//	return 0;
//	}


//
//#include <stdio.h>
//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if((a+b)>c && (a+c)>b && (b+c)>a)
//	printf("1");
//	else
//	printf("0");
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	if (x<=1 && x>= -1 && y<= 1 && y>= -1)
//	printf("yes");
//	else
//	printf("no");
//	return 0;
//}

//
//#include <stdio.h>
//int main(void)
//{
//	int a, b;
//	char count;
//	scanf("%d %d %c", &a, &b, &count);
//	if(count == '/' && b == 0)
//	{
//		printf("Divided by zero!");
//		return 0;
//	}
//	if (count != '+' && count != '-' && count != '*' && count != '/')
//	{
//		printf("Invalid operator!");
//		return 0;
//	}
//	if(count == '+')
//	printf("%d", a+b);
//	if(count == '-')
//	printf("%d", a-b);
//	if(count == '*')
//	printf("%d", a*b);
//	if(count == '/')
//	printf("%d", a/b);
//	return 0;
//}
//
//



//
//
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	double a, b, c;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	if(b*b-4*a*c>=0)
//	{
//		double x1 = (-b+sqrt(b*b-4*a*c))/(2*a), x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
//		if(b*b-4*a*c==0)
//			printf("x1=x2=%.5f", x1);
//		else 
//		printf("x1=%.5f;x2=%.5f", x1, x2);
//	}
//	if(b*b-4*a*c<0)
//	printf("No answer!");
//	return 0;	
//}



//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	double a, b, c;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	if(b*b-4*a*c>=0)
//	{
//		double x1 = (-b+sqrt(b*b-4*a*c))/(2*a), x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
//		if(b*b-4*a*c==0)
//			printf("x1=x2=%.5f", x1);
//		else if (b*b-4*a*c>0 && x1>x2)
//		printf("x1=%.5f;x2=%.5f", x2, x1);
//		else if (b*b-4*a*c>0 && x1<x2)
//		printf("x1=%.5f;x2=%.5f", x1, x2);
//	}
//	if(b*b-4*a*c<0)
//	printf("No answer!");
//	return 0;	
//}

//#include <stdio.h>
//int main(void)
//{
//	int p, x0, y0, x1, y1;
//	scanf("%d %d %d %d %d", &p, &x0, &y0, &x1, &y1);
//	switch(p)
//	{
//		case 1:
//			if(x0 == x1 || y0 == y1)
//			printf("Yes");
//			else
//			printf("No");
//			break;
//		case 2:
//			printf("No");
//			break;
//		case 3:
//			if((x1 == x0+2 || x1 == x0-2) && (y1 == y0+1 || y1 == y0-1))
//			printf("Yes");
//			else if((x1 == x0+1 || x1 == x0-1) && (y1 == y0+2 || y1 == y0-2))
//			printf("Yes");
//			else 
//			printf("No");
//			break;
//		case 4:
//			if((x1 == x0+2 || x1 == x0-2) && (y1 == y0+2 || y1 == y0-2))
//			printf("Yes");
//			else
//			printf("No");
//			break;
//	}
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main(void)
//{
//	long long amount;
//	char a, b;
//	scanf("%lld\n%c%c", &amount, &a, &b);
//	int score = 0;
//	if (a == 'B')
//		score += 1;
//	if(b == 'B')
//		score += 1;
//	if(a == 'C')
//		score += 5;
//	if(b == 'C')
//		score += 5;	
//	if(score == 0)
//	printf("%lld", amount);
//	if(score == 1 || score == 2)
//	printf("%lld", amount*8/10);
//	if(score == 5 || score == 10)
//	printf("%lld", amount*7/10);
//	if(score == 6)
//	printf("%lld", amount*6/10);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a1, p1, a2, p2;
//	scanf("%d %d\n%d %d", &a1, &p1, &a2, &p2);
//	if(a1>a2 || a1 == a2 && p1 <p2)
//	printf("\"\\n\"");
//	else if(a1<a2 || a1 == a2 && p1>p2)
//	printf("\"\\t\"");
//	return 0;
//}

//
//#include <stdio.h>
//int main(void)
//{
//	int n, a, b, c;
//	scanf("%d\n%d %d %d", &n, &a, &b, &c);
//	if(n>5)
//	printf("art");
//	else if(n<6 && n>3)
//	{
//		if(b>c)
//		printf("art");
//		else
//		printf("comprehensive");
//	}
//	else if(a< b && a<c)
//	printf("library");
//	else if(b< a && b<c)
//	printf("comprehensive");
//	else if(c<a && c<b)
//	printf("art");
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int year;
//	scanf("%d", &year);
//	if(year%400==0)
//	printf("1");
//	else if(year%100==0)
//	printf("0");
//	else if(year%4 == 0)
//	printf("1");
//	else
//	printf("0");
//	return 0;
//}

//
//#include <stdio.h>
//int main(void)
//{
//	char a, b, c;
//	int d;
//	scanf("%c%c%c%d", &a, &b, &c, &d);
//	if(a == 'J')
//	{
//		if(b == 'a')
//			printf("1 ");
//		else if(c == 'n')
//			printf("6 ");
//		else
//			printf("7 ");
//	}
//	if(a == 'F')
//		printf("2 ");
//	if(a == 'M')
//	{
//		if(c == 'r')
//			printf("3 ");
//		else
//			printf("5 ");
//	}
//	if(a == 'A')
//	{
//		if(b == 'p')
//			printf("4 ");
//		else
//			printf("8 ");
//	}
//	if(a == 'S')
//		printf("9 ");
//	if(a == 'O')
//		printf("10 ");
//	if(a == 'N')
//		printf("11 ");
//	if(a == 'D')
//		printf("12 ");
//	printf("%d", d);
//	return 0;
//}




//#include <stdio.h>
//int count (int m, int n);
//int main(void)
//{
//	int n, m,a,b,c,d,e,f;
//	scanf("%d %d\n%d %d\n%d %d\n%d %d", &n, &m, &a, &b, &c, &d, &e, &f);
//	int h = count(n,m);
//	int i = count(a,b);
//	int j = count(c,d);
//	int k = count(e,f);
//	if(h!=-1)
//	printf("%d",h);
//	if(i!=-1 && h!=-1)
//	printf("\n");
//	
//	if(i!=-1)
//	printf("%d",i);
//	if(j!=-1 && i!=-1)
//	printf("\n");
//		
//	if(j!=-1)
//	printf("%d",j);
//	if(j!=-1 && k!=-1)
//	printf("\n");
//	
//	if(k!=-1)
//	printf("%d",k);
//	return 0;
//}
//int count(int n, int m)
//
//	{
//	int i;
//	int monkey[n];
//	for(int i = 0; i<n; i++)
//	{
//		monkey[i]= 0;
//	}
//	int monkey_number = n;
//	int number = 0;
//	for(i = 0; i < n; i++)
//	{
//		int count = 0;
//		for(int h = 0; h<n; number++, h++)
//		{
//			if(number == n)
//				number -=n;
//			if(monkey[number]==0)
//				count++;
//			if(m%monkey_number == 0)
//			{
//				if(monkey_number == 1)
//				break;
//				else if(count == monkey_number)
//				{
//					monkey[number]=1;
//					monkey_number--;
//					break;
//				}
//			}
//			else if(count == m%monkey_number)
//			{
//				monkey[number]=1;
//				monkey_number--;
//				break;
//			}
//		}
//		
//	}
//	int isPrime = 0;
//	for(int t = 0; t<n; t++)
//	{
//		if(monkey[t] == 0)
//		{
//			return t+1;
//			int isPrime = 1;
//			break;
//		}
//	}
//	return -1;
//}









//
//
//#include <stdio.h>
//int main(void)
//{
//	unsigned int a;
//	int b;
//	scanf("%u %d", &a, &b);
//	if(a<b)
//	printf("<");
//	else if(a>b)
//	printf(">");
//	else
////	printf("=");
////	return 0;
////}
//
//
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int monkey[n]  = {0};
//	for(int i = 0; i<n; i++)
//	{
////		monkey[i]=0;
//		printf("%d\n", monkey[i]);
//	}
//	return 0;
//}
//


//#include <stdio.h>
//int main(void)
//{
//	int year;
//	scanf("%d", &year);
//	if(year%400==0)
//	printf("Y");
//	else if(year%100==0)
//	printf("N");
//	else if(year%4 == 0)
//	printf("Y");
//	else
//	printf("N");
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a,m;
//	int arr[5];
//	scanf("%d %d %d %d %d %d",&a, &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
//	int sum= 0;
//	for(int z = 0; z < 5 ; z++)
//	{
//		if(arr[z]<a)
//		sum += arr[z];
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	scanf("%d", &number);
//	int group[number];
//	for(int m = 0; m<number; m++)
//	{
//		scanf("%d", &group[m]);
//	}
//	int sum = 0;
//	for(int m = 0; m<number; m++)
//	{
//		sum+=group[m];
//	}
//	double sigma = sum*1.0/number;
//	printf("%.2f", sigma);
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	int foot;
//	scanf("%d", &foot);
//	if(foot%4== 2)
//	printf("%d ", foot/4+1);
//	else if(foot %2 == 0)
//	printf("%d ", foot/4);
//	if(foot%2 == 1)
//	{
//		printf("0 0");
//		return 0;
//	}
//	else
//	printf("%d ", foot/2);
//	return 0;
//}

//#include <stdio.h>
//int main()

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int s, v;
//	int time;
//	int e, f;
//	int g;
//	scanf("%d %d", &s, &v);
//	g = s % v;
//	if (g != 0) 
//	{
//		time = s / v + 10;
//		time++;
//	}
//	else 
//	{
//		time = s / v + 10;
//	}
//	
//	if (time >= 480)
//	{		
//		if (time % 60 != 0)
//		{
//			e = 24 - time / 60 + 8-1;
//			f = 60 - time % 60;
//			printf("%02d:%02d", e, f);
//			goto end;
//		}
//		else 
//		{
//			e = 24 - time / 60 + 8;
//			f = 0;
//			printf("%02d:%02d", e, f);
//			goto end;
//		}
//	}
//	else
//	{		
//		if (time % 60 != 0)
//		{
//			e = 8 - (time / 60) - 1;
//			f = 60 - (time % 60);
//			printf("%02d:%02d", e, f);
//			goto next;
//		}
//		else 
//		{
//			e = 8 - (time / 60);
//			f = 0;
//			printf("%02d:%02d", e, f);
//			goto next;
//		}
//	}
//    end:
//	next:
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int length, n, j, k, count = 0;
//	scanf("%d %d", &length, &n);
//	int arr[length+1] = {0};
//	for(int i = 0; i < n; i++)
//	{
//		scanf("%d %d", &j, &k);
//		for(int m = j; m <= k; m++)
//		{
//			arr[m]=1;
//		}
//	}
//	for(int i = 0 ; i<=length; i++)
//	{
//		if(arr[i]==0)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	double a = 2.335;
//	printf("%lld, %f", a,a,a);
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	double a = 0, b=0;
//	scanf("%lf.%lf", &a, &b);
//	printf("%f   %f", a, b);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int t, m, n;
//	scnaf("%d\n", &t);
//	int i = 0;
//	for(;i<t;i++)
//	{
//		scanf("%d %d", &m, &n);
//		
//	}
//	
//	
//	
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n+1]={0};
//	for(int i = 0; i < n+1; i++)
//	{
//		if(i%7 == 0 || i/10 == 7 || i%10 == 7)
//		a[i]= 1;
//	}
//	int sum = 0;
//	for(int i = 0; i <n+1; i++)
//	{
//		if(a[i]==0)
//		sum += pow(i,2);
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	
//	return 0;
//}
//

//#include <stdio.h>
//#include <math.h>
//int main(){
//	int a,c,d=1,e = 0;
//	scanf("%d",&a);
//	c=a;
//	while(c>0){
//		while (a>0){
//			d*=a;
//			a--;
//		}
//		c--;
//		e+=d;
//		d=1;
//		a=c;
//	}
//	printf("%d",e);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	int arr[10]={0};
//	for(int i = 0; i< k; i++)
//	{
//		int m = 0;
//		scanf("%d", &m);
//		arr[m-1]+=1;
//	}
//	printf("%d\n%d\n%d", arr[0], arr[4], arr[9]);
//	return 0;
//}


//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//	int n = 5;
//	int a[10] = {1,2,3,4,5,6,7,8,9,0};
//	bool blankFlag = false;
//for(int i = 0; i < n; i ++)
//{
//    if(blankFlag)
//        printf(" ");
//    else
//        blankFlag = true;
//    printf("%d", a[i]);
//}
//printf("\n");
//	return 0;
//}



//#include <stdio.h>
//int count (int m, int n);
//int main(void)
//{
//	int n,m;
//	while(scanf("%d %d", &n, &m)!=EOF)
//	{
//		if(n == 0 || m == 0)
//		{
//			break;
//		}
//		printf("%d\n", count(n, m));
//	}
//
//	return 0;
//}
//int count(int n, int m)
//
//	{
//	int i;
//	int monkey[n];
//	for(int i = 0; i<n; i++)
//	{
//		monkey[i]= 0;
//	}
//	int monkey_number = n;
//	int number = 0;
//	for(i = 0; i < n; i++)
//	{
//		int count = 0;
//		for(int h = 0; h<n; number++, h++)
//		{
//			if(number == n)
//				number -=n;
//			if(monkey[number]==0)
//				count++;
//			if(m%monkey_number == 0)
//			{
//				if(monkey_number == 1)
//				break;
//				else if(count == monkey_number)
//				{
//					monkey[number]=1;
//					monkey_number--;
//					break;
//				}
//			}
//			else if(count == m%monkey_number)
//			{
//				monkey[number]=1;
//				monkey_number--;
//				break;
//			}
//		}
//		
//	}
//	int isPrime = 0;
//	for(int t = 0; t<n; t++)
//	{
//		if(monkey[t] == 0)
//		{
//			return t+1;
//			int isPrime = 1;
//			break;
//		}
//	}
//	return -1;
//}


//#include <stdio.h>
//int main(void)
//{
//	int h, r;
//	scanf("%d %d", &h, &r);
//	double v= 1.0*h*3.14159*r*r;
//	int number = (20000/v +1);
//	printf("%d", number);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int mon1, mon2, day1, day2, number;
//	while(scanf("%d %d %d %d %d", &mon1, &day1, &number, &mon2, &day2)!=EOF)
//	{
//		int time1 = 0, time2 = 0;
//		if(mon1==2)
//		time1=31+day1;
//		if(mon1==3)
//		time1=59+day1;
//		if(mon1==4)
//		time1=90+day1;
//		if(mon1==5)
//		time1=120+day1;
//		if(mon1==6)
//		time1=151+day1;
//		if(mon1==7)
//		time1=181+day1;
//		if(mon1==8)
//		time1=212+day1;
//		if(mon1==9)
//		time1=243+day1;
//		if(mon1==10)
//		time1=273+day1;
//		if(mon1==11)
//		time1=304+day1;
//		if(mon1==12)
//		time1=334+day1;
//		if(mon1==1)
//		time1=day1;
//		
//		if(mon2==2)
//		time2=31+day2;
//		if(mon2==3)
//		time2=59+day2;
//		if(mon2==4)
//		time2=90+day2;
//		if(mon2==5)
//		time2=120+day2;
//		if(mon2==6)
//		time2=151+day2;
//		if(mon2==7)
//		time2=181+day2;
//		if(mon2==8)
//		time2=212+day2;
//		if(mon2==9)
//		time2=243+day2;
//		if(mon2==10)
//		time2=273+day2;
//		if(mon2==11)
//		time2=304+day2;
//		if(mon2==12)
//		time2=334+day2;
//		if(mon2==1)
//		time2=day2;
//		int delta =time2-time1;
//		int result = number*pow(2,delta);
//		printf("%d\n", result);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for(int h = 2; h <= n; h++){
//		for(int i =2; i< h; i++){
//			for(int j =i; j<h; j++){
//				for(int k =j; k<h; k++){
//					if(i*i*i+j*j*j+k*k*k==h*h*h)
//					printf("Cube = %d, Triple = (%d,%d,%d)\n", h, i,j,k);
//				}
//			}
//		}
//	}
//	return 0;
//		
//}



//#include <stdio.h>
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int length;
//	while(scanf("%d", &length)!=EOF)
//	{
//		double bike_time = 50+length/3.0;
//	double walk_time = length/1.2;
//	if(bike_time<walk_time)
//	printf("Bike\n");
//	else if(bike_time>walk_time)
//	printf("Walk\n");	
//	else
//	printf("All\n");
//	}
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 3;
//	int is = 0;
//	for (int i = 100; i <= 999; i++)
//	{
//		int now = i;
//		int sum = 0;
//		while (now > 0)
//		{
//			int d = now % 10;
//			sum += pow(d, 3);
//			now /= 10;
//		}
//		if (sum == i)
//		{
//			if(is == 1)
//				printf("\n%d", i);
//			if(is == 0)
//			{
//				printf("%d", i);
//				is = 1;
//			}
//		
//		}
//	}
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	printf("sizeof(long)=%d\n", sizeof(long));
//	printf("sizeof(int)=%d", sizeof(int));
//	return 0;
//}
//
////
////
//////#include <stdio.h>
//////int main()
//////{
//////	int n;
//////	scanf("%d", &n);
//////	int arr[n]={0};
//////	for(int i = 0; i<n; i++)
//////	{
//////		scanf("%d",&arr[i]);
//////	}
//////	int record = 0,count = 1;
//////	for(int i = 0; i<n; i++)
//////	{
//////		int now = arr[i];
//////		for(int m =i+1; m<n; m++)
//////		{
//////			
//////		}
//////	}
//////	return 0;
//////}
//////
//////
//////
//////	for(int m = 0; m<n-1;m++)
//////	{
//////		if(arr[m]<arr[m+1])
//////		{
//////			count++;
//////			continue;
//////		}
//////		else
//////		{
//////			if(count>record)
//////			record = count;
//////			count = 1;
//////		}
//////	}


//#include <stdio.h>
//int main()
//{
//	int n, sum = 0;
//	scanf("%d", &n);
//	for(int i = 0; i< n; i++)
//	{
//		int l=i+1;
//		sum += l*l*l;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[20]={1,1,};
//	int a, isPrime = 0;
//	for(int i = 2; i < 20; i++)
//	{
//		arr[i]=arr[i-1]+arr[i-2];
//	}
//	for(int t = 0; t<n;t++)
//	{
//		scanf("%d", &a);
//		if(t != n-1)
//		printf("%d\n",arr[a-1]);
//		else
//		printf("%d",arr[a-1]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[1000]={0};
//	for(int t= 0; t<n;t++)
//	{
//			for(int i = 1; i<=10;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		
//		printf("%.2f\n", arr[1]*28.9+arr[2]*32.7+arr[3]*45.6+arr[4]*78.0+arr[5]*35.0+arr[6]*86.2+arr[7]*27.8+arr[8]*43.0+arr[9]*56.0+arr[10]*65.0);
//	}	
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i =1,count = 0,n;
//	scanf("%d", &n);
//	int fish[n+1]={0};
//	while(scanf("%d", &fish[i])!=EOF)
//	{
//		i++;
//	}
//	for(int m = 1; m<n+1; m++)
//	{
//		for(int z =m; z>0 ;z--)
//		{
//			if(fish[z]<fish[m])
//			count ++;
//			if(z==1)
//			{
//				if(m!=n)
//				{
//					printf("%d ", count);
//				count = 0;
//				}
//				else 
//				printf("%d", count);
//			}
//		}                      
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int s = 0, v = 0, t1 = 0, h = 0, m = 0, a = 0, b = 0;
//	scanf("%d %d", &s, &v);
//	
//	if (s % v == 0) {t1 = 10 + s / v  ;} 
//	else {t1 = 11 + s / v  ;}
//	
//	if (t1 < 480) {a = t1 / 60;b = t1 % 60;h = 8 - a;m = b;} 
//	else {a = (t1 - 480) / 60;b = (t1 - 480) % 60;h = 24 - a;m = b;}
//	
//	if (h >= 10) 
//	{if (m >= 10) {printf("%d:%d", h, m);} 
//	 else {printf("%d:0%d", h, m);}} 
//	else 
//	{if (m >= 10) {printf("%0d:%d", h, m);} 
//	 else {printf("%0d:0%d", h, m);}}
//	return 0;
//}



//#include <stdio.h>
//
//int main() {
//	int n, m;
//	char a, b, c;
//	scanf("%c%c%c%d%d", &a, &b, &c, &m, &n);
//	printf("%d",&a);
//	switch (a) {
//		case 'J':
//			if (b == 'a') {
//				if (m == 0)
//					printf("1 %d", n);
//				else
//					printf("1 %d%d", m, n);
//			} else if (b == 'u') {
//				if (c == 'n') {
//					if (m == 0)
//						printf("6 %d", n);
//					else
//						printf("6 %d%d", m, n);
//				}
//				if (c == 'l') {
//					if (m == 0)
//						printf("7 %d", n);
//					else
//						printf("7 %d%d", m, n);
//				}
//			}
//			break;
//		case 'F'	:
//			if (m == 0)
//				printf("2 %d", n);
//			else
//				printf("2 %d%d", m, n);
//			break;
//		case 'M':
//			if (c == 'r') {
//				if (m == 0)
//					printf("3 %d", n);
//				else
//					printf("3 %d%d", m, n);
//			}
//			if (c == 'y') {
//				if (m == 0)
//					printf("5 %d", n);
//				else
//					printf("5 %d%d", m, n);
//			}
//			break;
//		case 'A':
//			if (c == 'p') {
//				if (m == 0)
//					printf("4 %d", n);
//				else
//					printf("4 %d%d", m, n);
//			} else if (c == 'u') {
//				if (m == 0)
//					printf("8 %d", n);
//				else
//					printf("8 %d%d", m, n);
//				break;
//			}
//		case 'S'	:
//			if (m == 0)
//				printf("9 %d", n);
//			else
//				printf("9 %d%d", m, n);
//			break;
//		case 'O'	:
//			if (m == 0)
//				printf("10 %d", n);
//			else
//				printf("10 %d%d", m, n);
//			break;
//		case'N'	:
//			if (m == 0)
//				printf("11 %d", n);
//			else
//				printf("11 %d%d", m, n);
//			break;
//		case'D'	:
//				if (m == 0)
//					printf("12 %d", n);
//				else
//					printf("12 %d%d", m, n);
//			break;
//	}
//	return 0;
//}
//
//
//
//


//
//#include <stdio.h>
//int main()
//{
//	long long a = 50000000000;
//	printf("%d",a);
//}
//



//
//#include <stdio.h>
//int main(void)
//{
//	char a, b, c;
//	int d;
//	scanf("%c%c%c%d", &a, &b, &c, &d);
//	if(a == 'J')
//	{
//		if(b == 'a')
//			printf("1 ");
//		else if(c == 'n')
//			printf("6 ");
//		else
//			printf("7 ");
//	}
//	if(a == 'F')
//		printf("2 ");
//	if(a == 'M')
//	{
//		if(c == 'r')
//			printf("3 ");
//		else
//			printf("5 ");
//	}
//	if(a == 'A')
//	{
//		if(b == 'p')
//			printf("4 ");
//		else
//			printf("8 ");
//	}
//	if(a == 'S')
//		printf("9 ");
//	if(a == 'O')
//		printf("10 ");
//	if(a == 'N')
//		printf("11 ");
//	if(a == 'D')
//		printf("12 ");
//	printf("%d", d);
//	return 0;
//}


//
//#include <stdio.h>
//
//int main() {
//	int n, m;
//	char a, b, c;
//	scanf("%c%c%c%d", &a, &b, &c, &n);
//	switch (a) {
//		case 'J':
//			if (b == 'a') {
//				printf("1 %d", n);
//
//			} else if (b == 'u') {
//				if (c == 'n') {
//					printf("6 %d", n);
//				}
//				if (c == 'l') {
//					printf("7 %d", n);
//				}
//			}
//			break;
//		case 'F'	:
//			printf("2 %d", n);
//			break;
//		case 'M':
//			if (c == 'r') {
//				printf("3 %d", n);
//			}
//			if (c == 'y') {
//				printf("5 %d", n);
//			}
//			break;
//		case 'A':
//			if (c == 'p') {
//				printf("4 %d", n);
//			} else if (c == 'u') {
//				printf("8 %d", n);
//				break;
//			}
//		case 'S'	:
//			printf("9 %d", n);
//			break;
//		case 'O'	:
//			printf("10 %d", n);
//			break;
//		case'N'	:
//			printf("11 %d", n);
//			break;
//		case'D'	:
//				printf("12 %d", n);
//			break;
//	}
//	return 0;
//}





//
//
//#include <stdio.h>
//int main()
//{
//	int arr[10001]={0};
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for(int i = 1; i<n+1; i++)
//	{
//		int test = 0;
//		scanf("%d", &test);
//		if(test<=10000)
//		{
//			if(i<arr[test] || arr[test]==0)
//			arr[test]=i;
//		}
////		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//	int numb = 0;
//	for(int i=1;i<m+1;i++)
//		{
//			int numb = 0;
//			scanf("%d", &numb);
//			if(arr[numb])
//				printf("%d ",arr[numb]);
//			else
//				printf("-1");
//		}
//	printf("\n");
//	return 0;
//}




//for(int i=0;i<m;i++)
//	{
//		scanf("%d", &numb);
//		if(aarr(numb))
//		printf("%d ",a[numb]);
//	else
//			printf("-1");
//	}



//int test[m+1]={0};
//	for(int i = 1; i<m+1, i++)
//	{
//		scanf("%d", &test[i]);
//	}
//	
//	for(int i = 1;i<m+1;i++)
//	{
//		if(test[i]<)
//	}
//
//
//
//
//
//nt test;
//	while(scanf("%d", &test)!=EOF)
//	{
//		if(test>arr[n] || test<arr[1])
//		printf("-1");
//		else if(test>arr[n/2])
//		{
//			if(test>arr[n/4])
//		}

//	while(scanf("%d", &numb)!=EOF)
//	{
//		if(numb<=10000 && arr[numb]!=0)
//			printf("%d ", arr[numb]);
//		else
//			printf("-1");
//	}
//	printf("\n");


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	void *p;
//	while(p = malloc(1024*1024*1024))
//	{
//		i++;
//	}
//	printf("分配了%dGB的空间\n", i);
//	return 0;
// 
//}

//#include <stdio.h>
//int main()
//{
//	char a = 0;
//	scanf("%d", &a);
//	printf("%d %lld\n", a, a);
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//int mylen(const char *p);
//int mycmp(const char *p, const char *q);
//
//int main()
//{
//	char s1[]= "FUCK YOU!!!";
//	char s2[]= "FUCK A";
//	printf("mylen=%d\n", mylen(s1));
//	printf("strlen=%d\n", strlen(s1));
//	printf("mycmp=%d\n", mycmp(s1,s2));
//	printf("strcmp=%d\n", strcmp(s1,s2));
////	printf("%p\n", s1);
////	printf("%p\n", s2);
//	return 0;
//}
//int mylen(const char *p)
//{
//	int cut = 0;
//	while(p[cut++]!=0)
//	{
//	}
//	return cut-1;
//}
//
//int mycmp(const char *p, const char *q)
//{
//	int cut = 0;
//	while(p[cut]==q[cut])
//	{
//		cut++;
//	}
//	return p[cut]-q[cut];
//}



//#include <stdio.h>
//int max(int a, int b);
//
//int arr[100000001]={0};
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int length;
//	int i = 1;
//	while(scanf("%d", &length)!=EOF)
//	{
//		for(int z = 0; z<length; z++)
//			{int test;
//				scanf("%d", &test);
//				if(i == 1)
//				{
//					arr[1]=test;
//					i++;
//				}
//				else if(test > arr[i-1] && length != test)
//				{
//					i++;	
//				}
//				else if(test<arr[i-1])
//				{
//					printf("NO");
//					for(int k = 0; k < length-i;z++)
//					{
//						scanf("%d", &test);
//					}
//					continue;
//				}
//				if(i == length && test>arr[i-1])
//				{
//					printf("YES");
//					break;
//				}
//		
//	}
//	
//	return 0;
//}
//}
//int max(int a, int b)
//{
//	int t;
//	if(a<b)
//	{
//		return b;
//	}
//	else return a;
//}










//while(scanf("%d %d %d", &a, &b, &c)!=EOF)
//	{
//		int numb =max(max(a, b),c);
//		if(2*numb==a+b+c)
//		printf("YES\n");
//		else
//		printf("NO\n");
//	}
//	return 0;








//
//
//#include <stdio.h>
//int main()
//{
//	long long a, b, c;
//	scanf("%lld %lld %lld", &a, &b,&c);
//	long long s1 = a*a;
//	long long s2 = b*c;
//	if (s1>s2)
//	printf("Alice");
//	else
//	printf("Bob");
//	return 0;
//}



//#include <stdio.h>
//int arr[101]={0};
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int yes = 0, no = 0;
//	for(int i = 0; i< n;i++)
//	{
//		yes = 0;
//		no = 0;
//		int empty,  count =0;
//		scanf("%d", &empty);
//		for(int z = 0 ; z < empty; z++)
//		{
//			int numb;
//			scanf("%d", &numb);
//			if(numb == 1)
//			yes++;
//			else
//			no++;
//		}
//		if(yes>no && no %2 == 0)
//		printf("0\n");
//		else if(yes>no && no %2 != 0)
//		printf("1\n");
//		else if(yes==no && no %2 == 0)
//		printf("0\n");
//		else if(yes==no && no %2 != 0)
//		printf("1\n");
//		else if(yes<no && no %2 == 0)
//		{
//			if(no - yes %2 != 0)
//			printf("%d\n", count+((no-yes)/2)+1);
//			else
//			printf("%d\n", count+((no-yes)/2));
//			
//		}
//		else if(yes<no && no %2 != 0)
//		{
//			count =0;
//			count++;
//			yes +=1;
//			no -=1;
//			if(yes>no)
//			printf("1\n");
//			else if(yes == no)
//			printf("%d\n", count);
//			else if(empty%2==0)
//			printf("%d\n", count+(no-empty/2));
//			else
//			printf("%d\n", count+(no-empty/2)+1);
//			
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char str[]= "FUCK";
//	char *p = (char*)malloc(strlen(str)+100);
//	printf("%s",strcpy(p, str));
////	while(*p!='\0')
////	{
////		printf("%c", *p);
////		p++;
////	}
//	free(p-strlen(str));
//	return 0;
//}






//char* mycpy(char *p,char *q)
//{
//
//}


//#include <stdio.h>
//char str[1000002]="Hello ";
//
//int main()
//{
//	char *str1="World!";
//	strncat(str, str1, 3);
//	printf("%s", str);
//	return 0;
//}


//
//int i, j;
//int sum(int a, int b);



//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(void)
//{
//	char p[] = "FUCK YOU SHIT MAN";
//	char *q = strchr(p, 'H');
//	char t = *q;
//	*q = '\0';
//	char *m = (char *)malloc(strlen(p)+1);
//	printf("%s\n", strcpy(m,p));
//	*q = t;
//	printf("%s\n", p);
//	free(m);
//	return 0;
//}











//	char p[] = "FUCK YOU SHIT MAN";
//	char *s1 = strchr(p, 'S');
//	int c = *s1;
//	*s1 = 0;
//	printf("%s", p);
//	*s1 = c;
//	return 0;





//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(void)
//{
//	int a[100];
//	a[100]={0};
//	return 0;
//}




//char *s1 = strchr(p, 'S');
//	char *t = (char *)malloc(strlen(p)+1);
//	printf("%s", strcpy(t,s1));



//#include <stdio.h>
//int main()
//{
//	char a;
//	scanf("%d", &a);
//	printf("%c", a);
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//char str[62][5];
//int main()
//{
//	int n, z = 0;
//	scanf("%d", &n);
//	for(int i =1; i<=n; i++)
//	{
//		scanf("\n%c%c", &str[i][1], &str[i][2]);
//		if(z ==1)
//		{
//			continue;
//		}
//		if(str[i][1]!='H'&& str[i][1]!='D'&& str[i][1]!='C'&&str[i][1]!='S'&& str[i][2] != 'A'&&str[i][2] != '2'&&str[i][2] != '3'&&str[i][2] != '4'&&str[i][2] != '5'&&str[i][2] != '6'&&str[i][2] != '7'&&str[i][2] != '8'&&str[i][2] != '9'&&str[i][2] != 'T'&&str[i][2] != 'J'&&str[i][2] != 'Q'&&str[i][2] != 'K')
//			{
//				z = 1;	
//			}
//		else
//		{
//			for(int m= 1; m<i; m++)
//			{
//				if(str[i][1]==str[m][1] && str[i][2]==str[m][2])
//				{
//						z = 1;
//				}
//			}
//		}
//	}
//	if(z == 1)
//	printf("No");
//	else
//	printf("Yes");
//	return 0;
//}




//#include<stdio.h>
//int n;
//char* a[55];
//int main(){
//    scanf("%d", &n);
//    for(int i=1;i<=n;i++){
//        scanf("%d", &a[i]);
//        if(a[i][0]!='H'&&a[i][0]!='D'&&a[i][0]!='C'&&a[i][0]!='S'){
//            printf("NO");
//            return 0;
//        }
//        if(a[i][1]!='A'&&a[i][1]!='2'&&a[i][1]!='3'&&a[i][1]!='4'&&a[i][1]!='5'&&a[i][1]!='6'&&a[i][1]!='7'&&a[i][1]!='8'&&a[i][1]!='9'&&a[i][1]!='T'&&a[i][1]!='J'&&a[i][1]!='Q'&&a[i][1]!='K'){
//            printf("NO");
//            return 0;
//        }
//        for(int j=i-1;j>=1;j--){
//            if(a[j]==a[i]){
//                printf("NO");
//                return 0;
//            }
//        }
//    }
// 	printf("YES");
//    return 0;
//}

//#include <stdio.h>
//int n,x;
//int a[105];
//int main()
//{
//	scanf("%d %d", &n, &x);
//    for(int i=1;i<=n;i++) 
//	scanf("%d", &a[i]);
//    for(int i=1;i<=n;i++){
//    	if(a[i]==x){
//    		printf("%d", i);
//    		return 0;
//		}
//	}
//}






//#include <stdio.h>
//#include <string.h>
// 
//int main()
//{
//	int n, r = 1;
//	scanf("%d", &n);
//	char s[n][3];
// 
//	for (int i = 0; i < n; i++) 
//	{
//		scanf("%s", s[i]);
//		if (!strchr("HDCS", s[i][0]))
//			r = 0;
//		else if (!strchr("A23456789TJQK", s[i][1]))
//			r = 0;
//	}
//	for (int i = 0; i < n - 1; i++)
//		for (int j = i + 1; j < n; j++)
//			if (strstr(s[i], s[j]))
//				r = 0;
// 
//	printf(r ? "Yes" : "No");
//}


//#include <stdio.h>
//int brr[1010];
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	int count = 1;
//	for(int z =1 ;z<1667;z++)
//	{
//		
//		if(z%3!=0 && z%10!=3)
//		brr[count++]=z;
//	}
//	int test = 0;
//	for(int i =1; i<n+1;i++)
//	{
//		scanf("%d",&test);
//		printf("%d\n", brr[test]);
//	}
//	
//	
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	double z = 5.0;
//	double b = a/3;
//	double c = z/3;
//	printf("double_b %f\ndouble_c %f", b, c);
//	printf("%f\n", 19.9 * 100);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n,m;
//	scanf("%d %d",&n,&m);
//	int i;
//	int sum=0;//总和；
//	int g=0;//个数 
//	int isprime=1;
//	 for (i=n;i<=m;i++){
//	 	isprime=1;
//	    int j;
//		for (j=2;j<i;j++){
//	    	if(i%j==0){
//	    		isprime=0;
//				break;
//	    		}
//				}
//	if(isprime==1){
//		sum +=i; 
//	    g++;
//	    printf("%d %d\n",g,sum);
//	 	}	
//	
//	 	
//	 }
//	 printf("%d %d",g,sum);
//	 return 0;
//	 
// } 


//#include <stdio.h>
//struct time{
//	int hour;
//	int minute;
//	int secord;
//};
//struct t{
//	int year;
//	int month;
//	int day;
//	struct time;
//};
//int main()
//{
//	struct time time1;
//	time1={}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int time;
//	scanf("%d", &time);
//	int place = 0, apple = 0;
//	scanf("%d %d", &apple, &place);
//	
//	return 0;
//}


//#include <stdio.h>
//enum day{
//	Mon= 1,Fri=2, test = 3
//};
//int main()
//{
//	enum day a = Mon;
//	for(;a<4; a++)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}


//#include <stdio.h>
//typedef long long ll;
//int main()
//{
//	ll a = 5;
//	printf("%d", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	struct sample1{
//		int a;
//		int b;
//		int c;
//	};
//	struct sample2{
//		int d;
//		int e;
//		struct sample1;
//	};
//	struct sample1 s;
//	s = {1,2,};
//	printf("%d %d %d", s.a, s.b, s.c);
//	return 0;
//}



#include <stdio.h>
//struct test{
//	int a;
//	int b;
//	double c;
//};
//int main()
//{
//	struct test a{.a=1, .c=2};
//	printf("%d %d %f", a.a,a.b,a.c);
//	return 0;
//}
//typedef char STRINGS[10];
//int main()
//{
//	STRINGS a={15};
//	printf("%d", STRINGS[10]);
//	return 0;
//}

//#include <stdio.h>
//int judge(int *a);
//int main()
//{
//	int a[100]={0,1,4,6,6,9,12,12,7,845};
//	printf("%d", judge(a));
//	return 0;
//}
//
//
//int judge(int *a)
//{
//	int l=1,r=9;
//	int mid;
//	while(l<=r)
//	{
//		mid = (l+r)/2;
//		if(a[mid]>=4)
//		r = mid -1;
//		else
//		l=mid+1;
//	}
//return mid;
//}


//#include<stdio.h>
//int a[1000010], n, m, test;
//int find (int t)
//{
//	int l=1,r=n;
//	int mid;
//	while(l<=r)
//	{
//		mid=(l+r)/2;
//		if(a[mid]>=t)
//		r=mid-1;
//		else
//		l=mid+1;
//	}
//	
//	if(a[r+1]==t)
//	return r+1;
//	else
//	return -1;
//}
//int main()
//{
//	scanf("%d %d", &n, &m);
//	for(int i = 1;i<=n;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for(int i = 0;i<m;i++)
//	{
//		scanf("%d", &test);
//		int ans = find(test);
//		printf("%d ",ans);
//	}
//	return 0;
//}


//#include <stdio.h>
//int n,c,a[200010];
//int main()
//{
//	scanf("%d %d", &n, &c);
//	for(int m = 1, m <=n;m++)
//	scanf("%d", &a[m]);
//	
//	return 0;
//}



//#include <stdio.h>
//int ans (void);
//int a =0;
//int main()
//{
//	printf("%d %d %d\n", ans(),ans(),ans());
//	return 0;
//}
//int ans (void)
//{
//	a+=1;
//	return a;
//}

//#include <stdio.h>	
//int isPrime=0,begin=0,end=0,x,y,n;
//int main()
//{
//	scanf("%d", &n);
//	for(int i = 1; i<=n*n; i++)
//	{
//		int test;
//		scanf("%d", &test);
//		if(test==0&&isPrime==0)
//		{
//			isPrime=1;
//			begin=i;
//			continue;
//		}
//		if(test==0&&isPrime==1)
//		{
//			end=i;
//		}
//	}
//	x=(end-begin)%n,y=(end-begin)/n;
//	printf("%d",(x-1)*(y-1));
//	return 0;
//}


//#include <stdio.h>
//const int N=110;
//int n,s,c,a[N][N]={0};
//int main()
//{
//	scanf("%d", &n);
//	for(int i=1; i<=n; i++)
//		for(int j=1; j<=n;j++)
//			scanf("%d", &a[i][j]);
//	for(int i=1; i<=n; i++)
//		for(int j=1; j<=n;j++)
//			if(a[i][j]<=50)
//			{
//				s++;
//				if(i==1||i==n||j==1||j==n)c++;
//				else if(a[i-1][j]>50||a[i][j-1]>50||a[i+1][j]>50||a[i][j+1]>50)c++;
//			}
//	printf("%d %d",s,c);
//}

//#include <stdio.h>
//int n,sum=1;
//int main()
//{
//	scanf("%d", &n);
//	for(int i=1;i<=n;i++)sum*=i;
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//const int M=60;
//int scan[M][M]={0},mes[M][M]={0},room[2510]={0};//scan保存读取内容
//int m,n,rct=1,space,num;//mes保存每个方块的房间号
//int main()//room保存每个房间的方块个数
//{
//	scanf("%d\n%d",&n,&m);
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			scanf("%d", &scan[i][j]);
//			if((scan[i][j]%8)/4!=1)
//			{
//				mes[i][j]=rct;
//				room[rct]++;
//			}
//			else
//			{
//				mes[i][j]=rct;
//				room[rct]++;
//				rct++;
//			}
//		}
//	}
//	for(int j=1;j<=m;j++)
//	{
//		for(int i=1;i<=n;i++)
//		{
//			if(scan[i][j]/8!=1)
//			{
//				room[mes[i][j]]+=room[mes[i+1][j]];
//				room[mes[i+1][j]]=0;		
//				int test=mes[i+1][j];
//				for(int reti=1;reti<=n;reti++)
//				{
//					for(int retj=1;retj<=m;retj++)
//					{
//						if(mes[reti][retj]==test)
//						mes[reti][retj]=mes[i][j];
//					}
//				}
//			}
//		}
//	}
//
//	
//	for(int cnt=1;cnt<=rct;cnt++)
//	{
//		if(room[cnt]!=0)
//		{
//			num++;
//			if(room[cnt]>space)space=room[cnt];
//		}
//	}
//	printf("%d\n%d",num,space);
//	return 0;
//}








//#include <stdio.h>
//const int M=60;
//int scan[M][M]={0},mes[M][M]={0},room[2510]={0};//scan保存读取内容
//int m,n,rct=1,space,num;//mes保存每个方块的房间号
//int main()//room保存每个房间的方块个数
//{
//	scanf("%d\n%d",&n,&m);
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			scanf("%d", &scan[i][j]);
//			if((scan[i][j]%8)/4!=1)
//			{
//				mes[i][j]=rct;
//				room[rct]++;
//			}
//			else
//			{
//				mes[i][j]=rct;
//				room[rct]++;
//				rct++;
//			}
//		}
//	}
//	for(int j=1;j<=m;j++)
//	{
//		for(int i=1;i<=n;i++)
//		{
//			if(scan[i][j]/8!=1)
//			{
//				room[mes[i][j]]+=room[mes[i+1][j]];
//				room[mes[i+1][j]]=0;
//				for(int reti=1;reti<=n;reti++)
//				{
//					for(int retj=1;retj<=m;retj++)
//					{
//						int test=mes[i+1][j];
//						if(mes[reti][retj]==test)
//						mes[reti][retj]=mes[i][j];
//					}
//				}
//			}
//		}
//	}
//	for(int cnt=1;cnt<=rct;cnt++)
//	{
//		if(room[cnt]!=0)
//		{
//			num++;
//			if(room[cnt]>space)space=room[cnt];
//		}
//	}
//	printf("%d\n%d",num,space);
//	return 0;
//}



//#include <stdio.h>
//#define MAX 50 //定义最大方块数
//
////定义方块结构体，包含墙的信息和房间编号
//typedef struct {
//    int wall; //墙的数字之和
//    int room; //房间编号
//} Block;
//
////定义全局变量
//int m, n; //南北向和东西向的方块数
//Block castle[MAX][MAX]; //城堡的二维数组
//int room_count = 0; //房间数
//int room_size[MAX * MAX]; //每个房间的大小
//int max_size = 0; //最大房间的大小
//
////定义函数原型
//void input(); //输入函数
//void output(); //输出函数
//void dfs(int x, int y); //深度优先搜索函数
//
////主函数
//int main() {
//    input(); //输入城堡数据
//    for (int i = 0; i < m; i++) { //遍历每个方块
//        for (int j = 0; j < n; j++) {
//            if (castle[i][j].room == 0) { //如果该方块没有被访问过
//                room_count++; //增加房间数
//                dfs(i, j); //从该方块开始深度优先搜索
//                if (room_size[room_count] > max_size) { //更新最大房间的大小
//                    max_size = room_size[room_count];
//                }
//            }
//        }
//    }
//    output(); //输出结果
//    return 0;
//}
//
////输入函数，从标准输入读取城堡数据
//void input() {
//    scanf("%d%d", &m, &n); //输入南北向和东西向的方块数
//    for (int i = 0; i < m; i++) { //输入每个方块的墙的信息
//        for (int j = 0; j < n; j++) {
//            scanf("%d", &castle[i][j].wall);
//            castle[i][j].room = 0; //初始化房间编号为0，表示未访问过
//        }
//    }
//}
//
////输出函数，输出房间数和最大房间的大小
//void output() {
//    printf("%d\n", room_count); //输出房间数
//    printf("%d\n", max_size); //输出最大房间的大小
//}
//
////深度优先搜索函数，从(x, y)开始搜索相邻的方块，标记房间编号并更新房间大小
//void dfs(int x, int y) {
//    castle[x][y].room = room_count; //标记当前方块的房间编号为当前房间数
//    room_size[room_count]++; //增加当前房间的大小
//    int wall = castle[x][y].wall; //获取当前方块的墙的信息
//    if ((wall & 1) == 0 && y > 0 && castle[x][y - 1].room == 0) { //如果当前方块没有西墙，且左边有方块，且左边的方块没有被访问过
//        dfs(x, y - 1); //向左搜索
//    }
//    if ((wall & 2) == 0 && x > 0 && castle[x - 1][y].room == 0) { //如果当前方块没有北墙，且上面有方块，且上面的方块没有被访问过
//        dfs(x - 1, y); //向上搜索
//    }
//    if ((wall & 4) == 0 && y < n - 1 && castle[x][y + 1].room == 0) { //如果当前方块没有东墙，且右边有方块，且右边的方块没有被访问过
//        dfs(x, y + 1); //向右搜索
//    }
//    if ((wall & 8) == 0 && x < m - 1 && castle[x + 1][y].room == 0) { //如果当前方块没有南墙，且下面有方块，且下面的方块没有被访问过
//        dfs(x + 1, y); //向下搜索
//    }
//}


//	#include <stdio.h>
//	int find(int x);
//	int a[5000]={0,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117,1123,1129,1151,1153,1163,1171,1181,1187,1193,1201,1213,1217,1223,1229,1231,1237,1249,1259,1277,1279,1283,1289,1291,1297,1301,1303,1307,1319,1321,1327,1361,1367,1373,1381,1399,1409,1423,1427,1429,1433,1439,1447,1451,1453,1459,1471,1481,1483,1487,1489,1493,1499,1511,1523,1531,1543,1549,1553,1559,1567,1571,1579,1583,1597,1601,1607,1609,1613,1619,1621,1627,1637,1657,1663,1667,1669,1693,1697,1699,1709,1721,1723,1733,1741,1747,1753,1759,1777,1783,1787,1789,1801,1811,1823,1831,1847,1861,1867,1871,1873,1877,1879,1889,1901,1907,1913,1931,1933,1949,1951,1973,1979,1987,1993,1997,1999,2003,2011,2017,2027,2029,2039,2053,2063,2069,2081,2083,2087,2089,2099,2111,2113,2129,2131,2137,2141,2143,2153,2161,2179,2203,2207,2213,2221,2237,2239,2243,2251,2267,2269,2273,2281,2287,2293,2297,2309,2311,2333,2339,2341,2347,2351,2357,2371,2377,2381,2383,2389,2393,2399,2411,2417,2423,2437,2441,2447,2459,2467,2473,2477,2503,2521,2531,2539,2543,2549,2551,2557,2579,2591,2593,2609,2617,2621,2633,2647,2657,2659,2663,2671,2677,2683,2687,2689,2693,2699,2707,2711,2713,2719,2729,2731,2741,2749,2753,2767,2777,2789,2791,2797,2801,2803,2819,2833,2837,2843,2851,2857,2861,2879,2887,2897,2903,2909,2917,2927,2939,2953,2957,2963,2969,2971,2999,3001,3011,3019,3023,3037,3041,3049,3061,3067,3079,3083,3089,3109,3119,3121,3137,3163,3167,3169,3181,3187,3191,3203,3209,3217,3221,3229,3251,3253,3257,3259,3271,3299,3301,3307,3313,3319,3323,3329,3331,3343,3347,3359,3361,3371,3373,3389,3391,3407,3413,3433,3449,3457,3461,3463,3467,3469,3491,3499,3511,3517,3527,3529,3533,3539,3541,3547,3557,3559,3571,3581,3583,3593,3607,3613,3617,3623,3631,3637,3643,3659,3671,3673,3677,3691,3697,3701,3709,3719,3727,3733,3739,3761,3767,3769,3779,3793,3797,3803,3821,3823,3833,3847,3851,3853,3863,3877,3881,3889,3907,3911,3917,3919,3923,3929,3931,3943,3947,3967,3989,4001,4003,4007,4013,4019,4021,4027,4049,4051,4057,4073,4079,4091,4093,4099,4111,4127,4129,4133,4139,4153,4157,4159,4177,4201,4211,4217,4219,4229,4231,4241,4243,4253,4259,4261,4271,4273,4283,4289,4297,4327,4337,4339,4349,4357,4363,4373,4391,4397,4409,4421,4423,4441,4447,4451,4457,4463,4481,4483,4493,4507,4513,4517,4519,4523,4547,4549,4561,4567,4583,4591,4597,4603,4621,4637,4639,4643,4649,4651,4657,4663,4673,4679,4691,4703,4721,4723,4729,4733,4751,4759,4783,4787,4789,4793,4799,4801,4813,4817,4831,4861,4871,4877,4889,4903,4909,4919,4931,4933,4937,4943,4951,4957,4967,4969,4973,4987,4993,4999,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117,1123,1129,1151,1153,1163,1171,1181,1187,1193,1201,1213,1217,1223,1229,1231,1237,1249,1259,1277,1279,1283,1289,1291,1297,1301,1303,1307,1319,1321,1327,1361,1367,1373,1381,1399,1409,1423,1427,1429,1433,1439,1447,1451,1453,1459,1471,1481,1483,1487,1489,1493,1499,1511,1523,1531,1543,1549,1553,1559,1567,1571,1579,1583,1597,1601,1607,1609,1613,1619,1621,1627,1637,1657,1663,1667,1669,1693,1697,1699,1709,1721,1723,1733,1741,1747,1753,1759,1777,1783,1787,1789,1801,1811,1823,1831,1847,1861,1867,1871,1873,1877,1879,1889,1901,1907,1913,1931,1933,1949,1951,1973,1979,1987,1993,1997,1999,2003,2011,2017,2027,2029,2039,2053,2063,2069,2081,2083,2087,2089,2099,2111,2113,2129,2131,2137,2141,2143,2153,2161,2179,2203,2207,2213,2221,2237,2239,2243,2251,2267,2269,2273,2281,2287,2293,2297,2309,2311,2333,2339,2341,2347,2351,2357,2371,2377,2381,2383,2389,2393,2399,2411,2417,2423,2437,2441,2447,2459,2467,2473,2477,2503,2521,2531,2539,2543,2549,2551,2557,2579,2591,2593,2609,2617,2621,2633,2647,2657,2659,2663,2671,2677,2683,2687,2689,2693,2699,2707,2711,2713,2719,2729,2731,2741,2749,2753,2767,2777,2789,2791,2797,2801,2803,2819,2833,2837,2843,2851,2857,2861,2879,2887,2897,2903,2909,2917,2927,2939,2953,2957,2963,2969,2971,2999,3001,3011,3019,3023,3037,3041,3049,3061,3067,3079,3083,3089,3109,3119,3121,3137,3163,3167,3169,3181,3187,3191,3203,3209,3217,3221,3229,3251,3253,3257,3259,3271,3299,3301,3307,3313,3319,3323,3329,3331,3343,3347,3359,3361,3371,3373,3389,3391,3407,3413,3433,3449,3457,3461,3463,3467,3469,3491,3499,3511,3517,3527,3529,3533,3539,3541,3547,3557,3559,3571,3581,3583,3593,3607,3613,3617,3623,3631,3637,3643,3659,3671,3673,3677,3691,3697,3701,3709,3719,3727,3733,3739,3761,3767,3769,3779,3793,3797,3803,3821,3823,3833,3847,3851,3853,3863,3877,3881,3889,3907,3911,3917,3919,3923,3929,3931,3943,3947,3967,3989,4001,4003,4007,4013,4019,4021,4027,4049,4051,4057,4073,4079,4091,4093,4099,4111,4127,4129,4133,4139,4153,4157,4159,4177,4201,4211,4217,4219,4229,4231,4241,4243,4253,4259,4261,4271,4273,4283,4289,4297,4327,4337,4339,4349,4357,4363,4373,4391,4397,4409,4421,4423,4441,4447,4451,4457,4463,4481,4483,4493,4507,4513,4517,4519,4523,4547,4549,4561,4567,4583,4591,4597,4603,4621,4637,4639,4643,4649,4651,4657,4663,4673,4679,4691,4703,4721,4723,4729,4733,4751,4759,4783,4787,4789,4793,4799,4801,4813,4817,4831,4861,4871,4877,4889,4903,4909,4919,4931,4933,4937,4943,4951,4957,4967,4969,4973,4987,4993,4999,5003,5009,5011,5021,5023,5039,5051,5059,5077,5081,5087,5099,5101,5107,5113,5119,5147,5153,5167,5171,5179,5189,5197,5209,5227,5231,5233,5237,5261,5273,5279,5281,5297,5303,5309,5323,5333,5347,5351,5381,5387,5393,5399,5407,5413,5417,5419,5431,5437,5441,5443,5449,5471,5477,5479,5483,5501,5503,5507,5519,5521,5527,5531,5557,5563,5569,5573,5581,5591,5623,5639,5641,5647,5651,5653,5657,5659,5669,5683,5689,5693,5701,5711,5717,5737,5741,5743,5749,5779,5783,5791,5801,5807,5813,5821,5827,5839,5843,5849,5851,5857,5861,5867,5869,5879,5881,5897,5903,5923,5927,5939,5953,5981,5987,6007,6011,6029,6037,6043,6047,6053,6067,6073,6079,6089,6091,6101,6113,6121,6131,6133,6143,6151,6163,6173,6197,6199,6203,6211,6217,6221,6229,6247,6257,6263,6269,6271,6277,6287,6299,6301,6311,6317,6323,6329,6337,6343,6353,6359,6361,6367,6373,6379,6389,6397,6421,6427,6449,6451,6469,6473,6481,6491,6521,6529,6547,6551,6553,6563,6569,6571,6577,6581,6599,6607,6619,6637,6653,6659,6661,6673,6679,6689,6691,6701,6703,6709,6719,6733,6737,6761,6763,6779,6781,6791,6793,6803,6823,6827,6829,6833,6841,6857,6863,6869,6871,6883,6899,6907,6911,6917,6947,6949,6959,6961,6967,6971,6977,6983,6991,6997,7001,7013,7019,7027,7039,7043,7057,7069,7079,7103,7109,7121,7127,7129,7151,7159,7177,7187,7193,7207,7211,7213,7219,7229,7237,7243,7247,7253,7283,7297,7307,7309,7321,7331,7333,7349,7351,7369,7393,7411,7417,7433,7451,7457,7459,7477,7481,7487,7489,7499,7507,7517,7523,7529,7537,7541,7547,7549,7559,7561,7573,7577,7583,7589,7591,7603,7607,7621,7639,7643,7649,7669,7673,7681,7687,7691,7699,7703,7717,7723,7727,7741,7753,7757,7759,7789,7793,7817,7823,7829,7841,7853,7867,7873,7877,7879,7883,7901,7907,7919,7927,7933,7937,7949,7951,7963,7993,8009,8011,8017,8039,8053,8059,8069,8081,8087,8089,8093,8101,8111,8117,8123,8147,8161,8167,8171,8179,8191,8209,8219,8221,8231,8233,8237,8243,8263,8269,8273,8287,8291,8293,8297,8311,8317,8329,8353,8363,8369,8377,8387,8389,8419,8423,8429,8431,8443,8447,8461,8467,8501,8513,8521,8527,8537,8539,8543,8563,8573,8581,8597,8599,8609,8623,8627,8629,8641,8647,8663,8669,8677,8681,8689,8693,8699,8707,8713,8719,8731,8737,8741,8747,8753,8761,8779,8783,8803,8807,8819,8821,8831,8837,8839,8849,8861,8863,8867,8887,8893,8923,8929,8933,8941,8951,8963,8969,8971,8999,9001,9007,9011,9013,9029,9041,9043,9049,9059,9067,9091,9103,9109,9127,9133,9137,9151,9157,9161,9173,9181,9187,9199,9203,9209,9221,9227,9239,9241,9257,9277,9281,9283,9293,9311,9319,9323,9337,9341,9343,9349,9371,9377,9391,9397,9403,9413,9419,9421,9431,9433,9437,9439,9461,9463,9467,9473,9479,9491,9497,9511,9521,9533,9539,9547,9551,9587,9601,9613,9619,9623,9629,9631,9643,9649,9661,9677,9679,9689,9697,9719,9721,9733,9739,9743,9749,9767,9769,9781,9787,9791,9803,9811,9817,9829,9833,9839,9851,9857,9859,9871,9883,9887,9901,9907,9923,9929,9931,9941,9949,9967,9973,};
//	int main()
//	{
//		int n,end=0;
//		scanf("%d", &n);
//		int num=find(n/2);
//		for(;num>0;num--)
//		{
//			for(int i=1;i<2000;i++)//注意
//			{
//				if(n-a[num]==a[i])
//				{
//					end=a[i];
//					goto a;
//				}
//			}
//		}
//		a:
//			printf("%d",end*a[num]);
//	}
//	int find(int x)
//	{
//		int l=1,r=1229;
//		while(l<=r)
//		{
//			int mid=(l+r)/2;
//			if(a[mid]>=x)
//			r=mid-1;
//			else
//			l=mid+1;
//		}
//		return r+1;
//	}

//#include <stdio.h>
//int count;
//int main()
//{
//	for(int i=2;i<10000;i++)
//	{
//		int judge=1;
//		for(int test=2;test<i;test++)
//		{
//			if(i%test==0)
//			{
//				judge=0;
//				break;
//			}
//		}
//		if(judge==1)
//		{
//			printf("%d,",i);
//			count++;
//		}
//	}
//	printf("\n%d,",count);
//}

