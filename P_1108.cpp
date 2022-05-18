//
// Created by athee on 18-05-2022.
//
#include <iostream>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        for(int i = 0; i < address.length(); i++)
        {
            if( address[i] == '.' )
            {
                str += "[.]";
            }
            else
            {
                str += address[i];
            }
        }
        return str;
    }
};

int main()
{
    Solution obj;
    string address;
    cout << "Please provide your input address: \n";
    cin >> address;
    cout << "Output is \n" + obj.defangIPaddr(address);
}