using System;

namespace Min
{
    public class MyClass
    {
        private string name = "Mini";

        public string Name
        {
            get
            {
                return name;
            }
            set
            {
                name = value;
            }
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            MyClass mc = new MyClass();
            Console.WriteLine("mc.Name : {0}", mc.Name);

            mc.Name = "Bibi";
            Console.WriteLine("mc.Name : {0}", mc.Name);
        }
    }
}