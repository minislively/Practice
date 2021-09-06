using System;

namespace Min
{
    class MainApp
    {
        static public void init(ref int num1)
        {
            num1 = 100;
        }
        static void Main(string[] args)
        {
            int num=200;
            init(ref num);

            Console.WriteLine("{0}", num);
        }
    }
}