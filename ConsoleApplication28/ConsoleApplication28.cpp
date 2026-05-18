#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <time.h>
#include <fstream>
using namespace std;
/*class Vehicle {
protected:
    string type;
    string speed;
    string sound;
public:
    virtual string getType() const = 0;
    virtual string getSpeed() const = 0;
    virtual string getsound() const = 0;
};

class Car : public Vehicle {
public:
    Car() {
        type = "Lev";
        speed = "EDU";
        sound = "RAAAAAAAAAAAAA";
    }
    string getType() const override {
        return type;
    }
    string getSpeed() const override {
        return speed;
    }
    string getsound() const override {
        return sound;
    }
};

class Bike : public Vehicle {
public:
    Bike() {
        type = "CHERT";
        speed = "EDU";
        sound = "kuku";
    }
    string getType() const override {
        return type;
    }
    string getSpeed() const override {
        return speed;
    }
    string getsound() const override {
        return sound;
    }
};

class Bicycle : public Vehicle {
public:
    Bicycle() {
        type = "Арсений";
        speed = "EDU";
        sound = "CЛЫШЬ ТЫ КОГО ЖИВОТНЫМ НАЗВАЛ?!?!?!";
    }
    string getType() const override {
        return type;
    }
    string getSpeed() const override {
        return speed;
    }
    string getsound() const override {
        return sound;
    }
};

void saveVehiclesToFile(const vector<Vehicle*>& vehicles) {
    ofstream outFile("vehicles.txt");
    for (const auto& vehicle : vehicles) {
        outFile << "   Kto - " << vehicle->getType()
            << "   Chtohavet? " << vehicle->getSpeed()
            << "   Anu podday gazu " << vehicle->getsound() << endl;
    }
    outFile.close();
}

void addVehicle(vector<Vehicle*>& vehicles) {
    int choice;
    cout << "Выберите тип животного для добавления:\n";
    cout << "1. Lev\n2. CHERT\n3. Арсений\n";
    cout << "Введите номер: ";
    cin >> choice;

    Vehicle* newVehicle = nullptr;
    switch (choice) {
    case 1:
        newVehicle = new Car();
        break;
    case 2:
        newVehicle = new Bike();
        break;
    case 3:
        newVehicle = new Bicycle();
        break;
    default:
        cout << "Неверный выбор!\n";
        return;
    }

    vehicles.push_back(newVehicle);
    cout << "Зверь добавлено!\n";
}

int main() {
    setlocale(LC_ALL, "ru");
    vector<Vehicle*> vehicles;
    vehicles.push_back(new Car());
    vehicles.push_back(new Bike());
    vehicles.push_back(new Bicycle());

    int numVehicles;
    cout << "Сколько новых животных вы хотите добавить? ";
    cin >> numVehicles;

    for (int i = 0; i < numVehicles; ++i) {
        addVehicle(vehicles);
    }

    saveVehiclesToFile(vehicles);

    for (auto vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}*/
/*void readWithGet(const string& filename) {
    ifstream file(filename);
    char ch;

    if (file.is_open()) {
        cout << "Reading with get():\n";
        while (file.get(ch)) {
            cout << ch;
        }
        file.close();
    }
    else {
        cerr << "Unable to open file.\n";
    }
}

void readWithEof(const string& filename) {
    ifstream file(filename);
    string line;

    if (file.is_open()) {
        cout << "Reading with eof():\n";
        while (!file.eof()) {
            line = "";
            file >> line;

            cout << line << endl;
        }
        file.close();
    }
    else {
        cerr << "Unable to open file.\n";
    }
}

void readWithGetLine(const string& filename) {
    ifstream file(filename);
    string line;

    if (file.is_open()) {
        cout << "Reading with getline():\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cerr << "Unable to open file.\n";
    }
}

int main() {
    const string filename = "MyFile.txt";
    int choice;

    cout << "Vibery:\n";
    cout << "1. Use get()\n";
    cout << "2. Use eof()\n";
    cout << "3. Use getline()\n";
    cout << "Enter your choice ( 1 / 2 / 3 ): ";
    cin >> choice;

    switch (choice) {
    case 1:
        readWithGet(filename);
        break;
    case 2:
        readWithEof(filename);
        break;
    case 3:
        readWithGetLine(filename);
        break;
    default:
        cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
        break;
    }

    return 0;
}*/
/*class Sentence {
public:
    string word1;
    string word2;
    string word3;

    Sentence() : word1(""), word2(""), word3("") {}

    Sentence(string w1, string w2, string w3) : word1(w1), word2(w2), word3(w3) {}

    void Print() const {
        cout << "Предложение: " << word1 << " " << word2 << " " << word3 << endl;
    }

    string Serialize() const {
        return word1 + "\n" + word2 + "\n" + word3 + "\n";
    }

    static Sentence Deserialize(istream& in) {
        Sentence s;
        getline(in, s.word1);
        getline(in, s.word2);
        getline(in, s.word3);
        return s;
    }
};

int main() {
    setlocale(LC_ALL, "ru");

    string path = "sentences.bin";
    Sentence sentences[3];

    for (int i = 0; i < 3; ++i) {
        string d, g, o;
        cout << "Введите 3 слова для предложения " << (i + 1) << ": ";
        cin >> d >> g >> o;
        sentences[i] = Sentence(d, g, o);
    }

    ofstream fout(path, ios::binary);
    if (!fout) {
        cerr << "Ошибка доступа к файлу!" << endl;
        return 1;
    }

    for (const auto& sentence : sentences) {
        fout << sentence.Serialize();
    }

    fout.close();

    ifstream fin(path, ios::binary);
    if (!fin) {
        cerr << "Ошибка доступа к файлу!" << endl;
        return 1;
    }

    cout << "Считанные предложения:" << endl;
    for (int i = 0; i < 3; ++i) {
        Sentence s = Sentence::Deserialize(fin);
        s.Print();
    }

    fin.close();
    return 0;
}*/
/*int main() {
    setlocale(LC_ALL, "ru");
    vector<int> mass{ 4,8,1,0,3,52 };
    vector<int> mass1{ 1,2,3,4,5 };
    vector<int> mass3;
    int gg = 0;
    int y;
    int w;
    if (mass.size() != mass1.size()) {
        cout << "Размеры массивов не совпадают!" << endl;
        cout << "выбире 1 - чтобы убавить 1вый масси 2 - чтобы добавить цифру во 2ой 3 - чтобы остановить программу" << endl;
        cin >> y;
        if (y == 3) {
            cout << "программа остановлена" << endl;
            return 0;
        }
        if (y == 2) {
           
            
            while(true){
                cout << "какую цифру вы хотите добавить нажмите 0 чтобы остановить" << endl;
                cin >> w;
            mass1.push_back(w);
            if (w == 0) {
                break;
            }
        }
        if (y == 1) {
            while (true) {
                cout << "цифра убрана" << endl;
                mass.pop_back();
            }
        }
    }
    for (int i = 0; i < mass.size(); i++) {
        gg = mass[i] + mass1[i];
        mass3.push_back(gg); 
    }
    cout << "Результат сложения массивов:" << endl;
    for (int i = 0; i < mass3.size(); i++) {
        cout << "массив номер - "<< i << " - "  << mass3[i] << endl;
    }

    return 0;
}*/
/*int main() {
    setlocale(LC_ALL, "ru");
    
    
       

        vector<int> row(9); 
        vector<int> column(9); 

        
        for (int i = 0; i < 9; i++) {
            column[i] = i + 1;
        }

       
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                row[j] = column[i] * (j + 1); 
                cout << row[j] << " \t" ; 
            }
            cout << endl; 
        }

        return 0;
    }*/
class Student {
public:
    string name;
    int age;
    ofstream file;
    
    Student(string n, int a) : name(n), age(a) {}

    
    void displayInfo() const {
        cout << "Имя: " << name << ", Возраст: " << age << endl;
    }
    void writeToFile(ofstream& file) const {
        file << "Имя: " << name << ", Возраст: " << age << endl;
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    vector<Student> students;
    int r, u;
    string gg;
    students.push_back(Student("Иван", 20));
    students.push_back(Student("Данлопёс", 22));
    students.push_back(Student("Алан-Удэ", 21));
    while (true) {
        cout << "Добавить - 1, удалить - 2, показать всех студентов - 3, запись в файл-4, выход - 5";
        cin >> r;
        if (r == 1) {
            cout << "Введите имя ";
            cin >> gg;
            cout << "Введите возраст ";
            cin >> u;
            students.push_back(Student(gg, u));
        }
        if (r == 2) {
            students.pop_back();
        }
        if (r == 3) {
            for (int i = 0; i < students.size(); i++) {
                students[i].displayInfo();
            }
            
               
            }
           if (r == 4) {
                ofstream outFile("students.txt");
                if (outFile.is_open()) {
                    for (int i = 0; i < students.size(); i++) {
                        students[i].writeToFile(outFile);
                    }
                    outFile.close();
                }
        }
        if (r == 5) {
                    return 1 ;
                }
    }
        return 0;
    
}