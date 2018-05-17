#include <iostream>
#include <iomanip>
using namespace std;
int t,e,m,a,u;


class table//table outline
{
    public:
    void row()
    {
        int r;
        for(r=1;r<167;r++)
        {
            cout<<"-";
        }
    }
    void column()
    {
        int c;
        for(c=0;c<1;c++)
        {
            cout<<"|";
        }
    }


};

class word//get word to be insert to table
{
    public:
    void test(string const & content)//output any type of text
    {
        cout<<(content);
    }
};

class emp// declare function of space and next line.
{
    public:
    void rest(int)
    {
        cout<<setw(5);
    }
    void rest(double)
    {
        cout<<setw(10);
    }
    void test(int a)
    {
        cout<<setw(a);
    }
    void next(int)//next line
    {
        cout<<endl;
    }
    void next(double)//spacing
    {
        cout<<" ";
    }
};

class day//output of first row
{
    public:
    void fir()//first row function
    {
      emp e;
      table w;
      word q;
      e.next(1.0);//set spacing
      w.row();//call table function
      e.next(1);//next line
      w.column();//call table function
      e.rest(1.0);//set spacing
      q.test("Day");//insert text
      e.rest(1.0);//set spacing
      w.column();//call table function
      w.column();//call table function
      e.rest(1.0);//set spacing
      q.test("8am");//insert text
      e.rest(1.0);//set spacing
      w.column();//call table function
      w.column();//call table function
      e.rest(1.0);//set spacing
      q.test("10am");//insert text
      e.rest(1.0);//set spacing
      w.column();//call table function
      w.column();//call table function
      e.rest(1);//set spacing
      q.test("11am");//insert text
      e.rest(1);//set spacing
      w.column();//call table function
      w.column();//call table function
      e.rest(1);//set spacing
      q.test("12am");//insert text
      e.rest(1);//set spacing
      w.column();//call table function
      w.column();//call table function
      e.rest(1.0);//set spacing
      q.test("1pm");//insert text
      e.rest(1.0);//set spacing
      w.column();//call table function
      w.column();//call table function
      e.test(14);//set spacing
      q.test("3pm");//insert text
      e.test(14);//set spacing
      w.column();//call table function
      w.column();//call table function
      e.rest(1);//set spacing
      q.test("4pm");//insert text
      e.rest(1);//set spacing
      w.column();//call table function
      w.column();//call table function
      e.rest(1);//set spacing
      q.test("5pm");//insert text
      e.rest(1);//set spacing
      w.column();//call table function
      w.column();//call table function
      e.rest(1);//set spacing
      q.test("6pm");//insert text
      e.test(4);//set spacing
      w.column();//call table function
    }
};

class mon
{
    public:
    void sec()
    {
        //row 1
        emp e;
        table t;
        word q;
        e.next(1);
        e.next(1.0);//set spacing
        t.row();//call table function
        e.next(1);//next line
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(13);//set spacing
        q.test("CSN 3442");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(13);//set spacing
        q.test("CSN 3442");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(24);//set spacing
        q.test("CSS 3313");//insert text
        e.test(15);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);//set spacing
        t.column();//call table function

        //row2
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(17);//set spacing
        q.test("Internetworking");//insert text
        e.next(1.0);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(17);//set spacing
        q.test("Internetworking");//insert text
        e.next(1.0);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(39);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);//set spacing
        t.column();//call table function

        //row3
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(15);//set spacing
        q.test("Technology");//insert text
        e.rest(1);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(15);//set spacing
        q.test("Technology");//insert text
        e.rest(1);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(30);//set spacing
        q.test("Multimedia Technology");//insert text
        e.test(9);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);//set spacing
        t.column();

        //row 4
        e.next(1);
        t.column();
        e.rest(1.0);//set spacing
        q.test("Monday");//insert text
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(13);//set spacing
        q.test("LECTURE");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(14);//set spacing
        q.test("TUTORIAL");//insert text
        e.rest(1);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(25);//set spacing
        q.test("LECTURE");
        e.test(14);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);//set spacing
        t.column();//call table function

        //row 5
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(12);//set spacing
        q.test("Lab 4");//insert text
        e.test(8);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(12);//set spacing
        q.test("Lab 4");//insert text
        e.test(8);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(24);//set spacing
        q.test("Lab 3");//insert text
        e.test(15);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);//set spacing
        t.column();//call table function
        //row 6
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(12);//set spacing
        q.test("Dr. Alhamza Munther");//insert text
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(12);//set spacing
        q.test("Dr. Alhamza Munther");//insert text
        t.column();//call table function
        t.column();//call table function
        e.test(28);//set spacing
        q.test("Yiiong Siew Ping");//insert text
        e.test(11);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);//set spacing
        t.column();//call table function
        }
};

class tues
{
    public:
    void thi()
    {
      emp e;
      table t;
      word q;
      e.next(1);
      //e.next(1.0);//set spacing
      t.row();//call table function
      e.next(1);
      t.column();//call table function
      e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(13);//set spacing
        q.test("CSS 3533");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function

        e.test(21);//set spacing
        q.test("CSS 3323");//insert text
        e.test(7);//set spacing
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function

        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function

        e.test(13);//set spacing
        q.test("CSN 3122");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function

        e.test(60);//set spacing
        t.column();//call table function

        //row2
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(18);//set spacing
        q.test("Operating System");//insert text
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(28);//set spacing
        q.test("Database Development and");//insert text
        e.test(3);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        e.test(17);//set spacing
        q.test("Data Structure");//insert text
        e.next(1.0);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(60);//set spacing
        t.column();//call table function

        //row3
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        q.test("Application");//insert text
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        e.test(15);//set spacing
        q.test("and Algorithms");//insert text
        e.rest(1);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(60);//set spacing
        t.column();//call table function

        //row 4
        e.next(1);
        t.column();//call table function
        e.rest(1.0);//set spacing
        q.test("Tuesday");//insert text
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(13);//set spacing
        q.test("LECTURE");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(19);//set spacing
        q.test("LECTURE");//insert text
        e.test(12);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(14);//set spacing
        q.test("TUTORIAL");//insert text
        e.rest(1);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(60);//set spacing
        t.column();//call table function

        //row 5
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(12);//set spacing
        q.test("R923");//insert text
        e.test(8);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(17);//set spacing
        q.test("R223");//insert text
        e.test(14);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        e.test(12);//set spacing
        q.test("Lab 3");//insert text
        e.test(8);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(60);//set spacing
        t.column();//call table function

        //row 6
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(15);//set spacing
        q.test("Loh Chee Wyai");//insert text
        e.rest(1);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(26);//set spacing
        q.test("Ahmad Fadli bin Saad");//insert text
        e.rest(1);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(15);//set spacing
        q.test("Chew Kim Mey");//insert text
        e.rest(1);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(60);//set spacing
        t.column();//call table function
        e.next(1);//set spacing
        t.row();//call table function

    }
};

class wed
{
    public:
    void forth()
    {
        emp e;
        table t;
        word q;
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        q.test("CSS 3133");//insert text
        e.test(10);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(13);//set spacing
        q.test("CSS 3533");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(18);//set spacing
        q.test("CSS 3122");//insert text
        e.test(10);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);//set spacing
        t.column();//call table function

        //row2
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(30);//set spacing
        q.test("Object Oriented Programming");//insert text

        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(17);//set spacing
        q.test("Operating Systems");//insert text
        e.next(1.0);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(25);//set spacing
        q.test("Data Structure and");//insert text
        e.next(1.0);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);
        t.column();//call table function

        //row3
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(31);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(15);//set spacing
        q.test("Technology");//insert text
        e.rest(1);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        q.test("Algorithms");//insert text
        e.test(8);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);
        t.column();//call table function

        //row 4
        e.next(1);
        t.column();//call table function
        e.rest(1.0);//set spacing
        q.test("Wednesday");//insert text
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        q.test("LECTURE");//insert text
        e.test(7);//set spacing
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(14);//set spacing
        q.test("TUTORIAL");//insert text
        e.rest(1);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(18);//set spacing
        q.test("LECTURE");//insert text
        e.test(10);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);
        t.column();//call table function

        //row 5
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        q.test("Lab 4");//insert text
        e.rest(1.0);//set spacing
        e.rest(1.0);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(12);//set spacing
        q.test("Lab 3");//insert text
        e.test(8);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(16);//set spacing
        q.test("R923");//insert text
        e.test(12);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);
        t.column();//call table function
        //row 6
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(25);//set spacing
        q.test("S.M. Anli Sherine");//insert text
        e.test(6);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(15);//set spacing
        q.test("Loh Chee Wyai");//insert text
        e.rest(1);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        q.test("Chew Kim Mey");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(9);
        t.column();//call table function
    }
};

class thurs
{
public:
    void fif()
    {
     emp e;
      table t;
      word q;
      e.next(1);
      t.row();//call table function
      e.next(1);
      t.column();//call table function
      e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(13);//set spacing
        q.test("CSS 3313");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function

        e.test(21);//set spacing
        q.test("CSS 3133");//insert text
        e.test(7);//set spacing
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function

        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function

        e.test(13);//set spacing
        q.test("CSN 3223");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function

        e.test(60);//set spacing
        t.column();//call table function

        //row2
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(14);//set spacing
        q.test("Multimedia");//insert text
        e.rest(6);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(30);//set spacing
        q.test("Object Oriented Programming");//insert text
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        e.test(13);//set spacing
        q.test("Calculus");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(60);//set spacing
        t.column();//call table function

        //row3
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(14);//set spacing
        q.test("Technology");//insert text
        e.rest(6);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(31);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(60);//set spacing
        t.column();//call table function

        //row 4
        e.next(1);
        t.column();//call table function
        e.rest(1.0);//set spacing
        q.test("Thursday");//insert text
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(13);//set spacing
        q.test("TUTORIAL");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(19);//set spacing
        q.test("TUTORIAL");//insert text
        e.test(12);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(14);//set spacing
        q.test("LECTURE");//insert text
        e.rest(1);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(60);//set spacing
        t.column();//call table function

        //row 5
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(12);//set spacing
        q.test("Lab 3");//insert text
        e.test(8);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(17);//set spacing
        q.test("Lab 4");//insert text
        e.test(14);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        e.test(12);//set spacing
        q.test("R922");//insert text
        e.test(8);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(60);//set spacing
        t.column();//call table function

        //row 6
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(18);//set spacing
        q.test("Yiiong Siew Ping");//insert text
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(23);//set spacing
        q.test("Ting Huong Yong");//insert text
        e.test(8);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(18);//set spacing
        q.test("Yiiong Siew Ping");//insert text
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(60);//set spacing
        t.column();//call table function
        e.next(1.0);//set spacing
        e.next(1);
        t.row();//call table function
    }
};

class fri
{
public:
    void six()
    {
        //row 1
      emp e;
      table t;
      word q;
      e.next(1);
      t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        q.test("CSS 3323");//insert text
        e.test(7);//set spacing
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(49);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(13);//set spacing
        q.test("CSN 3223");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        //row2
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(28);//set spacing
        q.test("Database Development and");//insert text
        e.test(3);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(49);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        e.test(13);//set spacing
        q.test("Calculus");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function

        //row3
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(21);//set spacing
        q.test("Application");//insert text
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(49);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        //row5
        e.next(1);
        t.column();//call table function
        e.rest(1.0);//set spacing
        q.test("Friday");//insert text
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        q.test("TUTORIAL");//insert text
        e.test(11);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(49);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        e.test(13);//set spacing//call table function
        q.test("TUTORIAL");//insert text
        e.test(7);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        //row6
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        q.test("Lab 3");//insert text
        e.rest(1.0);//set spacing
        e.rest(1.0);//set spacing
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(49);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        e.test(12);//set spacing
        q.test("R921");//insert text
        e.test(8);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        //row7
        e.next(1);
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(20);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(26);//set spacing
        q.test("Ahmad Fadli bin Saad");//insert text
        e.rest(1);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(49);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.test(18);//set spacing
        q.test("Yiiong Siew Ping");//insert text
        e.next(1.0);//set spacing
        t.column();//call table function
        t.column();//call table function
        e.rest(1.0);//set spacing
        t.column();//call table function
        e.next(1);
        t.row();//call table function


    }
};



int main ()
{
 day d;//declare class object
 d.fir();//call class function
 mon m;//declare class object
 m.sec();//call class function
 tues u;//declare class object
 u.thi();//call class function
 wed w;//declare class object
 w.forth();//call class function
 thurs h;//declare class object
 h.fif();//call class function
 fri f;//declare class object
 f.six();//call class function
}

