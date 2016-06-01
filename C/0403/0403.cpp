#include<iostream>
using namespace std;

class AnimalOfLand
{
	public:
		void can()
		{
			cout<<"run"<<endl;
		}

};


class AnimalOfWater
{
	public:
		void can()
		{
			cout<<"swim"<<endl;
		}
};

class AnimalOfLiangQi:public AnimalOfLand,public AnimalOfWater
{
};

int main()
{
	AnimalOfLiangQi A;

	A.AnimalOfLand::can();
	A.AnimalOfWater::can();


}
