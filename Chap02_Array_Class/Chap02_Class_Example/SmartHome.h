#pragma once
#include <iostream> //input output ���Ի�� >> cout = printf
#include <string>   // ���ڿ�
using namespace std;    // incldue vector ����. std :: vecter :: 1 ��� �Ƚᵵ �� >> std ���̺귯�� namespace ����

// SmartHome
class SmartHome {
private:
    //Ŭ���� ������ (class member variable , attribute, field)
    string owner;       // ���ڿ�
    int temperature;    // ������
    int humidity;
    bool security; // �� ���� ǥ��
public:
    // Ŭ���� �Լ��� (member function, method)
    // ������
    SmartHome(string owner, int temperature, int humidity, bool security) { //�Ű����� parameter
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    //SmartHome(string o, int t, int h, bool sec)
    //  :temperature(t), humidity(h), security(sec) {  
    //  strcpy(owner, o); //�μ� , argument

    //}
    
        
    //�Ҹ���
    ~SmartHome() {}
    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) {       // void >> ��ȯ�� X
        this->security = security;
    }
    string getOwner() {      // ��ȯ�� O , return �Է�
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
    void printStatus() {        //�Է� x ��� x 
        cout << "�� ����: " << this->owner << endl;            // cout << " " <<  ���� enld : �ٹٲ�
        cout << "�µ�: " << this->temperature << "��" << endl;
        cout << "����: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};