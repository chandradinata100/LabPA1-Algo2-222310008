#include <iostream>
#include <vector>
using namespace std;

const int A = 100;

int main() {
    int x;
    int cost[A][A];
    int tambahcost[A];
    int temp;
    int value;
    int y = 0;

    cout << "Silahkan input jumlah kota: ";
    cin >> x;

    cout << "|-----Nilai Cost Matrix-----| " << endl;

    for (int S = 0; S < x; S++) {
        cout << "Cost element matriks ke - " << S + 1 << endl;
        for (int T = 0; T < x; T++) {
            cin >> cost[S][T];
        }
    }

    cout << "Cost List:" << endl;

    for (int S = 0; S < x; S++) {
        for (int T = 0; T < x; T++) {
            cout << cost[S][T] << " ";
        }
        cout << endl;
    }
    cout << "Jarak tempuh terpendek adalah: ";

    for (int S = 0; S < x; S++) {
        tambahcost[S] = 0;
        for (int T = 0; T < x; T++) {
            tambahcost[S] += cost[S][T];
        }
    }
    cout << endl;

    for (int S = 0; S < x; S++) {
        value = 0;
        for (int T = 0; T < x; T++) {
            if (tambahcost[S] > tambahcost[T]) {
                value++;
            }
        }
        if (value == y) {
            if (y < x) {
                cout << S + 1 << " ---> ";
            } else {
                cout << S + 1 << endl;
            }
            y++;
            S = -1;
        }
    }

    for (int S = 0; S < x; S++) {
        for (int T = 0; T < x - 1; T++) {
            if (tambahcost[T] > tambahcost[T + 1]) {
                temp = tambahcost[T];
                tambahcost[T] = tambahcost[T + 1];
                tambahcost[T + 1] = temp;
            }
        }
    }

    cout << "Minimum Cost: " << tambahcost[0] << endl;
    return 0;
}
