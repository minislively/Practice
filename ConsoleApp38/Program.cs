using System;

namespace BasicClass
{
    class Dog
    {
        public string Name;
        public string color;

        public void Meow()
        {
            Console.WriteLine("{0} : 멍멍", Name);
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            Dog mini = new Dog();
            mini.color = "갈색";
            mini.Name = "미니";
            Console.WriteLine("{0} : {1}", mini.color, mini.Name);

            Dog bibi = new Dog();
            bibi.color = "검은색";
            bibi.Name = "비비";
            Console.WriteLine("{0} : {1}", bibi.color, bibi.Name);
        }
    }
}