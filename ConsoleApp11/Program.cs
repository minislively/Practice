using System;

namespace Example
{
    interface IATypeInterface
    {
        string GetATypeName();
        void Print();
    }
    interface IBTypeInterface
    {
        string GetBTypeName();
        void Print();
    }
    class Example:IATypeInterface,IBTypeInterface
    {
        public string GetATypeName()
        {
                return "A Example";
        }
        public string GetBTypeName()
        {
            return "B Example";
        }
        public void Print()
        {
            Console.WriteLine("Example - GetATypeName - " + GetATypeName());
            Console.WriteLine("Example - GetBTypeName - " + GetBTypeName());
        }
    }
    class AExample : IATypeInterface
    {
        public string GetATypeName()
        {
            return "A - AExample";
        }
        public void Print()
        {
            Console.WriteLine("AExample - GetATypeName - " + GetATypeName());

        }
    }
    class BExample : IBTypeInterface
    {
        public string GetBTypeName()
        {
            return "B - BExample";
        }
        public void Print()
        {
            Console.WriteLine("BExample - GetBTypeName - " + GetBTypeName());

        }
    }
    class MainApp
    {
        public static IATypeInterface GetATypeClass(bool type)
        {
            if (type)
            {
                return new Example();
            }
            else
            {
                return new AExample();
            }
        }
        public static void Main(string[] args)
        {
            IATypeInterface aType = GetATypeClass(true);

            aType.Print();

            Console.WriteLine("Press any key...");
            Console.ReadLine();
        }
    }
}