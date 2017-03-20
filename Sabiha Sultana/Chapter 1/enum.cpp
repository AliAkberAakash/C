#include<iostream>
int main()
{
    enum Days{sunday,Monday,Tue,Wed,Thu,Fri,Sat};
    Days DayOff;
    int x;
    cout<< "what day would you likeoff(0-6)?";
    cin>>x;DayOfff=Days(x);

    if(DayOff==sunday||DayOff==Sat)
cout<<"\nYour'e already in the weeekends!\n";
elsecout<<"\nOkay, I'll Put it in the vacation day.\n";
return 0;
}
