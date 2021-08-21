using System;

namespace My
{
    class Parent
    {
        public virtual void A()
        {
            Console.WriteLine("부모 클래스 A() 메서드 호출");
        }
    }
    class Child : Parent
    {
        public override void A()
        {
            Console.WriteLine("자식 클래스(Child)의 A() 메서드 호출");
        }
    }
    class Son : Parent
    {
        public override void A()
        {
            Console.WriteLine("자식 클래스(Son)의 A() 메서드 호출");
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            Parent parent = new Parent();
            parent.A();

            Child child = new Child();
            child.A();

            Son son = new Son();
            son.A();
        }
    }
    

}