
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//
//
//
//
//int main(){
//	int max=0,n, a[10]; 
//	scanf("%d", &n);
//	
//	
//	scanf("%d",&a[1]);
//	for(int i=2;i<n;i++){
//	
//		scanf("%d",&a[i]);
//		if(a[i]*a[i-1]>max)
//		max=a[i]*a[i-1];}
//	printf("%d",max);
//	return 0;	
//}
//
//

//#include <stdio.h>
//#include<iostream>
//using namespace std;
//
//int main() {
//  int a;
//  cout<< "E:";
//  cin>>a;
//  int *b=&a;
//  cout<<"gt"<<*b <<"dc luu"<< b<< endl;
//  return 1;
// }
// 
//



#include<iostream>
using namespace std;

int main(){
    int m;
    cin >> m;
    int d[m];
    for (int a=0; a<m; a++)
    cin >> d[a];

    for (int a = 0; a<m; a++)
    for (int b = a; b<m; b++){
    for (int c = a; c<=b; c++)
    cout<<d[c]<<" ";
    cout<<"\n";
    }
    return 0;
}













//5.4
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main(){
//    int n,a[10],max=0;
//    scanf("%d",&n);
//    if (n==1)
//    {
//        printf("0");
//        exit(0);
//    }
//    scanf("%d",&a[1]);
//    for (int i=2;i<=n;i++)
//    {
//        scanf("%d",&a[i]);
//        if (a[i]*a[i-1]>max)
//        max=a[i]*a[i-1];
//    }
//    printf("%d",max);
//    return 0;
//}
//
//

























//5.3
//#include <stdio.h>
//#include <math.h>
//
//int main(){
//    int n,x,a[100];
//    scanf("%d",&n);
//    for (int i=1;i<=n;i++)
//    scanf("%d",&a[i]);
//    for (int i=1;i<n;i++)
//      for (int j=i+1;j<n+1;j++)
//      if (a[i]>a[j])
//      {
//          x=a[i];
//          a[i]=a[j];
//          a[j]=x;
//      }
//    for (int i=1;i<=n;i++)
//    printf("%d ",a[i]);
//    return 0;
//}
//
















































//5.2
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//    int n,a[100],dem=0;
//    double tong=0,tbc=0;
//    scanf("%d",&n);
//    for (int i=1;i<=n;i++)
//    {
//        scanf("%d",&a[i]);
//        if(a[i]>0)
//        tong=tong+a[i];
//        if(a[i]<0)
//        {
//            tbc=tbc+a[i];
//            dem++;
//        }
//    }
//    if (tbc==0)
//    printf("Mang khong co so am ");
//    else
//    printf("%.6lf ",tbc/dem);
//    if(tong==0)
//    printf("Mang khong co so duong");
//    else
//    printf("%.6lf",tong);
//    return 0;
//}




































//#include<stdio.h>
//#include<math.h>
//
//void swap(int a, int b){
//	int tmp = a;
//	a=b; 	
//	b=tmp;
//}
//int main (){
//	int a=200, b=600;
//	swap(a,b);
//	printf( "a= %d, b=%d", a,b);
//}
//

//#include<stdio.h>
//#include<math.h>
//
//int main(){
//    
//    int n,i, giai_thua=1;
//    scanf("%d",&n);
//    
//    if (n<0)
//    printf("ERROR");
//    else if (n>8)
//    printf("ERROR");
//    else{
//        for(i=1;i<=n;i++)
//        giai_thua *= i;
//    
//    }
//    
//    return 0;
//}
    









//int main (){
//	long P=1;
//	int i,n;
//	printf("nhap so n: "); scanf("%d",&n);
//	for(i=1;i<=n;i++)
//
//	 P=P*i;
//	printf("Ket qua n!: %d",P);
//
//	return 0; 
//}
























//#include<stdio.h>
//#include<math.h>
//int main(){
//	double a,b,c,delta,x,y;
//    scanf("%lf \n%lf \n%lf", &a,&b,&c);
//	x=-b/(2*a); y=sqrt(delta)/(2*a);
//	delta= b*b-4*a*c;
//	if(a==0&&b==0)
//		printf(" Phuong trinh vo so nghiem");
//	else 
//		if(delta<0) printf("%lf+i%lf\n%lf-i%lf",x,y,x,y);	
//	else
//		if(delta==0)
//		printf("Phuong trinh co nghiem kep x1=x2= %lf", -b/(2*a));
//	else
//		printf("Phuong trinh co 2 nghiem phan biet x1 = %lf, x2 = %lf", 
//		  (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
//	
//	return 0;	  	
//}
	
	
//	
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main ()
//{
//    int n,i;
//    scanf("%d",&n);
//    if (n<2)
//    {
//        printf("Khong phai so nguyen to");
//        exit(0);
//    }
//    for (i=2;i<=sqrt(n);i++)
//    {
//        printf("La so nguyen to");
//        exit(0);
//    }
//    printf("Khong phai so nguyen to");
//    return 0;
//}	
//	
//	
//	#include<stdio.h>
//int main (){
//	int n, s, T;
//	printf("Nhap n=");
//	scanf("%d", &n);
//	if(n<1000){
//		while(n!=0){
//			T+=n%10;
//			n/10;
//			
//		}
//		printf("%d", T);
//	}
//	else 
//	printf("ERROR");
//	return 0;
//}
//	

//#include<stdio.h>
//int main(){
//	int i;
//	for(i=0;i<100;i++)
//	printf("%d. anh yeu em\n",i);
//	return 0;
//}	
//	
//	
//	
	
	
	
	
	
	
	
	
//	float s,i;
//	
//	float n;
//	do {
//	printf ("nhap gia tri n: \n");
//	scanf("%f", &n);
//	
//	
//	for(i=1;i<=n;i++);
//		s= i++;	
//	printf("Tong day so co n chu so: %f\n", s);
//}while(s<=1000);
//   
//	return 0;
//	
//	
//}












//int main(){
//	float a1, a2, b1,b2,b3,c2,c1,x,y,d,dx,dy;
//	
//	printf("Nhap cac gia tri he pt: \n");
//	printf(" gia tri pt1: "); scanf("%f %f %f", &a1,&b1,&c1);
//	printf(" gia tri pt2: "); scanf("%f %f %f", &a2,&b2,&c2);
//	
//	d= a1*b2-a2*b1;
//	dx= c1*b2-b1*c2;
//	dy= a1*c2-a2*c1;
//	
//	if (d!=0){
//
//		x=dx/d ;y= dy/d;
//		printf("He pt co 2 ng pb: x = %f, y= %f\n", x,y);
//	}else 
//		if (dx==0)
//			printf("He pt vo nghiem!\n");
//			else
//				printf("He pt vo so nghiem");
//	return 0; 
//}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	int x,y,u,h,z,t;
//	float AB, AC, BC;
//
//	
//	
//	printf("Toa do diem A: "); scanf("%d %d", &x,&y );
//	printf("Toa do diem B: "); scanf("%d %d", &z,&t );
//	printf("Toa do diem C: "); scanf("%d %d", &u,&h );
// 
//	printf("DO DAI CANH BC: %f %f",u-z,h-t); 
//
//    return 0;
//
//	
//	    
//}












//#include<stdio.h>









//int main(){
//	int a = 10;
// 
//    do {
//        if( a == 15) {
//         // quay ve do khi a = 15 (bo qua lenh print)
//            a = a + 1;
//            continue;
//        }
//   
//        printf("Gia tri cua a: %d\n", a);
//        a++;
//    
//    } while( a < 20 );
//  
//   return 0;
//}
//	
//	
	
	
	
	
	
	
//	int i;
//	int sum=0;
//	
//	for( i=0;i <10;i++){
//		sum+=i;
//	}
//	printf("sum= %d\n",sum);
//}










//int main(){
//	int sum =0 , i=1;
//	do{
//		sum+=i;
//		++i;
//		
//	}while (i < 10);
//	printf("Tong: %d\n",sum);
//	
//}









//#include<math.h>
//int main(){
//	int count = 6;
//	
//	while ( count <= 10 ){
//		printf ("Gia tri count: %d\n", count);
//		++ count;
//	}
//	return 0;
//}
\






























//#include<math.h>


//int main(){
//	
//	
//	int luachon;
//	do{
//	
//	printf("\n menu\n1. Tinh tong 2 so nguyen.\n2. Tinh hieu 2 so nguyen.\n3. Tinh tich 2 so nguyen.\n4. Tinh thuong 2 so nguyen.\n5."
//	 " Chia lay du 2 so nguyen.\n0. Thoat. \nBan chon phuong an nao?\n ");
//	
//	scanf("%d", &luachon);
//	
//	switch ( luachon ){
//		case 0 : break;
//		case 1 :
//			int a,b;
//			printf( "Nhap a, b: ");
//			scanf("%d%d", &a, &b);
//			printf("\nTong: %d + %d =%d", a,b,a+b);
//			break; 
//		
//		case 2 :{
//		
//
//			int a,b;
//			printf( "\nNhap a, b: ");
//			scanf("%d%d", &a,&b);
//			printf("hieu: %d - %d =%d", a,b,a - b);
//			break; 
//	    }
//			case 3 :{
//			int a,b;
//			printf( "\nNhap a, b: ");
//			scanf("%d%d", &a,&b);
//			printf("Tich: %d * %d =%d", a,b,a*b);
//			break; 
//		}
//			case 4 :{
//			int a,b;
//			printf( "\nNhap a, b: ");
//			scanf("%d%d", &a,&b);
//			printf("thuong: %d / %d =%d", a,b,a/b);
//			break; 
//		}
//			case 5 :{
//			int a,b;
//			char c = '\%';
//			printf( "\nNhap a, b: ");
//			scanf("%d%d", &a,&b);
//			printf("lay du: %d %c %d =%d", a,c,b,a%b);
//			break; 
//		}
//	}
//	
//	
//	}while( luachon != 0);
//
//	return 0;
//	
//}


























//	
//	
//	
//	
//   
//}

//#include <iostream>
//using namespace std;
//int main(){
//    
//    cout << "Nhap chuoi co ky tu trang: ";
//    char str[30];
//    fgets(str, sizeof(str)+1, stdin);
//
//    
//    cout << "Chuoi vua nhap: ";
//    cout << str;
//    return 0;
//}





