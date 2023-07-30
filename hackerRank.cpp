#include <string>
#include <vector>
#include <iostream>

using namespace std;

int input_output(){
    int axu, ans = 0;
    for(int i = 0; i < 3; ++i){
        cin >> axu;
        ans += axu;
    }
    cout << ans << endl;
    return 0;
}
/*###########################################################################################################*/

int conditional_Statements(){
    vector<string> words = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int axu;
    cin >> axu;
    if(axu > 9)
        cout << "Greater than 9" << endl;
    else
        cout << words[axu - 1] << endl;
        
    return 0;
}

/*###########################################################################################################*/

int foor_Loop(){
    vector<string> words = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int ax1, ax2;
    cin >> ax1;
    cin >> ax2;
    for(int i = ax1; i <= ax2; ++i){
        if(i > 9){
            if(i % 2 == 0)
                cout << "even";
            else
                cout << "odd";
        }else{
            cout << words[i - 1];
        }
        cout << endl;
    }
    return 0;
}

/*###########################################################################################################*/

int functions() {
    int ax, max = -1;
    for(int i = 0; i < 4; ++i){
        cin >> ax;
        if(ax > max)
            max = ax;
    }
    cout << max << endl;
    return 0;
}

/*###########################################################################################################*/

int arrays_Introduction() {
    vector<int> nums(1000);
    int n, i;
    cin >> n;
    for(i = 0; i < n; ++i)
        cin >> nums[i];
    for(i = n - 1; i > 0; --i)
        cout << nums[i] << " ";
    cout << nums[0] << endl;     
    return 0;
}

/*###########################################################################################################*/

int strings() {
	string str1, str2;
    char c1;
    cin >> str1;
    cin >> str2;
    cout << str1.size() << " " << str2.size() << endl;
    cout << str1 + str2 << endl;
    c1 = str1[0];
    str1[0] = str2[0];
    str2[0] = c1;
    cout << str1 << " " << str2 << endl;
    return 0;
}

/*###########################################################################################################*/

class Student{
    private:
        string first_name;
        string last_name;
        int age;
        int standard;
        
    public:
        Student(){
            first_name = "";
            last_name = "";
            age = -1;
            standard = -1;
        }
        
        void set_age(int a){
            age = a;
        }
        void set_standard(int a){
            standard = a;
        }
        void set_first_name(string a){
            first_name = a;
        }
        void set_last_name(string a){
            last_name = a;
        }
        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        string to_string(){
            return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
        }
};

int class_() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

/*###########################################################################################################*/

class Student2{
    private:
        int scores[5];
        int totalScore;
    public:
        Student2(){
            totalScore = 0;
        }
        void input(){
            for(int i = 0; i < 5; ++i){
                cin >> scores[i];
                totalScore += scores[i];
            }
        }
        int calculateTotalScore(){
            return totalScore;
        }
};

int classes_and_Objects() {
    int n;
    cin >> n;
    Student2 *s = new Student2[n];
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    cout << count;
    
    return 0;
}
/*###########################################################################################################*/