	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	#define MAX	50
	void Nhapn(int &n)
	{ 	
		do {
				printf("moi nhap n :");
				scanf("%d",&n);
				if (n<=0 || n >=50) printf("nhap sai moi nhap lai\n");	
		}while(n<=0 || n >=50);
	}
	void sinhmang(int a[],int n)
	{
		for(int i =0;i<n;i++)
		a[i]=rand()%100;
	}
	void nhapmang(int a[], int n)
	{
		for (int i=0; i<n; i++)
		{
			printf("nhap a[%d] = ",i);
			scanf("%d",&a[i]);
		}
	}
	void xuatmang(int a[], int n)
	{
		for (int i=0; i<n; i++)
		printf("%4d",a[i]);
	}
	int search(int a[] ,int n, int key)
	{
		int i=0;
		while(i<n && a[i]!=key)
			i++;
		if(i<n)
			return i;
		return -1;
	}
	void hoanvi(int &c,int &d)
	{
	int temp=c;
	c=d;
	d=temp;
	}
	
	void sapxeptangdan(int a[],int n)
	{
		int i,j;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
					hoanvi(a[i],a[j]);
			}
		}
	}
	int binarysearch(int a[],int n, int key)
	{
		int left=0,right= n-1 , mid;
		while(left<=right){
			mid = (left +right)/2;
			if (a[mid] == key)
			return mid;
			if (a[mid] < key)
				left = mid+1;
			else
				right = mid -1;
		}
		return -1;
	
	}
	
	void main()
	{
		int n;
		Nhapn(n);
		int a[MAX];
		// nhapmang(a,n);
		sinhmang(a,n);
		printf("mang vua nhap la :");
		xuatmang(a,n);
		printf("\n");
		int key;
		printf("\n moi nhap key can tim=");
		scanf("%d",&key);
		int vt = search(a, n, key);
		if (vt== -1)	printf("\n tim khong thay %d",key);
		else
		{
		printf("\n tim thay %d",key);
		printf("\n tai vi tri %d",vt);
			}
		printf("\n mang sau sap xep :");
		sapxeptangdan(a,n);
		xuatmang(a,n);
		printf("\n moi nhap key can tim=");
		scanf("%d",&key);
		int vt = binarysearch(a,n,key);
		if (vt== -1)	printf("\n tim khong thay %d",key);
		else
		{
				printf("\n tim thay %d",key);
				printf("\n tai vi tri %d",vt);
		}
		
		getch();
	}
	
	
		
