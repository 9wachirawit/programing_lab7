    #include <iostream>
    using namespace std;
    //Dialog of the first example is given below.
    int main(){
        string nm,mn,bd,x;
        int cd,gr;
        cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
        cout << "?????: "; 
        getline(cin,nm);
        cout << "Fahsai: Wow!!! "<< nm <<" is a really cool name.\n";
        cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
        cout << nm << ": ";
        cin >> cd;
        gr = (cd/10000000)-12;
        cout << "Fahsai: I think you may be GEAR "<<gr<<". I have a free movie ticket for you.\nFahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
        cout << nm << ": ";
        cin.ignore();
        getline(cin,mn);
        cout << "Fahsai: So....which day are you free to go with me?\n";
        cout << nm << ": ";
        getline(cin,bd);
        cout <<"Fahsai: "<<bd<<"....that is OK!!! I'm looking forward to watching "<<mn<<" with you.\n";
        cout << nm << ": ";
        cin >> x;
        cout <<"Fahsai: 555+ see you "<<bd<<". Bye Bye \\(^ ^)/\n";
    }

