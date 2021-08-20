using System;

namespace My
{
    class Parent
    {
        public int num;

        public Parent()
        {
            Console.WriteLine("부모님 호출");
        }
    }
    class Child : Parent
    {
        public Child(int num)
        {
            this.num = num;
            Console.WriteLine("자식 호출");
        }
        public void DisplayValue()
        {
            Console.WriteLine("num의 값은 {0} 입니다.", num);
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            Child child = new Child(20);

            child.DisplayValue();
        }
    }
}