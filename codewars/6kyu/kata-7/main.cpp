#include <iostream>
#include <string>

std::string createPhoneNumber(const int arr[10])
{
    /*
    Purpose:
        converts an integer array into a phone number
    Pre-conditions:
        an integer array with 10 values
    Post-conditions:
        none
    Returns:
        a string  styled "(555) 555-5555"
    */
    // create a string to hold the phone number
    std::string phoneNumber{"("};

    // add the area code to the phone number
    for (int i = 0; i < 3; i++)
    {
        phoneNumber += std::to_string(arr[i]);
    }
    phoneNumber += ") ";

    // add the first three digits of the phone number
    for (int i = 3; i < 6; i++)
    {
        phoneNumber += std::to_string(arr[i]);
    }
    phoneNumber += "-";

    // add the last four digits of the phone number
    for (int i = 6; i < 10; i++)
    {
        phoneNumber += std::to_string(arr[i]);
    }

    return phoneNumber;
}

int main()
{
    const int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string value = createPhoneNumber(arr);
    std::cout << value << '\n';
}