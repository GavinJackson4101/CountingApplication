#include<iostream>
#include<thread>
using namespace std;
int count = 0;
void countDown()
{
while(count > 0)
{
count--;
cout<<"Count Down: "<<count<<endl;
}
}
void countUp()
{
while(count < 20)
{
count++;
cout<<"Count Up: "<<count<<endl;
}
}
int main()
{
thread t1(countUp);
thread t2(countDown);
t1.join();
t2.join();
}