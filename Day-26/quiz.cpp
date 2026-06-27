#include<iostream>
using namespace std;
int main(){
    cout<<"<==================================>"<<endl;
    cout<<"Welcome to the Quiz Program!"<<endl;
    cout<<"<==================================>"<<endl;
    int score = 0;
    string answer;
    cout<<"Question 1: What is the capital of France?"<<"\n\n";
    cout<<"Your answer: ";
    cin>>answer;
    if(answer == "Paris" || answer == "paris") {
        score++;
        cout<<"Correct!"<<endl;
    }
    else {
        cout<<"Incorrect! The correct answer is Paris."<<endl;
    }
    cout<<"<==================================>"<<endl;
    cout<<"Question 2: What is the largest planet in our solar system?"<<"\n\n";
    cout<<"Your answer: ";
    cin>>answer;
    if(answer == "Jupiter" || answer == "jupiter") {
        score++;
        cout<<"Correct!"<<endl;
    }
    else {
        cout<<"Incorrect! The correct answer is Jupiter."<<endl;
    }
    cout<<"<==================================>"<<endl;
    cout<<"Question 3: Who wrote 'RAMAYANA'?"<<"\n\n";
    cout<<"Your answer: ";
    cin>>answer;
    if(answer == "Valmiki" || answer == "valmiki") {
        score++;
        cout<<"Correct!"<<endl;
    }
    else {
        cout<<"Incorrect! The correct answer is Valmiki."<<endl;
    }
    cout<<"<==================================>"<<endl;
    cout<<"Your final score is: "<<score<<"/3"<<endl;
    return 0;
}