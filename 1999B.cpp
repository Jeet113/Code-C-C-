#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        if((a1>b1 && a2>b2) ||(a1>b2 && a2>b1)) ans++;
        cout<<ans<<endl;
    }
}
using System;

class Points
{
    public int x, y, z;
    public Points(int a, int b, int c)
    {
        x = a; y = b; z = c;
    }

    public Points()
    {
        x = 0; y = 0; z = 0;
    }

    public int distance(Points a,Points c)
    {
        int ans = 0;
        ans=((a.x-c.x)* (a.x - c.x))+ ((a.y - c.y) * (a.y - c.y))+ ((a.z - c.z) * (a.z - c.z));
        return ans;
    }
    public static bool operator <(Points a, Points b)
    {
        Points c = new Points(2, 3, 4);
        int d1 = c.distance(a, c);
        int d2 = c.distance(b, c);
        bool flag= (d2 < d1);
        return flag;
    }

    public static bool operator >(Points a, Points b)
    {
        Points c = new Points(2, 3, 4);
        int d1 = c.distance(a, c);
        int d2 = c.distance(b, c);
        bool flag = (d2 > d1);
        return flag;
    }

    public static bool operator ==(Points a, Points b)
    {
        Points c = new Points(0, 0, 0);
        int d1 = c.distance(a, c);
        int d2 = c.distance(b, c);
        bool flag = (d2 == d1);
        return flag;
    }

    public static bool operator !=(Points a, Points b)
    {
        Points c = new Points(0, 0, 0);
        int d1 = c.distance(a, c);
        int d2 = c.distance(b, c);
        bool flag = (d2 != d1);
        return flag;
    }

    public static bool operator true(Points a)
    {
        
        if (a.x == 0 && a.y == 0 && a.z == 0)
            return true;
        else 
            return false;
    }

    public static bool operator false(Points a)
    {

        if (a.x != 0 || a.y == 0 || a.z == 0)
            return true;
        else
            return false;
    }


}

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Enter the co ordinate of point a");
        int x=int.Parse(Console.ReadLine());
        int y = int.Parse(Console.ReadLine());
        int z = int.Parse(Console.ReadLine());
        Console.WriteLine("Enter the co ordinate of point a");
        int x2 = int.Parse(Console.ReadLine());
        int y2 = int.Parse(Console.ReadLine());
        int z2 = int.Parse(Console.ReadLine());
        Points a = new Points(x, y, z);
        Points b = new Points(x2, y2, z2);
        Points d = new Points(0, 0, 0);

        bool flag = a < b;
        if (flag)
        {
            Console.WriteLine("The point a is further from c than b.");
        }
        else
        {
            Console.WriteLine("The point b is further from c than a.");
        }

        flag = (a == b);
        if (flag) {
            Console.WriteLine("The point a and b are equidistant from c.");
        }
        else
        {
            Console.WriteLine("The point a and b are not equidistant from c.");
        }

        if (a) {
            Console.WriteLine("The point a is at origin");
        }
        else
        {
            Console.WriteLine("The point a is not at the origin");
        }

        if (d)
        {
            Console.WriteLine("The point d is at origin");
        }
        else
        {
            Console.WriteLine("The point d is not at the origin");
        }

    }
}