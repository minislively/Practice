using System;

namespace My
{
    class MainApp
    {
        static void Main(string[] args)
        {
            Person person = new Person();
            Lion lion = new Lion();
            Camel camel = new Camel();

            person.Eat();
            lion.Eat();
            camel.Eat();

            Console.WriteLine();
            MyEatFunc(person);
            MyEatFunc(lion);
            MyEatFunc(camel);
        }
        private static void MyEatFunc(object obj)
        {
            IAnimal target = obj as IAnimal;
            if(target !=null)
            {
                target.Eat();
            }
        }
    }
    class Person:IAnimal
    {
        public void Eat()
        {
            Console.WriteLine("밥을 먹는다.");
        }
    }
    class Lion : IAnimal
    {
        public void Eat()
        {
            Console.WriteLine("고기를 먹는다.");
        }
    }
    class Camel : IAnimal
    {
        public void Eat()
        {
            Console.WriteLine("풀을 먹는다.");
        }
    }
    interface IAnimal
    {
        void Eat();
    }
}