if (a > b)
{

for (int i = b; i <= a; i++)
{
	if (i % c == 0)
		continue;
	sum += i;
}
printf("%d부터 %d까지의 합(%d 배수 제외) : %d\n",b,a,c,sum);

}
else
{
	
for (int i = a; i <= b; i++)
{
	if (i % c == 0)
		continue;
	sum += i;
}
printf("%d부터 %d까지의 합(%d 배수 제외) : %d\n",a,b,c,sum);

}
