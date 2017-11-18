#include <iostream>
#include <string>
using namespace std;

int stringToNum(char c) // chuyen char sang so
{
	return c - '0';
}

char numToString(int n) // chuyen so sang char
{
	return (char)(n + 48);
}

void chuanHoa(string &a, string &b) // lam 2 xau co do dai bang nhau
{
	int l1 = a.length(), l2 = b.length();
	if (l1 >= l2)
	{
		b.insert(0, l1 - l2, '0'); // chen vao dau cua b cac ky tu '0'
	}
	else
	{
		a.insert(0, l2 - l1, '0'); // chen vao dau cua a cac ky tu '0'
	}
}

string sub(string a, string b) //hieu 2 so duong
{
	//kiem tra a > b?
	bool sign = false;
	if (a.length() < b.length())
	{
		sign = true;
		string t = a;
		a = b;
		b = t;
	}
	else if (a.length() == b.length())
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (stringToNum(a[i]) < stringToNum(b[i]))
			{
				sign = true;
				string t = a;
				a = b;
				b = t;
				break;
			}
			else
				break;
		}
	}
	//Tinh toan
	string s = "";
	chuanHoa(a, b);
	int l = a.length();
	int temp = 0;
	bool remb = false; //bien nho
	for (int i = l - 1; i >= 0; i--)
	{
		if (remb == true)
			temp = stringToNum(a[i]) - (stringToNum(b[i]) + 1);
		else
			temp = stringToNum(a[i]) - stringToNum(b[i]);
		//kiem tra co nho
		if (temp < 0)
		{
			temp = temp + 10;
			remb = true; //co nho
		}
		else
			remb = false;
		s.insert(0, 1, numToString(temp));
	}
	//Xoa ky tu 0 dung dau
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '0')
			s.erase(i, 1);
		else
			break;
	}
	//gan dau -
	if (sign == true)
		s.insert(0, 1, '-');
	return s;
}

string sumduong(string a, string b) // tong 2 so duong
{
	string s = "";
	chuanHoa(a, b); // chuan hoa
	int l = a.length();
	int temp = 0;
	for (int i = l - 1; i >= 0; i--) // duyet va cong
	{
		temp = stringToNum(a[i]) + stringToNum(b[i]) + temp; // tinh tong tung doi mot
		s.insert(0, 1, numToString(temp % 10)); // gan phan don vi vao
		temp = temp / 10; // lay lai phan hang chuc
	}
	if (temp>0) // neu hang chuc > 0 thi them vao KQ
	{
		s.insert(0, 1, numToString(temp));
	}
	return s;
}

string sum(string a, string b) // tong 2 so bat ki
{
	string s = "";
	if (a[0] == '-' && b[0] != '-')
	{
		a.erase(0, 1);
		s = sub(b, a);
	}
	else if (a[0] != '-' && b[0] == '-')
	{
		b.erase(0, 1);
		s = sub(a, b);
	}
	else if (a[0] == '-' && b[0] == '-')
	{
		a.erase(0, 1);
		b.erase(0, 1);
		s = sumduong(a, b);
		s.insert(0, 1, '-');
	}
	else
		s = sumduong(a, b);
	return s;
}
int main()
{
	freopen("input.txt", "r", stdin);
	string a, b, x;
	string s = "";
	string c = "";
	string d = "";
	string e = "";
	getline(cin, a);
	getline(cin, x);
	getline(cin, b);

	for (int i = 0; i < a.length(); i++)
	{
		if ((a[i] >= '0' && a[i] <= '9') || a[i] == '-')
		{
			c += a[i];
		}
	}
	for (int i = 0; i < b.length(); i++)
	{
		if ((b[i] >= '0' && b[i] <= '9') || b[i] == '-')
		{
			d += b[i];
		}
	}
	for (int i = 0; i < x.length(); i++)
	{
		if ((x[i] >= '0' && x[i] <= '9') || x[i] == '-')
		{
			e += x[i];
		}
	}
	if (b == "")
		s = sum(c, e);
	else
		s = sum(c, d);
	cout << s;
	return 0;
}