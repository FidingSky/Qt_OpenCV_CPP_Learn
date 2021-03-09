#include<iostream>
#include<string>

using namespace std;

class animals
{
public:
	int num_eye;
	int num_ear;
};

class human : public animals
{	
public:
	void setEye(int eyes ) {
		this->num_eye = eyes;
	}

	void setEar(int ears) {
		this->num_ear = ears;
	}
	void setEyeandEar(int eye,int ear) {
		setEye(eye);
		setEar(ear);
	}
};

void test(int &get)
{
	get = 100;
}

void test1(int *get)
{
	*get = 200;
}

int main()
{
//	human guy1;
//	guy1.setEyeandEar(2, 2);
//	cout << guy1.num_ear << endl;
//	cout << guy1.num_eye << endl;
//	int a = 5;
//	test(a);
//	cout << a << endl;
	int a = 5;
	test1(&a);
	cout << a << endl;
	return 0;
}