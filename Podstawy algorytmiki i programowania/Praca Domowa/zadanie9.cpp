#include <iostream>
#include <cstring>
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
    char streetName[20], city[20], postalCode[20];
    int streetNumber;
};

struct student
{
    char name[20], surname[20];
    int idCardNumber;
    date birthday;
    location address;
};

date setDate();
location setLocation();
student setStudent();
void printDate(date thisDate);
void printLocation(location thisLocation);
void printStudent(student thisStudent);
void saveDateToFile(string fileName, date thisDate);
void saveLocationToFile(string fileName, location thisLocation);
void saveStudentToFile(string fileName, student thisStudent);
void printStudents(student students[], int studentsLength);
void printLocations(location locations[], int locationsLength);
int getLocationsFromFile(string filename, location Locations[]);
int getStudentsFromFile(string filename, student students[]);
int compareDates(date date1, date date2);
void sortStudent(student students[], int studentsLength, string field);
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

    // location locations[100];
    // int locationsSize = getLocationsFromFile("location.txt", locations);
    // printLocations(locations, locationsSize);

     student students[100];
     int tabSize = getStudentsFromFile("student.txt", students);
    // printStudents(students, tabSize);

    // sortStudent(students, tabSize, "surname");

    // printStudents(students, tabSize);
     printStudentsByCity(students, tabSize, "leeds");



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
    string stree, cit, postc;

    cout << "street name ->" << endl;
    cin >> stree;
    strcpy(thisLocation.streetName, stree.c_str());


    cout << "city ->" << endl;
    cin >> cit;
    strcpy(thisLocation.city, cit.c_str());


    cout << "postal code ->" << endl;
    cin >> postc;
    strcpy(thisLocation.postalCode, postc.c_str());

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
    string name, surname, idCardNumber;

    cout << "student name ->" << endl;
    cin >> name;
    strcpy(thisStudent.name, name.c_str());

    cout << "student surname ->" << endl;
    cin >> surname;
    strcpy(thisStudent.surname, surname.c_str());

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
    ofstream file(filename, ios::app | ios::binary);
    if(file)
    {
        file.write(reinterpret_cast<char*>(&thisDate), sizeof(thisDate));
        file.close();
    }
    else
    {
        cout << "ERROR - file could not be opened!" << endl;
    }
};

void saveLocationToFile(string filename, location thisLocation)
{
    ofstream file(filename, ios::app | ios::binary);
    if(file)
    {
        file.write(reinterpret_cast<char*>(&thisLocation), sizeof(thisLocation));
        file.close();
    }
    else
    {
        cout << "ERROR - file could not be opened!" << endl;
    }
};

int getLocationsFromFile(string filename, location locations[])
{
    location thisLocation;
    int counter = 0;

    int length;
    ifstream file(filename, ios::binary);

    file.seekg(0, ios::end);
    length = (int) file.tellg();
    file.seekg(0, ios::beg);

    if(file)
    {
        while(file.tellg() < length)
        {
            file.read(reinterpret_cast<char*>(&thisLocation), sizeof(location));
            locations[counter++] = thisLocation;
        }
        file.close();
    }
    else
    {
        cout << "ERROR - file could not be opened!" << endl;
    }
    return counter;
};

void saveStudentToFile(string filename, student thisStudent)
{
    ofstream file(filename, ios::app | ios::binary);

    if(file)
    {
        file.write(reinterpret_cast<char*>(&thisStudent), sizeof(thisStudent));
        file.close();
    }
    else
    {
        cout << "ERROR - file could not be opened!" << endl;
    }
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

int getStudentsFromFile(string filename, student students[])
{
    student newStudent;
    int length;
    int counter = 0;

    ifstream file(filename, ios::binary);

    file.seekg(0, ios::end);
    length = (int) file.tellg();
    file.seekg(0, ios::beg);

    if(file)
    {
        while(file.tellg() < length)
        {
            file.read(reinterpret_cast<char*>(&newStudent), sizeof(student));
            students[counter++] = newStudent;
        }

        file.close();
    }
    else
    {
        cout << "ERROR - file could not be opened!" << endl;
    }
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
                string name1 = students[i].name;
                string name2 = students[i+1].name;
                if(name1 < name2)
                {
                    swap(students[i+1], students[i]);
                }
            }
            else  if(field.compare("surname") == 0)
            {
                string surname1 = students[i].surname;
                string surname2 = students[i+1].surname;
                if(surname2 < surname1)
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
                string city1 = students[i].address.city;
                string city2 = students[i+1].address.city;
                if(city2 < city1)
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
        cout << endl;
    }
}

void printLocations(location locations[], int locationsLength)
{
    for (int i = 0; i< locationsLength; i++)
    {
        printLocation(locations[i]);
        cout << endl;
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


