#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

// He 2 sang he 10
int chuyen1()
{
	
	string s,s1;
	int n, i, sai=0;
	bool kt;
	double somoi = 0;
	do
	{
	system("cls");
	cout << "1. He 2 sang he 10" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s;
	n = s.length();
	kt = true;
	for (i=0;i<n;i++)
	{
		s1 = s[i];
		if (s1 != "1" && s1 !="0")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 2 la he voi hai chu so 0 va 1." << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	for (i=0;i<n;i++)
	{
		s1 = s[i];
		if (s1 == "1")
			somoi = somoi +  pow(2*1.0,n-i-1);
	}
	cout << "Ket qua: " << somoi << endl;
	return 0;
}
// He 2 sang he 8
int chuyen2()
{
	string s, s1="";
	int i, n, tam, somoi = 0, sai=0;
	bool kt;
	do 
	{
	system("cls");
	cout << "2. He 2 sang he 8" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s;
	n = s.length();
	kt = true;
	for (i=0;i<n;i++)
	{
		s1 = s[i];
		if (s1 != "1" && s1 !="0")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 2 la he voi hai chu so 0 va 1!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	while (n % 3 != 0)
	{
		s = "0" + s;
		n++;
	}
	s1 = "";
	for (i=0;i<n;i++)
	{
		s1 = s1 + s[i];
		if (i % 3 == 2)
		{
			if (s1 == "000")
				tam = 0;
			else 
				if (s1 =="001")
					tam = 1;
			else 
				if (s1 =="010")
					tam = 2;
			else 
				if (s1 =="011")
					tam = 3;
			else 
				if (s1 =="100")
					tam = 4;
			else 
				if (s1 =="101")
					tam = 5;
			else 
				if (s1 =="110")
					tam = 6;
			else 
				if (s1 =="111")
					tam = 7;
			somoi = somoi*10 + tam;
			s1 ="";
		}
	}
	cout << "Ket qua: " << somoi << endl;
	return 0;
}
// He 2 sang he 16
int chuyen3()
{
	string s, s1="";
	int i, n, sai = 0;
	string tam, somoi = "";
	bool kt;
	do
	{
	system("cls");
	cout << "3. He 2 sang he 16" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s;
	n = s.length();
	kt = true;
	for (i=0;i<n;i++)
	{
		s1 = s[i];
		if (s1 != "1" && s1 !="0")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 2 la he voi hai chu so 0 va 1!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	s1 = "";
	while (n % 4 != 0)
	{
		s = "0" + s;
		n++;
	}
	for (i=0;i<n;i++)
	{
		s1 = s1 + s[i];
		if (i % 4 == 3)
		{
			if (s1 == "0000")
				tam = "0";
			else 
				if (s1 =="0001")
					tam = "1";
			else 
				if (s1 =="0010")
					tam = "2";
			else 
				if (s1 =="0011")
					tam = "3";
			else 
				if (s1 =="0100")
					tam = "4";
			else 
				if (s1 =="0101")
					tam = "5";
			else 
				if (s1 =="0110")
					tam = "6";
			else 
				if (s1 =="0111")
					tam = "7";
			else 
				if (s1 =="1000")
					tam = "8";
			else 
				if (s1 =="1001")
					tam = "9";
			else 
				if (s1 =="1010")
					tam = "A";
			else 
				if (s1 =="1011")
					tam = "B";
			else 
				if (s1 =="1100")
					tam = "C";
			else 
				if (s1 =="1101")
					tam = "D";
			else 
				if (s1 =="1110")
					tam = "E";
			else 
				if (s1 =="1111")
					tam = "F";
			somoi = somoi + tam;
			s1 ="";
		}
	}
	cout << "Ket qua: " << somoi << endl;
	return 0;
}
// He 10 sang he 2
int chuyen4()
{
	int j, so=0, du, i=0, a[20], sai = 0, n;
	string s,s1;
	bool kt;
	do
	{
	system("cls");
	cout << "4. He 10 sang he 2" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s;
	n = s.length();
	kt = true;
	for (j=0;j<n;j++)
	{
		s1 = s[j];
		if (s1 != "0" && s1 != "1" && s1 !="2" && s1 !="3" && s1 !="4" && s1 !="5" && s1 !="6" && s1 !="7" && s1 !="8" && s1 !="9")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 10 la he su dung cac chu so: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	for (j=n-1;j>=0;j--)
	{
		s1 = s[j];
		if (s1 == "0")
			so = so*10 + 0;
		else
		if (s1 == "1")
			so = so*10 + 1;
		else
		if (s1 == "2")
			so = so*10 + 2;
		else
		if (s1 == "3")
			so = so*10 + 3;
		else
		if (s1 == "4")
			so = so*10 + 4;
		else
		if (s1 == "5")
			so = so*10 + 5;
		else
		if (s1 == "6")
			so = so*10 + 6;
		else
		if (s1 == "7")
			so = so*10 + 7;
		else
		if (s1 == "8")
			so = so*10 + 8;
		else
		if (s1 == "9")
			so = so*10 + 9;
	}
	cout << "Ket qua: ";
	if (so==0)
		cout << "0";
	else
	{
	while (so!=0)
	{
		i++;
		du = so % 2;
		so = so / 2;
		a[i] = du;
	}
	for (j=i;j>0;j--)
		cout << a[j];
	}
	return 0;
}
// He 10 sang he 8
int chuyen5()
{
	int j, so=0, du, i=0, a[20], sai = 0, n;
	string s,s1;
	bool kt;
	do
	{
	system("cls");
	cout << "5. He 10 sang he 8" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s;
	n = s.length();
	kt = true;
	for (j=0;j<n;j++)
	{
		s1 = s[j];
		if (s1 != "0" && s1 != "1" && s1 !="2" && s1 !="3" && s1 !="4" && s1 !="5" && s1 !="6" && s1 !="7" && s1 !="8" && s1 !="9")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 10 la he su dung cac chu so: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	for (j=n-1;j>=0;j--)
	{
		s1 = s[j];
		if (s1 == "0")
			so = so*10 + 0;
		else
		if (s1 == "1")
			so = so*10 + 1;
		else
		if (s1 == "2")
			so = so*10 + 2;
		else
		if (s1 == "3")
			so = so*10 + 3;
		else
		if (s1 == "4")
			so = so*10 + 4;
		else
		if (s1 == "5")
			so = so*10 + 5;
		else
		if (s1 == "6")
			so = so*10 + 6;
		else
		if (s1 == "7")
			so = so*10 + 7;
		else
		if (s1 == "8")
			so = so*10 + 8;
		else
		if (s1 == "9")
			so = so*10 + 9;
	}
		cout << "Ket qua: ";
	if (so == 0)
		cout << "0";
	else
	{
	while (so!=0)
	{
		i++;
		du = so % 8;
		so = so / 8;
		a[i] = du;
	}
		for (j=i;j>0;j--)
		cout << a[j];
	}
	return 0;
}
// He 10 sang he 16
int chuyen6()
{
	int j, so=0, du, i=0, a[20], sai = 0, n;
	string s,s1;
	bool kt;
	do
	{
	system("cls");
	cout << "6. He 10 sang he 16" << endl;
	cout << "Nhap so can chuyen: ";
cin >> s;
	n = s.length();
	kt = true;
	for (j=0;j<n;j++)
	{
		s1 = s[j];
		if (s1 != "0"  && s1 != "1" && s1 !="2" && s1 !="3" && s1 !="4" && s1 !="5" && s1 !="6" && s1 !="7" && s1 !="8" && s1 !="9")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 10 la he su dung cac chu so: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	for (j=n-1;j>=0;j--)
	{
		s1 = s[j];
		if (s1 == "0")
			so = so*10 + 0;
		else
		if (s1 == "1")
			so = so*10 + 1;
		else
		if (s1 == "2")
			so = so*10 + 2;
		else
		if (s1 == "3")
			so = so*10 + 3;
		else
		if (s1 == "4")
			so = so*10 + 4;
		else
		if (s1 == "5")
			so = so*10 + 5;
		else
		if (s1 == "6")
			so = so*10 + 6;
		else
		if (s1 == "7")
			so = so*10 + 7;
		else
		if (s1 == "8")
			so = so*10 + 8;
		else
		if (s1 == "9")
			so = so*10 + 9;
	}
		cout << "Ket qua: ";
	if (so == 0)
		cout << "0";
	else
	{
	while (so!=0)
	{
		i++;
		du = so % 16;
		so = so / 16;
		a[i] = du;
	}
		for (j=i;j>0;j--)
			if (a[j]<10)
				cout << a[j];
			else
				if (a[j] == 10)
					cout << "A";
			else
				if (a[j] == 11)
					cout << "B";
			else
				if (a[j] == 12)
					cout << "C";
			else
				if (a[j] == 13)
					cout << "D";
			else
				if (a[j] == 14)
					cout << "E";
			else
				if (a[j] == 15)
					cout << "F";
	}
	return 0;
}
// He 8 sang he 2
int chuyen7()
{
	int j, so=0, tam, i=0, a[20], n;
	int sai = 0;
	string s,s1;
	bool kt;
	do
	{
	system("cls");
	cout << "7. He 8 sang he 2" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s;
	n = s.length();
	kt = true;
	for (j=0;j<n;j++)
	{
		s1 = s[j];
		if (s1 != "0" &&  s1 != "1" && s1 !="2" && s1 !="3" && s1 !="4" && s1 !="5" && s1 !="6" && s1 !="7")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 8 la he su dung cac chu so: 0, 1, 2, 3, 4, 5, 6, 7!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	for (j=n-1;j>=0;j--)
	{
		s1 = s[j];
		if (s1 == "0")
			so = so*10 + 0;
		else
		if (s1 == "1")
			so = so*10 + 1;
		else
		if (s1 == "2")
			so = so*10 + 2;
		else
		if (s1 == "3")
			so = so*10 + 3;
		else
		if (s1 == "4")
			so = so*10 + 4;
		else
		if (s1 == "5")
			so = so*10 + 5;
		else
		if (s1 == "6")
			so = so*10 + 6;
		else
		if (s1 == "7")
			so = so*10 + 7;
	}
	cout << "Ket qua: ";
	if (so==0)
		cout << "0";
	else
	{
	while (so!=0)
	{
		i++;
		tam = so % 10;
		so = so / 10;
		a[i] = tam;
	}
	for (int j=i;j>0;j--)
	if (j!=i)
	{
		if (a[j] == 0)
			cout << "000";
		else
		if (a[j] == 1)
			cout << "001";
		else
		if (a[j] == 2)
			cout << "010";
		else
		if (a[j] == 3)
			cout << "011";
		else
		if (a[j] == 4)
			cout << "100";
		else
		if (a[j] == 5)
			cout << "101";
		else
		if (a[j] == 6)
			cout << "110";
		else
		if (a[j] == 7)
			cout << "111";
	}
	else
	{
		if (a[j] == 0)
			cout << "";
		else
		if (a[j] == 1)
			cout << "1";
		else
		if (a[j] == 2)
			cout << "10";
		else
		if (a[j] == 3)
			cout << "11";
		else
		if (a[j] == 4)
			cout << "100";
		else
		if (a[j] == 5)
			cout << "101";
		else
		if (a[j] == 6)
			cout << "110";
		else
		if (a[j] == 7)
			cout << "111";
	}
	}
	return 0;
}
// He 8 sang he 10
int chuyen8()
{
	int so=0, j, dem=0, tam, sai=0, n;
	string s, s1;
	bool kt;
	double tong=0;
	do
	{
	system("cls");
	cout << "8. He 8 sang he 10" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s;
	n = s.length();
	kt = true;
	for (j=0;j<n;j++)
	{
		s1 = s[j];
		if (s1 != "0" && s1 != "1" && s1 !="2" && s1 !="3" && s1 !="4" && s1 !="5" && s1 !="6" && s1 !="7")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 8 la he su dung cac chu so: 0, 1, 2, 3, 4, 5, 6, 7!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	for (j=n-1;j>=0;j--)
	{
		s1 = s[j];
		if (s1 == "0")
			so = so*10 + 0;
		else
		if (s1 == "1")
			so = so*10 + 1;
		else
		if (s1 == "2")
			so = so*10 + 2;
		else
		if (s1 == "3")
			so = so*10 + 3;
		else
		if (s1 == "4")
			so = so*10 + 4;
		else
		if (s1 == "5")
			so = so*10 + 5;
		else
		if (s1 == "6")
			so = so*10 + 6;
		else
		if (s1 == "7")
			so = so*10 + 7;
	}
	if (so==0)
	{
		cout << "Ket qua: ";
		cout << "0";
	}
	else
	{
	while (so!=0)
	{
		tam = so % 10;
		so = so / 10;
		tong = tong + tam * pow(8.0,dem);
		dem++;
	}
	cout << "Ket qua: " << s << endl;
	}
	return 0;
}
// He 8 sang he 16
int chuyen9()
{
	int n, so=0, tam, j, i=0, a[20], sai=0;
	string s="", s1="", tam1, somoi,s00,s01;
	bool kt;
	do
	{
	system("cls");
	cout << "9. He 8 sang he 16" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s00;
	n = s00.length();
	kt = true;
	for (j=0;j<n;j++)
	{
		s01 = s00[j];
		if (s01 != "0" && s01 != "1" && s01 !="2" && s01 !="3" && s01 !="4" && s01 !="5" && s01 !="6" && s01 !="7")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 8 la he su dung cac chu so: 0, 1, 2, 3, 4, 5, 6, 7!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	for (j=n-1;j>=0;j--)
	{
		s01 = s00[j];
		if (s01 == "0")
			so = so*10 + 0;
		else
		if (s01 == "1")
			so = so*10 + 1;
		else
		if (s01 == "2")
			so = so*10 + 2;
		else
		if (s01 == "3")
			so = so*10 + 3;
		else
		if (s01 == "4")
			so = so*10 + 4;
		else
		if (s01 == "5")
			so = so*10 + 5;
		else
		if (s01 == "6")
			so = so*10 + 6;
		else
		if (s01 == "7")
			so = so*10 + 7;
	}
	if (so==0)
	{
		cout << "Ket qua: ";
		cout << "0";
	}
	else
	{
	while (so!=0)
	{
		i++;
		tam = so % 10;
		so = so / 10;
		a[i] = tam;
	}
	for (int j=i;j>0;j--)
		if (a[j] == 0)
			s = s + "000";
		else
		if (a[j] == 1)
			s = s + "001";
		else
		if (a[j] == 2)
			s = s + "010";
		else
		if (a[j] == 3)
			s = s + "011";
		else
		if (a[j] == 4)
			s = s + "100";
		else
		if (a[j] == 5)
			s = s + "101";
		else
		if (a[j] == 6)
			s = s + "110";
		else
		if (a[j] == 7)
			s = s + "111";
	n = s.length();
	while (n % 4 != 0)
	{
		s = "0" + s;
		n++;
	}
	for (i=0;i<n;i++)
	{
		s1 = s1 + s[i];
		if (i % 4 == 3)
		{
			if (s1 == "0000")
				tam1 = "0";
			else 
				if (s1 =="0001")
					tam1 = "1";
			else 
				if (s1 =="0010")
					tam1 = "2";
			else 
				if (s1 =="0011")
					tam1 = "3";
			else 
				if (s1 =="0100")
					tam1 = "4";
			else 
				if (s1 =="0101")
					tam1 = "5";
			else 
				if (s1 =="0110")
					tam1 = "6";
			else 
				if (s1 =="0111")
					tam1 = "7";
			else 
				if (s1 =="1000")
					tam1 = "8";
			else 
				if (s1 =="1001")
					tam1 = "9";
			else 
				if (s1 =="1010")
					tam1 = "A";
			else 
				if (s1 =="1011")
					tam1 = "B";
			else 
				if (s1 =="1100")
					tam1 = "C";
			else 
				if (s1 =="1101")
					tam1 = "D";
			else 
				if (s1 =="1110")
					tam1 = "E";
			else 
				if (s1 =="1111")
					tam1 = "F";
			somoi = somoi + tam1;
			s1 ="";
		}
	}

	cout << "Ket qua: " << somoi << endl;
	}
	return 0;
}
// He 16 sang he 2
int chuyen10()
{
	int i, n, a[20], sai = 0;
	string s,s1;
	bool kt;
	do
	{
	system("cls");
	cout << "10. He 16 sang he 2" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s;
	n = s.length();
	kt = true;
	for (i=0;i<n;i++)
	{
		s1 = s[i];
		if (s1 != "0" && s1 !="1" && s1 !="2" && s1 !="3" && s1 !="4" && s1 !="5" && s1 !="6" && s1 !="7" && s1 !="8" && s1 !="9" && s1 !="A" && s1 !="B" && s1 !="C" && s1 !="D" && s1 !="E" && s1 !="F")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 16 con goi la he Hexa. He hexa su dung cac ki hieu : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	if (s == "0")
		cout << "Ket qua: 0";
	else
	{
	for (i=0;i<n;i++)
	{
		s1=s[i];
		if (s1 == "0")
			a[i+1] = 0;
		else
		if (s1 == "1")
			a[i+1] = 1;
		if (s1 == "2")
			a[i+1] = 2;
		else
		if (s1 == "3")
			a[i+1] = 3;
		else
		if (s1 == "4")
			a[i+1] = 4;
		if (s1 == "5")
			a[i+1] = 5;
		else
		if (s1 == "6")
			a[i+1] = 6;
		else
		if (s1 == "7")
			a[i+1] = 7;
		else
		if (s1 == "8")
			a[i+1] = 8;
		else
		if (s1 == "9")
			a[i+1] = 9;
		else
		if (s1 == "A")
			a[i+1] = 10;
		else
		if (s1 == "B")
			a[i+1] = 11;
		else
		if (s1 == "C")
			a[i+1] = 12;
		else
		if (s1 == "D")
			a[i+1] = 13;
		else
		if (s1 == "E")
			a[i+1] = 14;
		else
		if (s1 == "F")
			a[i+1] = 15;
	}
	cout << "Ket qua: ";
	for (int j=1;j<=n;j++)
		if (j!=1)
		{
		if (a[j] == 0)
			cout << "0000";
		else
		if (a[j] == 1)
			cout << "0001";
		else
		if (a[j] == 2)
			cout << "0010";
		else
		if (a[j] == 3)
			cout << "0011";
		else
		if (a[j] == 4)
			cout << "0100";
		else
		if (a[j] == 5)
			cout << "0101";
		else
		if (a[j] == 6)
			cout << "0110";
		else
		if (a[j] == 7)
			cout << "0111";
		else
		if (a[j] == 8)
			cout << "1000";
		else
		if (a[j] == 9)
			cout << "1001";
		else
		if (a[j] == 10)
			cout << "1010";
		else
		if (a[j] == 11)
			cout << "1011";
		else
		if (a[j] == 12)
			cout << "1100";
		else
		if (a[j] == 13)
			cout << "1101";
		else
		if (a[j] == 14)
			cout << "1110";
		else
		if (a[j] == 15)
			cout << "1111";
		}
		else
		{
		if (a[j] == 0)
			cout << "";
		else
		if (a[j] == 1)
			cout << "1";
		else
		if (a[j] == 2)
			cout << "10";
		else
		if (a[j] == 3)
			cout << "11";
		else
		if (a[j] == 4)
			cout << "100";
		else
		if (a[j] == 5)
			cout << "101";
		else
		if (a[j] == 6)
			cout << "110";
		else
		if (a[j] == 7)
			cout << "111";
		else
		if (a[j] == 8)
			cout << "1000";
		else
		if (a[j] == 9)
			cout << "1001";
		else
		if (a[j] == 10)
			cout << "1010";
		else
		if (a[j] == 11)
			cout << "1011";
		else
		if (a[j] == 12)
			cout << "1100";
		else
		if (a[j] == 13)
			cout << "1101";
		else
		if (a[j] == 14)
			cout << "1110";
		else
		if (a[j] == 15)
			cout << "1111";
		}
		}
	return 0;
}
// He 16 sang he 10
int chuyen11()
{
	int i, n, sai = 0;
	double somoi = 0;
	string s, s1;
	bool kt;
	do
	{
	system("cls");
	cout << "11. He 16 sang he 10" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s;
	n = s.length();
	kt = true;
	for (i=0;i<n;i++)
	{
		s1 = s[i];
		if (s1 != "0" && s1 !="1" && s1 !="2" && s1 !="3" && s1 !="4" && s1 !="5" && s1 !="6" && s1 !="7" && s1 !="8" && s1 !="9" && s1 !="A" && s1 !="B" && s1 !="C" && s1 !="D" && s1 !="E" && s1 !="F")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 16 con goi la he Hexa. He hexa su dung cac ki hieu : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	if (s == "0")
		cout << "Ket qua: 0";
	else
	{
	for (i=0;i<n;i++)
	{
		s1 = s[i];
		if (s1 == "0")
			somoi = somoi + 0*pow(16.0,n-i-1);
		else
		if (s1 == "1")
			somoi = somoi + 1*pow(16.0,n-i-1);
		else
		if (s1 == "2")
			somoi = somoi + 2*pow(16.0,n-i-1);
		else
		if (s1 == "3")
			somoi = somoi + 3*pow(16.0,n-i-1);
		else
		if (s1 == "4")
			somoi = somoi + 4*pow(16.0,n-i-1);
		else
		if (s1 == "5")
			somoi = somoi + 5*pow(16.0,n-i-1);
		else
		if (s1 == "6")
			somoi = somoi + 6*pow(16.0,n-i-1);
		else
		if (s1 == "7")
			somoi = somoi + 7*pow(16.0,n-i-1);
		else
		if (s1 == "8")
			somoi = somoi + 8*pow(16.0,n-i-1);
		else
		if (s1 == "9")
			somoi = somoi + 9*pow(16.0,n-i-1);
		else
		if (s1 == "A")
			somoi = somoi + 10*pow(16.0,n-i-1);
		else
		if (s1 == "B")
			somoi = somoi + 11*pow(16.0,n-i-1);
		else
		if (s1 == "C")
			somoi = somoi + 12*pow(16.0,n-i-1);
		else
		if (s1 == "D")
			somoi = somoi + 13*pow(16.0,n-i-1);
		else
		if (s1 == "E")
			somoi = somoi + 14*pow(16.0,n-i-1);
		else
		if (s1 == "F")
			somoi = somoi + 15*pow(16.0,n-i-1);
	}
	cout << "Ket qua: " << somoi << endl;
	}
	return 0;
}
// He 16 sang he 8
int chuyen12()
{
	int n ,i, a[20], tam, somoi=0, sai = 0;
	string s, s1, s2="", s3 ="";
	bool kt;
	do
	{
	system("cls");
	cout << "12. He 16 sang he 8" << endl;
	cout << "Nhap so can chuyen: ";
	cin >> s;
	n = s.length();
	kt = true;
	for (i=0;i<n;i++)
	{
		s1 = s[i];
		if (s1 != "0" && s1 !="1" && s1 !="2" && s1 !="3" && s1 !="4" && s1 !="5" && s1 !="6" && s1 !="7" && s1 !="8" && s1 !="9" && s1 !="A" && s1 !="B" && s1 !="C" && s1 !="D" && s1 !="E" && s1 !="F")
		{
			kt = false;
			sai++;
			break;
		}
	}
	if (kt == false)
		{
			if (sai<3)
				cout << "Nhap sai. Hay nhap lai" << endl;
			else
			{
				cout << "Ban da nhap sai " << sai << " lan!" << endl;
				cout << "He 16 con goi la he Hexa. He hexa su dung cac ki hieu : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F!" << endl;
				cout << "Hay nhap lai." << endl;
			}
			_getch();
		}
	} while (kt == false);
	if (s == "0")
		cout << "Ket qua: 0";
	else
	{
	for (i=0;i<n;i++)
	{
		s1=s[i];
		if (s1 == "0")
			a[i+1] = 0;
		else
		if (s1 == "1")
			a[i+1] = 1;
		if (s1 == "2")
			a[i+1] = 2;
		else
		if (s1 == "3")
			a[i+1] = 3;
		else
		if (s1 == "4")
			a[i+1] = 4;
		if (s1 == "5")
			a[i+1] = 5;
		else
		if (s1 == "6")
			a[i+1] = 6;
		else
		if (s1 == "7")
			a[i+1] = 7;
		else
		if (s1 == "8")
			a[i+1] = 8;
		else
		if (s1 == "9")
			a[i+1] = 9;
		else
		if (s1 == "A")
			a[i+1] = 10;
		else
		if (s1 == "B")
			a[i+1] = 11;
		else
		if (s1 == "C")
			a[i+1] = 12;
		else
		if (s1 == "D")
			a[i+1] = 13;
		else
		if (s1 == "E")
			a[i+1] = 14;
		else
		if (s1 == "F")
			a[i+1] = 15;
	}
	for (int j=1;j<=n;j++)
		if (j!=1)
		{
		if (a[j] == 0)
			s2 = s2 + "0000";
		else
		if (a[j] == 1)
			s2 = s2 + "0001";
		else
		if (a[j] == 2)
			s2 = s2 + "0010";
		else
		if (a[j] == 3)
			s2 = s2 + "0011";
		else
		if (a[j] == 4)
			s2 = s2 + "0100";
		else
		if (a[j] == 5)
			s2 = s2 + "0101";
		else
		if (a[j] == 6)
			s2 = s2 + "0110";
		else
		if (a[j] == 7)
			s2 = s2 + "0111";
		else
		if (a[j] == 8)
			s2 = s2 + "1000";
		else
		if (a[j] == 9)
			s2 = s2 + "1001";
		else
		if (a[j] == 10)
			s2 = s2 + "1010";
		else
		if (a[j] == 11)
			s2 = s2 + "1011";
		else
		if (a[j] == 12)
			s2 = s2 + "1100";
		else
		if (a[j] == 13)
			s2 = s2 + "1101";
		else
		if (a[j] == 14)
			s2 = s2 + "1110";
		else
		if (a[j] == 15)
			s2 = s2 + "1111";
		}
		else
		{
		if (a[j] == 0)
			s2 = s2 + "";
		else
		if (a[j] == 1)
			s2 = s2 + "1";
		else
		if (a[j] == 2)
			s2 = s2 + "10";
		else
		if (a[j] == 3)
			s2 = s2 + "11";
		else
		if (a[j] == 4)
			s2 = s2 + "100";
		else
		if (a[j] == 5)
			s2 = s2 + "101";
		else
		if (a[j] == 6)
			s2 = s2 + "110";
		else
		if (a[j] == 7)
			s2 = s2 + "111";
		else
		if (a[j] == 8)
			s2 = s2 + "1000";
		else
		if (a[j] == 9)
			s2 = s2 + "1001";
		else
		if (a[j] == 10)
			s2 = s2 + "1010";
		else
		if (a[j] == 11)
			s2 = s2 + "1011";
		else
		if (a[j] == 12)
			s2 = s2 + "1100";
		else
		if (a[j] == 13)
			s2 = s2 + "1101";
		else
		if (a[j] == 14)
			s2 = s2 + "1110";
		else
		if (a[j] == 15)
			s2 = s2 + "1111";
		}
	n = s2.length();
	while (n % 3 != 0)
	{
		s2 = "0" + s2;
		n++;
	}
	for (i=0;i<n;i++)
	{
		s3 = s3 + s2[i];
		if (i % 3 == 2)
		{
			if (s3 == "000")
				tam = 0;
			else 
				if (s3 =="001")
					tam = 1;
			else 
				if (s3 =="010")
					tam = 2;
			else 
				if (s3 =="011")
					tam = 3;
			else 
				if (s3 =="100")
					tam = 4;
			else 
				if (s3 =="101")
					tam = 5;
			else 
				if (s3 =="110")
					tam = 6;
			else 
				if (s3 =="111")
					tam = 7;
			somoi = somoi*10 + tam;
			s3 ="";
		}
	}
	cout << "Ket qua: " << somoi << endl;
	}
	return 0;
}
// Chuong trinh chinh
int main()
{
	int n, dem = 0;
	string tdn, pass;
// Dang nhap
	do
	{
		system("cls");
		cout << "*** Dang nhap ***\n" << endl; 
		cout << "Username: ";
		cin >> tdn;
		cout << "Password: ";
		cin >> pass;
		if (tdn!="admin" || pass!="admin123")
		{
			cout << "Sai ten dang nhap hoac mat khau!" << endl;
			_getch();
			dem++;
		}
		if (dem >= 3)
			break;
	} while (tdn!="admin" || pass!="admin123");
// Canh bao
	if (dem >=3)
	do
	{
		system("cls");
		cout << "*** Dang nhap ***\n" << endl; 
		cout << "Ban da nhap sai " << dem << " lan!" << endl;
		cout << "Username: ";
		cin >> tdn;
		cout << "Password: ";
		cin >> pass;
		if (tdn!="admin" || pass!="admin123")
		{
			cout << "Sai ten dang nhap hoac mat khau" << endl;
			_getch();
			dem++;
		}
// Dang nhap sai qua nhieu. Thoat khoi chuong trinh
		if (dem==6)
		{
			system("cls");
			cout << "Ban da nhap sai qua nhieu lan \nChao tam biet!" << endl;
			_getch();
			return 0;
		}
	} while (tdn!="admin" || pass!="admin123");
	do
	{
	system("cls");
// Menu lua chon
	cout << "CHUONG TRINH CHUYEN HE DEM\n" << endl;
	cout << "**** Menu ****\n" << endl;
	cout << "1. He 2 sang he 10" << endl;
	cout << "2. He 2 sang he 8" << endl;
	cout << "3. He 2 sang he 16 \n" << endl;
	cout << "4. He 10 sang he 2" << endl;
	cout << "5. He 10 sang he 8" << endl;
	cout << "6. He 10 sang he 16 \n" << endl;
	cout << "7. He 8 sang he 2" << endl;
	cout << "8. He 8 sang he 10" << endl;
	cout << "9. He 8 sang he 16 \n" << endl;
	cout << "10. He 16 sang he 2" << endl;
	cout << "11. He 16 sang he 10" << endl;
	cout << "12. He 16 sang he 8 \n" << endl;
	cout << "0. Thoat \n" << endl;
	cin >> n;
		switch(n)
		{
			case 1:
			{
				chuyen1();
				_getch();
				break;
			}
			case 2:
			{
				chuyen2();
				_getch();
				break;
			}
			case 3:
			{
				chuyen3();
				_getch();
				break;
			}
			case 4:
			{
				chuyen4();
				_getch();
				break;
			}
			case 5:
			{
				chuyen5();
				_getch();
				break;
			}
			case 6:
			{
				chuyen6();
				_getch();
				break;
			}
			case 7:
			{
				chuyen7();
				_getch();
				break;
			}
			case 8:
			{
				chuyen8();
				_getch();
				break;
			}
			case 9:
			{
				chuyen9();
				_getch();
				break;
			}
			case 10:
			{
				chuyen10();
				_getch();
				break;
			}
			case 11:
			{
				chuyen11();
				_getch();
				break;
			}
			case 12:
			{
				chuyen12();
				_getch();
				break;
			}
			case 0:
			{
				system("cls");
				cout << "Tam biet ban!" << endl;
				_getch();
			}
		}
	} while (n!=0);
	return 0;
}