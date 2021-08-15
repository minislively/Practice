using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InterfaceEx
{
    class MainApp
    {
        static void Main(string[] args)
        {
            Person myPerson = new Person();
            Lion myLion = new Lion();
            Camel myCamel = new Camel();

            myPerson.Eat();
            myLion.Eat();
            myCamel.Eat();

            Console.WriteLine();

            MyEatFunc(myPerson);
            MyEatFunc(myLion);
            MyEatFunc(myCamel);
        }
        private static void MyEatFunc(object obj)
        {
            IAnimal target = obj as IAnimal;
            if(target != null)
            {
                target.Eat();
            }
        }
    }
    class Person : IAnimal
    {
        public void Eat()
        {
            Console.WriteLine("밥을 먹는다");
        }
    }
    class Lion : IAnimal
    {
        
        public void Eat()
        {
            Console.WriteLine("사슴을 먹는다");

        }    
    }
    class Camel 
    {
        public void Eat()
        {
            Console.WriteLine("풀을 먹는다");

        }
    }
    interface IAnimal
    {
        void Eat();
    }
}
