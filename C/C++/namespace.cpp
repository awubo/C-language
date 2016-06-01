#include<iostream>
#include<string>

using namespace std;

namespace wubo{
class T{
	int t;
	public:
	T(int t=0){this->t=t;}
	void show()
	{
		cout<<t<<endl;
	}
};

}
int main()
{
	using namespace wubo;
	T t;

	t.show();

}
