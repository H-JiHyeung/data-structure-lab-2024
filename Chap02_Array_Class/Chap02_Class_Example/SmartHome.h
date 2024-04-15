#pragma once
#include <iostream> //input output 쉽게사용 >> cout = printf
#include <string>   // 문자열
using namespace std;    // incldue vector 생략. std :: vecter :: 1 계속 안써도 됨 >> std 라이브러리 namespace 설정

// SmartHome
class SmartHome {
private:
    //클래스 변수들 (class member variable , attribute, field)
    string owner;       // 문자열
    int temperature;    // 정수형
    int humidity;
    bool security; // 참 거짓 표현
public:
    // 클래스 함수들 (member function, method)
    // 생성자
    SmartHome(string owner, int temperature, int humidity, bool security) { //매개변수 parameter
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    //SmartHome(string o, int t, int h, bool sec)
    //  :temperature(t), humidity(h), security(sec) {  
    //  strcpy(owner, o); //인수 , argument

    //}
    
        
    //소멸자
    ~SmartHome() {}
    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) {       // void >> 반환값 X
        this->security = security;
    }
    string getOwner() {      // 반환값 O , return 입력
        return this->owner;
    }
    int getTemperature() {
        return this->temperature;
    }
    int getHumidity() {
        return this->humidity;
    }
    bool getSecurity() {
        return this->security;
    }
    void printStatus() {        //입력 x 출력 x 
        cout << "집 주인: " << this->owner << endl;            // cout << " " <<  형식 enld : 줄바꿈
        cout << "온도: " << this->temperature << "도" << endl;
        cout << "습도: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};