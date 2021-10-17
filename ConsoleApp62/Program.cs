using System;

namespace Interface
{
    interface IEmployee
    {
        string Name { get; set; }
        int Counter { get; }
    }
    public class Staff:IEmployee
    {
        private String name;
        private int counter;
        public static int NOofEmployee;
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public int Counter
        {
            get { return counter; }
        }
        public Staff()
        {
            counter = ++counter + NOofEmployee;
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            string name;
            Console.Write("직원 수 입력 : ");
            Staff.NOofEmployee = int.Parse(Console.ReadLine());

            Staff my = new Staff();
            Console.Write("신입 직원의 이름을 입력하세요 : ");
            name = Console.ReadLine();
            my.Name = name;

            Console.WriteLine(" [ 직원 정보 ] ");
            Console.WriteLine("직원 정보 : {0}, 직원 이름 : {1}", my.Counter, my.Name);
        }
    }
}