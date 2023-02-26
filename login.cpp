#include<iostream>
#include<fstream>


using namespace std;
int main()
{

    fstream log;
    string data;
     mofo:
    cout<<"What do you want??? For registration, type 1. For login type 2."<<endl;
    string type;
    getline(cin,type);
    if(type=="1")
    {
        //fstream log;
        log.open("log.txt", ios::out);

        cout<<"Username: ";
        //string data;
        getline(cin,data);
        log<<data<<endl;

        cout<<"Password: ";
        cin>>data;
        cin.ignore();
        log<<data<<endl;
        log.close();

    }
    else if(type=="2")
    {   again:
        cout<<"What is your Username?"<<endl;
        log.open("log.txt", ios::in);
        string arr[2];
        /*string line;*/
        int i=0;
        if(log.is_open())
        {
               while(!log.eof())
               {
                    //string arr[2];
                string line;
                //int i=0;
                getline(log,line);
                arr[i]=line;
                i++;
                /*cout<<arr[1];
                cout<<line;
                log.close();*/
               }
                log.close();
        }

        //cout<<arr[1];
        string usr;
        getline(cin,usr);
        //cout<<usr;
        if(usr==arr[0])
        {
            cout<<"Congratulation Mr. "<<usr<<". Now enter your password."<<endl;
            string pass;
            getline(cin,pass);
            //cout<<arr[1]<<endl;

            if(pass==arr[1])
            {
                cout<<"Correct. You may enter to our dojo."<<endl;
            }
            else
            {
                cout<<"Wrong password. You are trespassing."<<endl;
                system("pause");
                system("cls");
                goto again;


            }
        }
        else
        {
            cout<<"You are not Authorized."<<endl;
            system("pause");
            system("cls");
            goto again;
        }


    }
    else
    {
        cout<<"Are you blind motherFucker. Only type 1 or 2."<<endl;
        cout<<endl;
        system("pause");
        system("cls");
        goto mofo;
    }
return 0;
}
