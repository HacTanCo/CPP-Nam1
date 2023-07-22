//				27. bai tap chuong 5
//		xoa ky tu trang du thua va viet hoa moi chu cai dau trong chuoi
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int main()
//{
//	string str;
//	while(getline(cin,str))
//	{
//		//xoa dau chuoi
//		while(str[0]==' ')
//		{
//			str.erase(0,1);
//		}
//		//xoa cuoi chuoi
//		while(str[str.length() - 1]==' ')
//		{
//			str.erase(str.length()-1,1);
//		}
//		//xoa giua hai ky tu trong chuoi
//		int i=0;
//		while(i<str.length())
//		{
//			if(str[i]==' ' and str[i+1]==' ')
//			{
//				str.erase(i,1);
//			}
//			else
//			{
//				i++;
//			}
//		}
//		//chuyen ve thuong
//		for(int i=0;i<str.length();i++)
//		{
//			str[i]=tolower(str[i]);
//		}
//		//hoa chu dau tien trong chuoi
//		for(int i=0;i<str.length();i++)
//		{
//			str[0]=toupper(str[0]);
//		}
//		for(int i=0;i<str.length();i++)
//		{
//			if(str[i]==' ')
//			{
//				str[i+1]=toupper(str[i+1]);
//			}
//		}
//		cout<<str<<endl;
//	}	
//}
//				Bai Tap Con Tro
//		*p tuong duong a[0]
//		p+i tuong duong &a[i]
//		*(p+i) tuong duong a[i]
//		p = p + i tuong duong *p = a[i]







//				38.BAI TAP CHUONG 7
//#include<iostream>
//using namespace std;
//void nhaparr(int *arr,int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];
//	}
//}
//void xuatarr(int *arr,int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//}
//void nhapcuoimang(int* &arr,int &n,int x)
//{
//	//tao 1 mang moi
//	int new_size = n+1;
//	int *new_arr = new int[new_size];
//	//coppy toan bo phan tu cu sang mang moi
//	for(int i=0;i<n;i++)
//	{
//		new_arr[i] = arr[i];
//	}
//	//them phan tu moi vao cuoi mang
//	new_arr[new_size-1]= x;
//	//gan mang moi sang con tro cu va tang so luong phan tu len 1 don vi
//	delete [] arr;
//	arr = new_arr;
//	n = new_size;
//}
//void xoa1phantubatky(int* &arr, int &n,int vitrixoa)
//{
//	//xoa phan tu can xoa tren mang cu
//	for(int i=vitrixoa;i<n-1;i++)
//	{
//		arr[i] = arr[i+1];
//	}
//	//tao mang moi
//	int new_n = n-1;
//	int *new_arr = new int[new_n]; 
//	//coppy cac phan tu ben mang cu sang mang moi
//	for(int i=0;i<new_n;i++)
//	{
//		new_arr[i]=arr[i];
//	}
//	//gan mang moi cho mang cu va giam n di 1 don vi
//	delete [] arr;
//	arr=new_arr;
//	n=new_n;
//}
//void them1phantubatkyvaovitribatky(int* &arr,int &n,int vitrixoa,int giatrithem)
//{
//	//tao mang moi
//	int new_n=n+1;
//	int *new_arr=new int[new_n];
//	//coppy toan bo phan tu cu sang mang moi
//	for(int i=0;i<n;i++)
//	{
//		new_arr[i]=arr[i];
//	}
//	//them phan tu moi vao mang moi
//	for(int i=new_n-1;i>vitrixoa;i--)
//	{
//		new_arr[i] = new_arr[i-1];
//	}
//	new_arr[vitrixoa]=giatrithem;
//	//gan mang moi cho mang cu va tang n len 1 don vi
//	delete [] arr;
//	arr = new_arr;
//	n = new_n;
//	
//}
//void bubblesort(int *arr,int n)
//{
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(arr[i]>arr[j])
//			{
//				int temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;
//	cout<<"Nhap N: ";cin>>n;
//	int *arr = new int [n];
//	cout<<"Nhap mang: ";
//	nhaparr(arr,n);
	//nhap 1 phan tu vao cuoi mang
//	int x;
//	cout<<"Nhap X: ";cin>>x;
//	cout<<"Them 1 phan tu X = "<<x<<" vao cuoi mang!!!\n";
//	nhapcuoimang(arr,n,x);
//	cout<<"Xuat mang: ";
//	xuatarr(arr,n);

	//xoa 1 phan tu o vi tri bat ky
//	int vtxoa;
//	cout<<"Nhap vi tri xoa: ";cin>>vtxoa;
//	xoa1phantubatky(arr,n,vtxoa);
//	cout<<"Xuat mang: ";
//	xuatarr(arr,n);
	//them 1 phan tu bat ky vao 1 vi tri bat ky
//	int giatri,vitri;
//	cout<<"Nhap gia tri: ";cin>>giatri;
//	cout<<"Nhap vi tri: ";cin>>vitri;
//	them1phantubatkyvaovitribatky(arr,n,vitri,giatri);
//	cout<<"Xuat mang: ";
//	xuatarr(arr,n);
	//sap xep mang
//	bubblesort(arr,n);
//	cout<<"Mang sau khi sap xep: ";
//	xuatarr(arr,n);
//	
//	
//	
//}





//				nhap xuat bang nap chong toan tu
//#include<iostream>
//using namespace std;
//struct quanlysp
//{
//	string ten;
//	int dongia;
//	int soluong;
//	
//	friend istream& operator>>(istream &is, quanlysp &sp)
//	{
//		cout<<"Nhap ten san pham: ";
//		is.ignore();
//		getline(is,sp.ten);
//		cout<<"NHap gia san pham: ";
//		is>>sp.dongia;
//		cout<<"Nhap so luong san pham: ";
//		is>>sp.soluong;
//		cout<<endl;
//		return is;
//	}
//	
//	friend ostream& operator<<(ostream& os, quanlysp sp)
//	{
//		os<<"Ten: "<<sp.ten;
//		os<<", don gia: "<<sp.dongia;
//		os<<", so luong: "<<sp.soluong;
//		return os;
//	}
//};
//
//void nhapdssp(quanlysp *dssp,int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cin>>dssp[i];
//	}
//}
//void xuatdssp(quanlysp *dssp,int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cout<<dssp[i]<<endl;
//	}
//}
//
//void themsp(quanlysp* &p, int &n)
//{
//	// tao 1 san pham moi
//	quanlysp new_sp;
//	cout<<"Nhap thong tin san pham moi: ";
//	cin>>new_sp.ten;
//	//tao 1 cai mang con tro moi
//	int new_n = n+1;
//	quanlysp *temp = new quanlysp[new_n];
//	//coppy toan bo phan tu cu vao mang moi
//	for(int i=0;i<n;i++)
//	{
//		temp[i]=p[i];
//	}
//	//xoa vung nho con tro cu va gan mang con tro cu = mang con tro moi
//	delete [] p;
//	p=temp;
//	n=new_n;	
//}
//int main()
//{
//	int n;cin>>n;
//	quanlysp *p=new quanlysp[n];
//	nhapdssp(p,n);
//	themsp(p,n);
//	xuatdssp(p,n);
//	
//	
//}

#include<iostream>
using namespace std;
struct node 
{
	int data;
	node *next;
};
node *head=NULL;
node *taonode(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void themcuoi(node *&head,int x)
{
	node *temp=taonode(x);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		node *phu=head;
		while(phu->next != NULL)
		{
			phu=phu->next;
		}
		phu->next=temp;
	}
}
void  xoa(node *& head, int vitri)
{
	int n = 0;
	node * p = head;
	
	//dem tat ca vi tri
    while(p!=NULL)
	{
    	n++;
        p = p->next;
    }
    
    if (vitri>=1 && vitri <= n)
	{
		//kiem tra dau co NULL hay !NULL
    	if (vitri==1)
    	{
    		head = head->next;
		}
		
		else 
		{
			p = head; int i = 1;
			while(p!=NULL && i<vitri-1)
			{
	    		i++;
	        	p = p->next;
	    	}
	    	p->next = p->next->next;
	    }
    }
}
int tong(node *head)
{
	int s=0;
	while(head!=NULL)
	{	
		s+=head->data;
		head=head->next;
	}
	return s;
}
int main()
{
	string nhan;
	int n;cin>>n;
	int x,p;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		themcuoi(head,x);
	}
	while(true)
	{
		cin>>nhan;
		if(nhan=="i")
		{
			cin>>x;
			themcuoi(head,x);
		}
		if(nhan=="d")
		{
			cin>>p;
			xoa(head,p);
		}
		if(nhan=="s")
		{
			cout<<tong(head)<<endl;
		}
		if(nhan=="0")
		{
			break;
		}
	}
}








