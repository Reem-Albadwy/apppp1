#include <iostream>
using namespace std;
int main()
{  //with nested loop
    int arr[200];
    int freq[500+270] = { 0 };
    cout << "enter the length of the array\n";
    int len, ref_value = 0, freq_num;
    cin >> len;
    cout << "enter the elements\n";
    for (int i = 0;i < len;i++) 
        cin >> arr[i];
    for (int i = 0;i < len;i++) {
        for (int j = 0;j < len;j++) {
            if (arr[i] == arr[j])
                freq[i]++;
        }
        if (freq[i] > ref_value) {
            ref_value = freq[i];
            freq_num = arr[i];
        }
    }
    cout << "the most frequently number " << freq_num;
    
}

