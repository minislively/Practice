using System;

namespace My
{
    class Parent
    {
        public int num;

        public Parent()
        {
            Console.WriteLine("부모 클래스의 생성자가 호출되었습니다.");
        }
    }
    class Child : Parent
    {
        public Child (int num)
        {
            this.num = num;
            Console.WriteLine("자식 클래스의 생성자가 호출되었습니다.");
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
            Child cd = new Child(20);

            cd.DisplayValue();
        }
    }
}