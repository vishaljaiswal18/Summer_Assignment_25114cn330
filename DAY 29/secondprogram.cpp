#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;

    do {
        cout << "\n1.Display\n2.Sum\n3.Maximum\n4.Minimum\n5.Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                for(int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2: {
                int sum = 0;
                for(int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum;
                break;
            }

            case 3: {
                int max = arr[0];
                for(int i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];
                cout << "Maximum = " << max;
                break;
            }

            case 4: {
                int min = arr[0];
                for(int i = 1; i < n; i++)
                    if(arr[i] < min)
                        min = arr[i];
                cout << "Minimum = " << min;
                break;
            }

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 5);

    return 0;
}