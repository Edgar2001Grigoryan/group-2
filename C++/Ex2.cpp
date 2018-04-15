#include <iostream>
#include <cstdlib>
using namespace std;



int main () {

    int x;
    cin>> x;
    int arr[x];
    srand(time(0));
    for (int i = 0; i < x; i++){
        arr[i] = (-10) + rand() % 20;
        cout<< arr[i] << " ";
    }
    cout << "\n\n";
    long gumar = 0;
    long gumarverj = 0;
    int skizb;
    int verj;
    int iterator=0;
    for (int dirq=0; dirq < x; dirq++) {
        for (int qanak=0; qanak < (x-dirq); qanak++){
            gumar=0;
            int k;
            k = qanak;
            iterator++;
            while(k >= 0){
//                iterator++;
                gumar+=arr[dirq+k];
                k--;
            }
            if(gumar > gumarverj){
                gumarverj = gumar;
                skizb = dirq + 1;
                verj = dirq+qanak + 1;
            }
        }
    }
    cout << "gumar:" << gumarverj << "\nskizb" << skizb << "\nverj" << verj << "\n" << iterator << "\n";
    return 0;
}
