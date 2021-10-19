using System;

namespace My
{
    public class Employee
    {
        public int No;
        public string Name;
        public Employee DeepCopy()
        {
            Employee employee = new Employee();
            employee.Name = Name;
            employee.No = No;
            return employee;
        }
    }
    public class MainApp
    {
        static void Main(string[] args)
        {
            Employee source = new Employee();
            source.Name = "미미";
            source.No = 4;

            Employee target = source.DeepCopy();
            target.Name = "마마";
            target.No = 5;

            Console.WriteLine("{0}의 번호는 {1}이다.",source.Name,source.No);
            Console.WriteLine("{0}의 번호는 {1}이다.",target.Name,target.No);
        }
    }
}