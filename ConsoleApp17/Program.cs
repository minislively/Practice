using System;

namespace InterfaceEx
{
    class MainApp
    {
        static void Main(string[] args)
        {
            Person person = new Person();
            Lion lion = new Lion();
            Camel camel = new Camel();

            person.eat();
            lion.eat();
            camel.eat();

            Console.WriteLine();

            EatFunc(person);
            EatFunc(lion);
            EatFunc(camel);
        }
        private static void EatFunc(object obj)
        {
            IAnimal target = obj as IAnimal;
            if(target != null)
            {
                target.eat();
            }
        }
    }
    class Person : IAnimal
    {
        public void eat()
        {
            Console.WriteLine("밥을 먹습니다.");
        }
    }
    class Lion : IAnimal
    {
        public void eat()
        {
            Console.WriteLine("고기를 먹습니다.");
        }
    }
    class Camel
    {
        public void eat()
        {
            Console.WriteLine("풀을 먹습니다.");
        }
    }
    interface IAnimal
    {
        void eat();
    }
}