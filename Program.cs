using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InheritStudent
{
    class Human
    {
        protected string Name;
        protected int Age;
        public Human(string aName, int aAge)
        {
            Name = aName;
            Age = aAge;
        }
        public virtual void intro()
        {
            Console.WriteLine("이름 : " + Name);
            Console.WriteLine("나이 : " + Age);
        }
    }
    class Student : Human
    {
        protected int StNum;
        public Student(string aName, int aAge, int aStNum)
            :base(aName, aAge)
        {
            StNum = aStNum;
        }
        public override void intro()
        {
            base.intro();
            Console.WriteLine("학번 : " + StNum);
        }
        public void Study()
        {
            Console.WriteLine("공부중이다~~");
        }
    }
    class MainApp
    { 
        static void Main(string[] args)
        {
            Student Kim = new Student("김미누", 22, 7542395);
            Kim.intro();
            Kim.Study();
        }
    }
}
