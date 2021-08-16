using System;

namespace Example
{
    class Example
    {
        public virtual void Print()
        {
            Console.WriteLine("Call Print function");
        }
    }
    class CopyExample1 : Example
    {
        public override void Print()
        {
            Console.WriteLine("Call new Print function");
        }
    }
    class CopyExample2 : Example
    {
        public new void Print()
        {
            Console.WriteLine("Call new Print function");
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            Example clz1 = new CopyExample1();
            clz1.Print();

            Example clz2 = new CopyExample2();
            clz2.Print();

            Console.WriteLine("Press any key...");
            Console.ReadLine();
        }
    }
}