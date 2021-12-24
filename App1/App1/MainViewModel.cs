using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Text;

namespace App1
{
    public class MainViewModel : INotifyPropertyChanged

    {
        public event PropertyChangedEventHandler PropertyChanged;

        private ObservableCollection<Places> Places;

        public ObservableCollection<Places> places
        {
            get { return Places; }
            set
            {
                Places = value;
                PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("places"));
            }
        }

        public MainViewModel()
        {
            places = new ObservableCollection<Places>();
            addData();
        }
        private void addData()
        {
            places.Add(new Places
            {
                id = 0,
                title = "The beautiful lake",
                country = "Norway",
                imgSource = "https://images.pexels.com/photos/10547452/pexels-photo-10547452.jpeg"
            });
            places.Add(new Places
            {
                id = 0,
                title = "Adventure of snow",
                country = "Nepal",
                imgSource = "https://images.pexels.com/photos/3408353/pexels-photo-3408353.jpeg"
            });
            places.Add(new Places
            {
                id = 0,
                title = "Beach is where life is",
                country = "Malaysia",
                imgSource = "https://images.pexels.com/photos/3608071/pexels-photo-3608071.jpeg"
            });
        }

    }
}
