#if 1
/*
	特殊的回文数
	2015年3月15日00:14:36
*/
#include <iostream>  
#include <cstring>  
using namespace std;  
int main()  
{  
	int n;  
	int a[100];  
	cin>>n;  
	for(int i=10000;i<1000000;i++)  
	{  
		int h=i;   
		memset(a,0,sizeof(a));  
		int j=0;  
		int ans=0;  
		while(h)  
		{  
			a[j]=h%10;  
			h/=10;  
			ans+=a[j];  
			j++;  
		}  
		bool t=true;  
		for(int k=0;k<=j/2;k++)  
		{  
			if(a[k]!=a[j-1-k])  
				t=false;  
		}  
		if(t==true&&ans==n)  
			cout<<i<<endl;  
	}  
	return 0;  
}  
#endif
/*
	特殊的回文数
	2015年3月14日23:22:16
*/
#if 1
#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
	int i;
	int x;
	int n ;
	int m ;
	int sum;
	int temp;
	cin >> x;
	for (i = 10000; i <= 999999; i++)
	{	
		temp = i; //将第i个数给temp变量
		sum = 0; //注意每次循环前要把标记变量归零！
		m = 0;
		n = 0;
		while (temp != 0){
			n += temp % 10; //不断累加求出数字逆过来后的情况 
			m = temp % 10; //先求出每次循环数字个位 一般情况下数字MOD 10 就是求得个位数字
			sum += m;		//累加求得各个位的数字和 以便后面比较
			temp /= 10; //在求得数字除个位后前几位 此处作用：一是为下一次while求得原数字的十位 
						//百位准备,二是判断数字的长度
			n *= 10;	//配合while循环第一步 累加求原数字的和
		}
		if (n / 10 == i && sum == x){
			cout << i << "\n";
		}
	}
	return 0;
}
#endif
#if 0
#include "stdio.h"
#include "conio.h"
int main()
{ 
	long a, n = 0, temp;
	printf("please input a integer number\n"); 
	scanf("%ld", &a);
	temp = a;
	while (a != 0)  //判断回文数的核心部分
	{
		n += a % 10; //先求出个位数字 一般情况下数字MOD 10 就是求得个位数字
		a /= 10;	//在求得数字除个位后前几位 此处作用：一是为下一次while求得原数字的十位 
					//百位准备,二是判断数字的长度
		n *= 10; 
	}  
	printf("%ld\n", n / 10); 
	if (temp == n / 10) 
		printf("it is turn number"); 
	else 
		printf("it is not turn number");  
	//getch();
	return 0;
}
#endif
#if 0
/*
	求前n项和 1<=n<=1000000000
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	cout << (1 + n)*n / 2 << "\n";
	return 0;
}
#endif
#if 0
/*
	求圆的面积
*/
#include <iostream>
#include <cmath>
#include <cstdio>
#define PI atan(1.0)*4
using namespace std;
int main()
{
	int r;
	cin >> r;
	printf("%.7f", PI*r*r);
	return 0;

}
#endif
#if 0
/*
2015年3月14日2015年3月14日14:14:59
Fibonacci 数列求余数
*/
#include <iostream>
#include <cstdio>
#define MOD 10007
#define MAX 1000000
using namespace std;
int arr[MAX];
int main()
{
	int n;
	cin >> n;
	arr[1] = arr[2] = 1;
	if (n == 1 || n == 2)
		cout << 1 << "\n";
	else{
		for (int i = 3; i <= n;i++)
		arr[i] = (arr[i - 1] + arr[i - 2]) % MOD;
		cout << arr[n] << "\n";
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
#define N 70

void f(char a[][N], int rank, int row, int col)
{
	if(rank==1){
		a[row][col] = '*';
		return;
	}

	int w = 1;
	int i;
	for(i=0; i<rank-1; i++) w *= 2;
	printf("Obje");
	//____________________________________________;
	f(a, rank-1, row+w/2, col);
	f(a, rank-1, row+w/2, col+w);
}

int main()
{
	char a[N][N];
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++) a[i][j] = ' ';

	f(a,6,0,0);

	for(i=0; i<N; i++){
		for(j=0; j<N; j++) printf("%c",a[i][j]);
		printf("\n");
	}

	return 0;
}


#endif
#if 0
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <sstream>

#define N 10000000
int arr[N];
using namespace std;

vector <string> s;
int main()
{
	int n;
	string buf;
	int x;
	int sum = 0;
	while (scanf("%d", &n) == 1 && n){
		getchar();
		while (getline(cin, buf)){
			stringstream ss(buf);
			while (ss >> x){
				sum += x;
			}
			if (sum == 0)
				break;
			sum = 0;
		}

	}
	return 0;
}
#endif
/*
2015年3月12日20:48:44保存
功能：map的使用 count()函数 find函数
*/
#if 0
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
map<string, int> cnt;
vector<string> words;
string repr(const string& s) //该函数的功能是实现传入字符串字母小写并且将每个字符串的字母从小到大排序
{
	string ans = s;
	for (int i = 0; i < ans.length(); i++)
	{
		ans[i] = tolower(ans[i]);
	}
	sort(ans.begin(), ans.end());
	return ans;
}
int main()
{
	int n;
	string s;
	while (cin >> s){
		if (s[0] == '#') //如果字符串第一个字母是# 就停止输入
			break;
		words.push_back(s);//将字符串加到words中（words为vector<string>类型）
		string r = repr(s); //将单词进行排序
		if (!cnt.count(r)){ //查找map中是否有key是r 有就返回1 否则返回0
			cnt[r] = 0;
		}
		cnt[r] ++;
	}
	vector <string> ans;

	for (int i = 0; i < words.size(); i++)
	{
		if (cnt[repr(words[i])] == 1)
			ans.push_back(words[i]);

	}
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << "\n";
	}
	return 0;
}
#endif
#if 0
/*
2015年3月9日20:53:57保存
getline()函数用法
*/
#include <iostream>
#include <string>
#include <set>
#include <sstream>

using namespace std;
int main()
{
	string s;
	while (getline(cin, s,'#')){
		int sum = 0, x;
		stringstream ss(s);
		int count = 0;
		while (ss >> x)
		{
			sum += x;
			count ++;
		}
		cout << sum << "\n";
		cout << count << "\n";
	}
	return 0;
}
#endif
#if 0
/*
2015年3月9日20:53:09保存
dict用法

*/
#include <iostream>
#include <string>
#include <set>
#include <sstream>

using namespace std;


set <string> dict;

int main()
{
	string s, buf;
	int i;
	int k;
	for (k = 0; k < 9; k++){

		cin >> s;

		cout << s.length() << "\n";
		for (i = 0; i < s.length(); i++)
		{
			if (isalpha(s[i]))
				s[i] = tolower(s[i]);
			else
				s[i] = ' ';

		}

		stringstream ss(s);
		while (ss >> buf)
			dict.insert(buf);
		//cout << buf << "\n";
	}
	
 	set<string>::iterator it;
	int m = 0;
	for (it = dict.begin(); it != dict.end(); it++){
		cout << *it << "\n";
		//m++;
		//cout << m << "\n";
	}
	//cout << *(++dict.begin()) << "\n";
		//cout << s.length() << endl;
	return 0;
}
#endif
