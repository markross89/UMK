#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

struct date
{
    int day, month, year;
};

struct location
{
    string streetName, city, postalCode;
    int streetNumber;
};

struct student
{
    string name, surname;
    int idCardNumber;
    date birthday;
    location address;
};

date setDate();
void printDate(date thisDate);
location setLocation();
void printLocation(location thisLocation);
student setStudent();
void printStudent(student thisStudent);
void saveDateToFile(string fileName, date thisDate);
void saveLocationToFile(string fileName, location thisLocation);
void saveStudentToFile(string fileName, student thisStudent);
int compareDates(date date1, date date2);
int readStudents(student tab[], string filename);
void sortStudent(student students[], int studentsLength, string field);
void printStudents(student students[], int studentsLength);
void printStudentsByCity(student students[], int studentsLength, string city);

int main()
{

    // printDate(setDate());
    // printLocation(setLocation());
    // printStudent(setStudent());
    // saveDateToFile("data.txt", setDate());
    // saveLocationToFile("location.txt", setLocation());
    // saveStudentToFile("student.txt", setStudent());
    // date date1 = setDate();
    // date date2 = setDate();
    // cout << compareDates(date1, date2) << endl;

    student students[100];
    int tabSize = readStudents(students, "student.txt");

    //printStudents(students, tabSize);

    //sortStudent(students, tabSize, "address");

    // printStudents(students, tabSize);
    printStudentsByCity(students, tabSize, "topolka");



    return 0;
}

date setDate()
{
    date thisDate;

    cout << "day ->" << endl;
    cin >> thisDate.day;

    cout << "month ->" << endl;
    cin >> thisDate.month;

    cout << "year ->" << endl;
    cin >> thisDate.year;


    return thisDate;
};

void printDate(date thisDate)
{
    printf ("%02d:%02d:%d\n", thisDate.day, thisDate.month, thisDate.year);
};

location setLocation()
{
    location thisLocation;

    cout << "street name ->" << endl;
    cin >> thisLocation.streetName;

    cout << "city ->" << endl;
    cin >> thisLocation.city;

    cout << "postal code ->" << endl;
    cin >> thisLocation.postalCode;

    cout << "street number ->" << endl;
    cin >> thisLocation.streetNumber;

    return thisLocation;
};

void printLocation(location thisLocation)
{
    cout << thisLocation.streetName << " " << thisLocation.streetNumber << ", " << thisLocation.postalCode << ", " << thisLocation.city << endl;
};

student setStudent()
{
    student thisStudent;

    cout << "student name ->" << endl;
    cin >> thisStudent.name;

    cout << "student surname ->" << endl;
    cin >> thisStudent.surname;

    cout << "student id card number ->" << endl;
    cin >> thisStudent.idCardNumber;

    thisStudent.birthday = setDate();
    thisStudent.address = setLocation();

    return thisStudent;
};

void printStudent(student thisStudent)
{
    cout << thisStudent.name << " " << thisStudent.surname << endl;
    cout << thisStudent.idCardNumber << endl;
    printDate(thisStudent.birthday);
    printLocation(thisStudent.address);
};

void saveDateToFile(string filename, date thisDate)
{
    ofstream file(filename, ios::app);
    file << thisDate.day << " " << thisDate.month << " " << thisDate.year << endl;
    file.close();
};

void saveLocationToFile(string filename, location thisLocation)
{
    ofstream file(filename, ios::app);
    file << thisLocation.streetName << " " << thisLocation.streetNumber << " " << thisLocation.postalCode << " " << thisLocation.city << endl;
    file.close();
};

void saveStudentToFile(string filename, student thisStudent)
{
    ofstream file(filename, ios::app);

    file << thisStudent.name << " "
         << thisStudent.surname << " "
         << thisStudent.idCardNumber << " "
         << thisStudent.birthday.day << " "
         << thisStudent.birthday.month << " "
         << thisStudent.birthday.year << " "
         << thisStudent.address.streetName << " "
         << thisStudent.address.streetNumber << " "
         << thisStudent.address.postalCode << " "
         << thisStudent.address.city << endl;

    file.close();
};

int compareDates(date date1, date date2)
{
    if (date1.year > date2.year)
    {
        return 1;
    }
    else if (date1.year < date2.year)
    {
        return -1;
    }
    else
    {
        if (date1.month > date2.month)
        {
            return 1;
        }
        else if (date1.month < date2.month)
        {
            return -1;
        }
        else
        {
            if (date1.day > date2.day)
            {
                return 1;
            }
            else if (date1.day < date2.day)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }
};

int readStudents(student tab[], string filename)
{
    ifstream file(filename);

    int counter = 0;
    if(file.is_open())
    {
        while(file >> tab[counter].name )
        {
            file >> tab[counter].surname
                 >> tab[counter].idCardNumber
                 >> tab[counter].birthday.day
                 >> tab[counter].birthday.month
                 >> tab[counter].birthday.year
                 >> tab[counter].address.streetName
                 >> tab[counter].address.streetNumber
                 >> tab[counter].address.postalCode
                 >> tab[counter].address.city;

            counter++;
        }
    }
    else
    {
        cout << "ERROR - reading file failed!" << endl;
    }

    file.close();

    return counter;
};

void sortStudent(student students[], int studentsLength, string field)
{
    int error = 0;

    for (int j = 0; j < studentsLength; j++)
    {
        for (int i = 0; i < studentsLength - 1; i++)
        {
            if(field.compare("name") == 0)
            {
                if(students[i+1].name < students[i].name)
                {
                    swap(students[i+1], students[i]);
                }
            }
            else  if(field.compare("surname") == 0)
            {
                if(students[i+1].surname < students[i].surname)
                {
                    swap(students[i+1], students[i]);
                }
            }
            else  if(field.compare("idCardNumber") == 0)
            {
                if(students[i+1].idCardNumber < students[i].idCardNumber)
                {
                    swap(students[i+1], students[i]);
                }
            }
            else if(field.compare("birthday") == 0)
            {
                int comp = compareDates(students[i].birthday, students[i+1].birthday);

                if(comp == 1)
                {
                    swap(students[i], students[i+1]);
                }
            }
            else  if(field.compare("address") == 0)
            {
                if(students[i+1].address.city < students[i].address.city)
                {
                    swap(students[i+1], students[i]);
                }
            }
            else
            {
                error = 1;
            }
        }
    }
    if(error)
    {
        cout << "ERROR - field " << field << " do not exist in student structure. Pass a valid field with lower case letters" << endl;
    }
}

void printStudents(student students[], int studentsLength)
{
    for(int i = 0; i < studentsLength; i++)
    {
        printStudent(students[i]);
    }
}

void printStudentsByCity(student students[], int studentsLength, string city)
{
    int counter = 0;

    for (int i = 0; i < studentsLength; i++)
    {
        if(!city.compare(students[i].address.city))
        {
            printStudent(students[i]);
            counter++;
        }
    }
    if (counter == 0)
    {
        cout << "Sorry it looks like we don't have any students living in " << city << endl;
    }
}


