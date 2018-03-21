#include <iostream>
using namespace std;


int main () {

    int n;
    cout << "Enter a number from 1 to 9999: \n";
    cin >> n;

    if (n >= 1 && n <= 9999) {
        switch(n / 1000) {
            case 2 : cout << "erku";
	        		 break;
	        	case 3 : cout << "ereq";
	        		 break;
	    		case 4 : cout << "chors";
	             break;
	    		case 5 : cout << "hing";
	             break;
	    		case 6 : cout << "vec";
	             break;
	    		case 7 : cout << "yot";
	             break;
	    		case 8 : cout << "ut";
	             break;
	    		case 9 : cout << "inny";
	             break;
	     }

        if (n / 1000) {
            cout << " hazar ";
        }

        switch((n % 1000) / 100) {
            case 2 : cout << "erku";
                break;
            case 3 : cout << "ereq";
                break;
            case 4 : cout << "chors";
                break;
            case 5 : cout << "hing";
                break;
            case 6 : cout << "vec";
                break;
            case 7 : cout << "yot";
                break;
            case 8 : cout << "ut";
                break;
            case 9 : cout << "inny";
                break;
       }


       if ((n % 1000) / 100) {
           cout << " haryur ";
       }

       switch((n % 100) / 10) {
            case 1 : cout << "tasn";
    	          break;
            case 2 : cout << "qsan";
                break;
            case 3 : cout << "eresun";
                break;
            case 4 : cout << "qarasun";
                break;
            case 5 : cout << "hisun";
                break;
            case 6 : cout << "vatsun";
                break;
            case 7 : cout << "yotanasun";
                break;
            case 8 : cout << "utanasun";
                break;
            case 9 : cout << "innsun";
                break;

       }

       switch(n % 10) {
           case 1 : cout << "mek";
               break;
           case 2 : cout << "erku";
               break;
           case 3 : cout << "ereq";
               break;
           case 4 : cout << "chors";
               break;
           case 5 : cout << "hing";
               break;
           case 6 : cout << "vec";
               break;
           case 7 : cout << "yot";
               break;
           case 8 : cout << "ut";
               break;
           case 9 : cout << "inny";
               break;
       }
    } else {
          cout<<"Enter the correct number!";
    }



    return 0;
}
