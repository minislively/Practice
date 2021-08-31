using System;

namespace My
{
    class Dog
    {
        public string name;
        public string gender;
        public string ownernames;
        public string favorite;

        public void Bark()
        {
            Console.WriteLine("{0} : 멍멍!", name);
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            Dog dog = new Dog();
            dog.name = "미미";
            dog.gender = "여자";
            dog.ownernames = "영희";
            dog.favorite = "공놀이";

            dog.Bark();
            Console.WriteLine("개의 이름 : {0}, 개의 성별 : {1}, 개의 주인이름 : {2}, 개가 가장 좋아하는 것 : {3}", dog.name, dog.gender, dog.ownernames, dog.favorite);
        }
    }
}