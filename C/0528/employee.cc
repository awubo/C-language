#include"employee.h"


int main()
{

///inputEmployee();
//showEmployee();


        string s="#include employee.h  \ 
                int main(){ string  \ 
                        s=;}";

        cout<<s.length()<<endl;

        vector<string> vec;

        StringSplit(s,20,vec);

        vector<string>::iterator it;

        for(it=vec.begin();it!=vec.end();it++)
                cout<<*it<<endl;



}
