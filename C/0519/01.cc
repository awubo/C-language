#include<iostream>
#include<vector>
using  namespace std;

class CarPart
{
        public:
                CarPart(int id):_id(id)
        {
                cout<<"Make 4 tires of car "<<_id<<endl;
                cout<<"Make engine of car "<<_id<<endl;
                cout<<"-------------------"<<endl;
        }
        private:
                int _id;

};

class Car
{
        Car &Car(const Car & C)
        {
                this->_id=C._id;
                //this->_car=
        }
        public:
        Car(int id):_car(NULL),_id(id)
        {
        
        }
        ~Car()
        {
                if(_car!=NULL)
                {
                        //delete _car;
                        //_car=NULL;
                }

        }

        CarPart *getCar()
        {
                if(_car==NULL)
                {
                        cout<<"getCar"<<_car<<endl;
                        _car=new CarPart(_id);
                }
                return _car;
        }
        private:

        CarPart* _car;
        int _id;
        string _n_cast;
        string _license_tag;
};


int main()
{

        cout<<"start"<<endl;
        vector<Car>vcar;

        for(int i=0;i<2;i++)
        {
                Car temp(i);
                temp.getCar();
                vcar.push_back(temp);
        }
        cout<<"End"<<endl;
        return 0;


}
