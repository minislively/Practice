using System;

namespace CSharps
{
    class Parent
    {
        public virtual void method()
        {
            Console.WriteLine("부모 클래스의 메서드 호출!");
        }
    }
    class Child : Parent
    {
        public override void method()
        {
            Console.WriteLine("자식 클래스의 메서드 호출!");
        }
    }
    class Son : Parent
    {
        public override void method()
        {
            Console.WriteLine("자식 클래스의 메서드 호출!");
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            Parent parent = new Parent();
            parent.method();

            Child child = new Child();
            child.method();

            Son son = new Son();
            son.method();
        }
    }

}
