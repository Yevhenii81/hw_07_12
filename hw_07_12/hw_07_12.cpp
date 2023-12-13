#include <iostream>
using namespace std;

class Phone {
private:
    string brand;
    string model;
    int storageSizeGB;
    string displayType;
    bool isSmartphone;

public:

    void MakeCall(string phoneNumber)
    {
        cout << "Calling " << phoneNumber << "...\n";
    }

    void SendMessage(string message)
    {
        cout << "Sending message: " << message << "\n";
    }

    void TakePictures()
    {
        cout << "Taking a photo...\n";
    }

    void InstallApp(string appName)
    {
        cout << "Application installation: " << appName << "\n";
    }

    void PlatMusic()
    {
        cout << "Playing music...\n";
    }

    string GetBrand() const {
        return brand;
    }

    string GetModel() const {
        return model;
    }

    int GetStorageSizeGB() const {
        return storageSizeGB;
    }

    string GetDisplayType() const {
        return displayType;
    }

    bool GetIsSmartphone() const {
        return isSmartphone;
    }

   
    void SetBrand(const string& newBrand) {
        brand = newBrand;
    }

    void setModel(const string& newModel) {
        model = newModel;
    }

    void SetStorageSizeGB(int newSize) {
        storageSizeGB = newSize;
    }

    void SetDisplayType(const string& newDisplayType) {
        displayType = newDisplayType;
    }

    void SetIsSmartphone(bool newValue) {
        isSmartphone = newValue;
    }
};


class Pan {
private:
    string color;
    string brand;
    string tipType;
    bool isClickable;
    string inkType;

public:

    void Write(string text)
    {
        cout << "Writting: " << text << "\n";
    }

    void ChangeColor(string newColor)
    {
        cout << "Changing pen color to: " << newColor << "\n";
    }

    void Click()
    {
        if (isClickable)
        {
            cout << "Clicking the pen...\n";
        }
        else {
            cout << "This pen cannot be clicked\n";
        }
    }

    void TestPen()
    {
        cout << "Testing the pen...\n";
    }

    void RefillInk()
    {
        cout << "Refilling ink...\n";
    }

    string GetColor() const {
        return color;
    }

    string GetBrand() const {
        return brand;
    }

    string GetTipType() const {
        return tipType;
    }

    bool GetIsClickable() const {
        return isClickable;
    }

    string GetInkType() const {
        return inkType;
    }

  
    void SetColor(const string& newColor) {
        color = newColor;
    }

    void SetBrand(const string& newBrand) {
        brand = newBrand;
    }

    void SetTipType(const string& newTipType) {
        tipType = newTipType;
    }

    void SetIsClickable(bool newValue) {
        isClickable = newValue;
    }

    void SetInkType(const string& newInkType) {
        inkType = newInkType;
    }
};


class Laptop {
private:
    string brand;
    string model;
    int ramGB;
    int hardDiskSize;
    float screenSizeInches;

public:

    string GetBrand() const {
        return brand;
    }

    string GetModel() const {
        return model;
    }

    int GetRamGB() const {
        return ramGB;
    }

    int GetHardDiskSize() const {
        return hardDiskSize;
    }

    float GetScreenSizeInches() const {
        return screenSizeInches;
    }

   
    void SetBrand(const string& newBrand) {
        brand = newBrand;
    }

    void SetModel(const string& newModel) {
        model = newModel;
    }

    void SetRamGB(int newRamGB) {
        ramGB = newRamGB;
    }

    void SetHardDiskSize(int newSize) {
        hardDiskSize = newSize;
    }

    void SetScreenSizeInches(float newSize) {
        screenSizeInches = newSize;
    }

    void PowerOn()
    {
        cout << "Powering on the laptop...\n";
    }

    void PowerOff()
    {
        cout << "Shutting down the laptop...\n";
    }

    void OpenApplication()
    {
        cout << "Opening application: ";
    }

    void PlayGame()
    {
        cout << "Playing game: ";
    }

    void InternetCheck()
    {
        cout << "There's an Internet check...\n";
    }
};


class LEOController {
private:
    string model;
    int batteryLevel;
    unsigned long long colorCount;
    const char* manufacturer;
    int numberOfModes;

public:

    void TurnOn()
    {
        cout << "Turning on the LED controller...\n";
    }

    void TurnOff()
    {
        cout << "Turning off the LED controller...\n";
    }

    void ChangeColor(string color)
    {
        cout << "Changing color to " << color << "\n";
    }

    void switchMode(int mode) {
        cout << "Switching to mode" << mode << "\n";
    }

    void changeBrightness(int level) {
        cout << "Changing brightness to level " << level << "\n";
    }


    string GetModel() const {
        return model;
    }

    int GetBatteryLevel() const {
        return batteryLevel;
    }

    unsigned long long GetColorCount() const {
        return colorCount;
    }

    const char* GetManufacturer() const {
        return manufacturer;
    }

    int GetNumberOfModes() const {
        return numberOfModes;
    }

    
    void SetModel(const string& newModel) {
        model = newModel;
    }

    void SetBatteryLevel(int newBatteryLevel) {
        batteryLevel = newBatteryLevel;
    }

    void SetColorCount(unsigned long long newColorCount) {
        colorCount = newColorCount;
    }

    void SetManufacturer(const char* newManufacturer) {
        manufacturer = newManufacturer;
    }

    void SetNumberOfModes(int newNumberOfModes) {
        numberOfModes = newNumberOfModes;
    }
};


class Mouse {
private:
    string brand;
    string model;
    bool isWireless;
    int batteryLevel;
    int numberOfButtons;

public:


    void ClickLeftButton()
    {
        cout << "Left button clicked!\n";
    }

    void ClickRightButton()
    {
        cout << "Right button clicked!\n";
    }

    void scroll(int distance)
    {
        cout << "Scrolling by " << distance << " units\n";
    }

    void selectButtons(int numberOfButtons)
    {
        int buttons = numberOfButtons;
        cout << "Mouse buttons set to " << numberOfButtons;
    }

    bool isWirelessConnected() const {
        return isWireless;
    }


    string GetBrand() const {
        return brand;
    }

    string GetModel() const {
        return model;
    }

    bool GetIsWireless() const {
        return isWireless;
    }

    int GetBatteryLevel() const {
        return batteryLevel;
    }

    int GetNumberOfButtons() const {
        return numberOfButtons;
    }

    
    void SetBrand(const string& newBrand) {
        brand = newBrand;
    }

    void SetModel(const string& newModel) {
        model = newModel;
    }

    void SetIsWireless(bool newValue) {
        isWireless = newValue;
    }

    void SetBatteryLevel(int newBatteryLevel) {
        batteryLevel = newBatteryLevel;
    }

    void SetNumberOfButtons(int newNumberOfButtons) {
        numberOfButtons = newNumberOfButtons;
    }

};

int main()
{

}

